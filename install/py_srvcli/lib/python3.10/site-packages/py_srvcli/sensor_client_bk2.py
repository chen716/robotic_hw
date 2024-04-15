import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SensorData
from std_msgs.msg import Float64MultiArray
from rclpy.executors import MultiThreadedExecutor
from queue import Queue, Empty
import time  # Import the time module

class SensorClient(Node):
    def __init__(self):
        super().__init__('sensor_client')
        self.client = self.create_client(SensorData, 'get_sensor_data')
        self.client2 = self.create_client(SensorData, 'get_sensor_data2')
        while not self.client.wait_for_service(timeout_sec=1.0) or not self.client2.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        self.data_queue = Queue()  # Thread-safe queue for data buffering
        self.timer = self.create_timer(0.002, self.publish_data)  # 500Hz publishing
        self.request_timer = self.create_timer(1.0, self.request_data)  # Adjust according to sensor speed

        self.publisher = self.create_publisher(Float64MultiArray, 'sensor_data', 10)

    def request_data(self):
        start_time = time.time()  # Start timing
        req = SensorData.Request()
        req.num_samples = 40
        future = self.client.call_async(req)
        future.add_done_callback(self.future_callback)
        end_time = time.time()  # End timing
        print(f"Request data processing time: {end_time - start_time:.6f} seconds")

    def future_callback(self, future):
        start_time = time.perf_counter() # Start timing
        try:
            response = future.result()
            for data_point in response.data:
                self.data_queue.put(data_point)  # Enqueue each data point
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}', exc_info=True)
        end_time = time.perf_counter()  # End timing
        print(f"Future callback processing time: {end_time - start_time:.6f} seconds")

    def publish_data(self):
        start_time = time.perf_counter() # Start timing
        try:
            # Dequeue a single data point for publishing
            if not self.data_queue.empty():
                data_point = self.data_queue.get_nowait()
                msg = Float64MultiArray()
                msg.data = [data_point]  # Publish one data point at a time
                self.publisher.publish(msg)
        except Empty:
            self.get_logger().warn('Data queue is empty, nothing to publish.')
        end_time = time.perf_counter()  # End timing
        #print(f"Publish data processing time: {end_time - start_time:.6f} seconds")

def main(args=None):
    rclpy.init(args=args)
    sensor_client = SensorClient()
    executor = MultiThreadedExecutor()
    rclpy.spin(sensor_client, executor)
    sensor_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SensorData
from std_msgs.msg import Float64MultiArray
from rclpy.executors import MultiThreadedExecutor
class SensorClient(Node):
    def __init__(self):
        super().__init__('sensor_client')
        self.client = self.create_client(SensorData, 'get_sensor_data')
        self.client2 = self.create_client(SensorData, 'get_sensor_data2')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.timer = self.create_timer(0.02, self.timer_callback)  # 500Hz
        self.timer2 = self.create_timer(0.02, self.timer_callback2)  # 500Hz
        self.publisher = self.create_publisher(Float64MultiArray, 'sensor_data', 10)
        self.publisher2 = self.create_publisher(Float64MultiArray, 'sensor_data2', 10)

    def timer_callback(self):
        req = SensorData.Request()
        req.num_samples = 40  # Number of samples per request
        future = self.client.call_async(req)
        future.add_done_callback(self.future_callback)

    def timer_callback2(self):
        req = SensorData.Request()
        req.num_samples = 40 
        future2 = self.client2.call_async(req)
        future2.add_done_callback(self.future_callback2)
        
    
    def future_callback(self, future):
        try:
            response = future.result()
            msg = Float64MultiArray()
            msg.data = response.data
            # self.get_logger().info(f"Successfully called get_sensor_data: {len(response.data)} samples")
            self.publisher.publish(msg)
        except Exception as e:
            self.get_logger().error('Service call failed %r' % (e,))
    def future_callback2(self, future):
        try:
            response = future.result()
            msg = Float64MultiArray()
            msg.data = response.data
            # self.get_logger().info(f"Successfully called get_sensor_data2: {len(response.data)} samples")
            self.publisher2.publish(msg)
        except Exception as e:
            self.get_logger().error('Service call failed %r' % (e,))

def main(args=None):
    rclpy.init(args=args)
    sensor_client = SensorClient()
    # rclpy.spin(sensor_client)
    executor = MultiThreadedExecutor()
    rclpy.spin(sensor_client, executor)
    sensor_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SensorData
from std_msgs.msg import Float64MultiArray, MultiArrayDimension
from rclpy.executors import MultiThreadedExecutor
from queue import Queue
import numpy as np

class SensorClient(Node):
    def __init__(self):
        super().__init__('sensor_client')
        self.service2 = ['get_sensor_data0', 'get_sensor_data1']
        self.client2 = [self.create_client(SensorData, service) for service in self.service2]
        for client in self.client2:
            while not client.wait_for_service(timeout_sec=1.0):
                self.get_logger().info(f'Service {client.srv_name} not available, waiting again...')
        self.data_queues = [Queue() for _ in self.service2]
        self.publisher2 = [self.create_publisher(Float64MultiArray, f'sensor_data{i}', 10) for i in range(len(self.service2))]
        self.moving_average_windows = [[] for _ in self.service2]
        self.num_samples = 2
        self.window_size = 8

        self.timer2 = [
            self.create_timer(0.002, self.make_timer_callback(index)) for index in range(len(self.service2))
        ]
        self.lasts = [[],[]]

    def make_timer_callback(self, index):
        def timer_callback():
            self.request_data(index)
            self.publish_data(index)
        return timer_callback

    def request_data(self, index):
        req = SensorData.Request(num_samples=self.num_samples)
        future = self.client2[index].call_async(req)
        future.add_done_callback(lambda future: self.future_callback(future, index))

    def future_callback(self, future, index):
        try:
            response = future.result()
            # msg = Float64MultiArray()
            data = response.data.data
            num_samples = len(data) // 6
            structured_data = [data[i*6:(i+1)*6] for i in range(num_samples)]
            # msg.layout.dim.append(MultiArrayDimension(label='dof', size=6, stride=1))
            # msg.layout.data_offset = 0
            # msg.data = np.mean(structured_data, axis=0).tolist()
            # self.publisher2[index].publish(msg)
            for data_set in structured_data:
                self.data_queues[index].put(data_set)
        except Exception as e:
            self.get_logger().error(f'Service call failed: {e}', exc_info=True)

    def publish_data(self, index):
        try:
            ct = 0
            msg = Float64MultiArray()
            while not self.data_queues[index].empty() and ct < self.num_samples:
                ct += 1
                data_set = self.data_queues[index].get_nowait()
                self.moving_average_windows[index].append(data_set)
                if len(self.moving_average_windows[index]) >= self.window_size:
                    # if ct == self.window_size:
                    avg_data = np.mean(self.moving_average_windows[index], axis=0).tolist()
                    #print(avg_data)
                    msg.layout.dim.append(MultiArrayDimension(label='dof', size=6, stride=1))
                    msg.layout.data_offset = 0
                    msg.data = avg_data
                    self.lasts[index] = avg_data

                    self.moving_average_windows[index].pop(0)
            msg.data = self.lasts[index]
            self.publisher2[index].publish(msg)
            #print(msg)
        except Exception as e:
            self.get_logger().warn(f'Data queue {index} is empty, nothing to publish.')

def main(args=None):
    rclpy.init(args=args)
    sensor_client = SensorClient()
    executor = MultiThreadedExecutor()
    rclpy.spin(sensor_client, executor)
    sensor_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

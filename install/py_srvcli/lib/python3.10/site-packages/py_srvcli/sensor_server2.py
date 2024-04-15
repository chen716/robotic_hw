#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SensorData
import argparse
import numpy as np
import socket

class SensorServer2(Node):
    def __init__(self, address, port):
        super().__init__('sensor_server2')
        self.service = self.create_service(SensorData, 'get_sensor_data2', self.handle_sensor_data)
        self.data = np.array([])
        self.address = address
        self.port = port
        self.init_sensor()

    def init_sensor(self):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_address = (self.address, self.port)
        self.sock.connect(server_address)
        self.get_logger().info('Sensor connected at {} port {}'.format(*server_address))

    def handle_sensor_data(self, request, response):
        self.sock.sendall(str(request.num_samples).encode())
        byte_data = self.sock.recv(10000)
        self.data = np.frombuffer(byte_data)
        response.data = self.data.tolist()
        return response

def main(args=None):
    rclpy.init(args=args)

    # Create an argument parser for handling command-line arguments
    # parser = argparse.ArgumentParser(description='Sensor Server Node')
    # parser.add_argument('--address', type=str, default='127.0.0.1', help='IP address of the sensor simulator')
    # parser.add_argument('--port', type=int, default=10000, help='Port number of the sensor simulator')
    # args = parser.parse_args(args=rclpy.utilities.remove_ros_args())

    sensor_server = SensorServer2("127.0.0.4", 10000)
    rclpy.spin(sensor_server)
    sensor_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

import rclpy
from rclpy.node import Node
from tutorial_interfaces.srv import SensorData
from std_msgs.msg import Float64MultiArray, MultiArrayDimension
import numpy as np
import socket
import time

class SensorServer(Node):
    def __init__(self, addresses, port):
        super().__init__('sensor_server')
        self.addresses = addresses
        self.port = port
        self.sockets = []
        self.init_sensors()
        self.service2 = [
            self.create_service(SensorData, 'get_sensor_data' + str(i), self.create_handler(i))
            for i in range(len(self.sockets))
        ]

    def init_sensors(self):
        for i, address in enumerate(self.addresses):
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            server_address = (address, self.port)
            sock.connect(server_address)
            self.get_logger().info(f'Sensor connected at {address} port {self.port}')
            self.sockets.append(sock)

    def create_handler(self, index):
        def handle_sensor_data(request, response):
            # start_time = time.time()
            self.sockets[index].sendall(str(request.num_samples).encode())
            byte_data = self.sockets[index].recv(10000)
            data_array = np.frombuffer(byte_data, dtype=np.float64).reshape(request.num_samples, 6)
            float_array = Float64MultiArray()
            float_array.layout.dim.append(MultiArrayDimension(label='samples', size=request.num_samples, stride=6 * request.num_samples))
            float_array.layout.dim.append(MultiArrayDimension(label='values', size=6, stride=6))
            float_array.layout.data_offset = 0
            float_array.data = data_array.flatten().tolist()
            response.data = float_array
            # self.get_logger().info(f"Sensor {index} delay: {time.time() - start_time:.6f} seconds")
            return response
        return handle_sensor_data

def main(args=None):
    rclpy.init(args=args)
    addresses = ["127.0.0.2", "127.0.0.3"]
    port = 10000
    sensor_server = SensorServer(addresses, port)
    rclpy.spin(sensor_server)
    sensor_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

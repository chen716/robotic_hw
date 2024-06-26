# Robotic_HW
Yang Chen
 
## Implementation
The main package {py_srvcli} has two files, sensor_server and sensor_client. To run, edit the server ip in sensor_server and compile. Then run: 

ros2 run py_srvcli server   

Followed by ros2 run py_srvcli client
- The first task is to make a custom service for 3-DOF sensor
  Creates a service to the given ip, listed in sensor_server.py under py_srvcli
- The second task is to make a ROS2 service server that continuously reads data from the sensor and has the latest filter data available for the client service that you make.
  Uses a client to connect, connects at 500 hz calling the sensors (changable btw) with different sample rate, then apply a moving-window filter to the results to get the sensor_readings
- Finally, please make a simple client that calls two of these services and publishes them to a topic at 500Hz. Please keep in mind that your service servers can run slower than 500Hz.
  Uses the same approach above, but creating two services. 
- You can define a second server in the simulator to modify the code and run two at the same time.
  Edit: the ip is changed as to 172.0.0.1 & 172.0.0.2, using port 10000
- You can check the example.py to see how to make calls to the sensor

## Grading Criteria
- We’re looking for code that is clean, readable, performant, and maintainable.
- The developer must think through the process of deploying and using the solution and provide the necessary documentation. 
- The sensor samples with 2000Hz, and you can request a specific number of samples in each call. Each call also has a ~1ms delay on top of the sampling time. We would like to hear your thought on picking the number of samples that you read in each call. 

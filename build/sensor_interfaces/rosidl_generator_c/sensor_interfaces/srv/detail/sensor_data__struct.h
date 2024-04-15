// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_
#define SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SensorData in the package sensor_interfaces.
typedef struct sensor_interfaces__srv__SensorData_Request
{
  /// Number of samples requested
  int32_t num_samples;
} sensor_interfaces__srv__SensorData_Request;

// Struct for a sequence of sensor_interfaces__srv__SensorData_Request.
typedef struct sensor_interfaces__srv__SensorData_Request__Sequence
{
  sensor_interfaces__srv__SensorData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__srv__SensorData_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in srv/SensorData in the package sensor_interfaces.
typedef struct sensor_interfaces__srv__SensorData_Response
{
  /// Array of sensor data
  std_msgs__msg__Float64MultiArray data;
} sensor_interfaces__srv__SensorData_Response;

// Struct for a sequence of sensor_interfaces__srv__SensorData_Response.
typedef struct sensor_interfaces__srv__SensorData_Response__Sequence
{
  sensor_interfaces__srv__SensorData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__srv__SensorData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  sensor_interfaces__srv__SensorData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  sensor_interfaces__srv__SensorData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SensorData in the package sensor_interfaces.
typedef struct sensor_interfaces__srv__SensorData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  sensor_interfaces__srv__SensorData_Request__Sequence request;
  sensor_interfaces__srv__SensorData_Response__Sequence response;
} sensor_interfaces__srv__SensorData_Event;

// Struct for a sequence of sensor_interfaces__srv__SensorData_Event.
typedef struct sensor_interfaces__srv__SensorData_Event__Sequence
{
  sensor_interfaces__srv__SensorData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__srv__SensorData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

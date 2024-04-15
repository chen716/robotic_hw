// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_H_
#define CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SensorData in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SensorData_Request
{
  int64_t num_samples;
} cpp_sensor_server__srv__SensorData_Request;

// Struct for a sequence of cpp_sensor_server__srv__SensorData_Request.
typedef struct cpp_sensor_server__srv__SensorData_Request__Sequence
{
  cpp_sensor_server__srv__SensorData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SensorData_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SensorData in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SensorData_Response
{
  rosidl_runtime_c__double__Sequence data;
} cpp_sensor_server__srv__SensorData_Response;

// Struct for a sequence of cpp_sensor_server__srv__SensorData_Response.
typedef struct cpp_sensor_server__srv__SensorData_Response__Sequence
{
  cpp_sensor_server__srv__SensorData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SensorData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cpp_sensor_server__srv__SensorData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cpp_sensor_server__srv__SensorData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SensorData in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SensorData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cpp_sensor_server__srv__SensorData_Request__Sequence request;
  cpp_sensor_server__srv__SensorData_Response__Sequence response;
} cpp_sensor_server__srv__SensorData_Event;

// Struct for a sequence of cpp_sensor_server__srv__SensorData_Event.
typedef struct cpp_sensor_server__srv__SensorData_Event__Sequence
{
  cpp_sensor_server__srv__SensorData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SensorData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

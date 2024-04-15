// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SensorData in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SensorData_Request
{
  /// Number of samples requested
  int32_t num_samples;
} tutorial_interfaces__srv__SensorData_Request;

// Struct for a sequence of tutorial_interfaces__srv__SensorData_Request.
typedef struct tutorial_interfaces__srv__SensorData_Request__Sequence
{
  tutorial_interfaces__srv__SensorData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SensorData_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in srv/SensorData in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SensorData_Response
{
  /// Array of sensor data
  std_msgs__msg__Float64MultiArray data;
} tutorial_interfaces__srv__SensorData_Response;

// Struct for a sequence of tutorial_interfaces__srv__SensorData_Response.
typedef struct tutorial_interfaces__srv__SensorData_Response__Sequence
{
  tutorial_interfaces__srv__SensorData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SensorData_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  tutorial_interfaces__srv__SensorData_Event__request__MAX_SIZE = 1
};
// response
enum
{
  tutorial_interfaces__srv__SensorData_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SensorData in the package tutorial_interfaces.
typedef struct tutorial_interfaces__srv__SensorData_Event
{
  service_msgs__msg__ServiceEventInfo info;
  tutorial_interfaces__srv__SensorData_Request__Sequence request;
  tutorial_interfaces__srv__SensorData_Response__Sequence response;
} tutorial_interfaces__srv__SensorData_Event;

// Struct for a sequence of tutorial_interfaces__srv__SensorData_Event.
typedef struct tutorial_interfaces__srv__SensorData_Event__Sequence
{
  tutorial_interfaces__srv__SensorData_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__srv__SensorData_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__STRUCT_H_

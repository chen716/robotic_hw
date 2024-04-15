// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_sensor_server:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_H_
#define CPP_SENSOR_SERVER__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SampleRequest in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SampleRequest_Request
{
  int32_t requestsample;
} cpp_sensor_server__srv__SampleRequest_Request;

// Struct for a sequence of cpp_sensor_server__srv__SampleRequest_Request.
typedef struct cpp_sensor_server__srv__SampleRequest_Request__Sequence
{
  cpp_sensor_server__srv__SampleRequest_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SampleRequest_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in srv/SampleRequest in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SampleRequest_Response
{
  std_msgs__msg__Float64MultiArray data;
} cpp_sensor_server__srv__SampleRequest_Response;

// Struct for a sequence of cpp_sensor_server__srv__SampleRequest_Response.
typedef struct cpp_sensor_server__srv__SampleRequest_Response__Sequence
{
  cpp_sensor_server__srv__SampleRequest_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SampleRequest_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  cpp_sensor_server__srv__SampleRequest_Event__request__MAX_SIZE = 1
};
// response
enum
{
  cpp_sensor_server__srv__SampleRequest_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SampleRequest in the package cpp_sensor_server.
typedef struct cpp_sensor_server__srv__SampleRequest_Event
{
  service_msgs__msg__ServiceEventInfo info;
  cpp_sensor_server__srv__SampleRequest_Request__Sequence request;
  cpp_sensor_server__srv__SampleRequest_Response__Sequence response;
} cpp_sensor_server__srv__SampleRequest_Event;

// Struct for a sequence of cpp_sensor_server__srv__SampleRequest_Event.
typedef struct cpp_sensor_server__srv__SampleRequest_Event__Sequence
{
  cpp_sensor_server__srv__SampleRequest_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_sensor_server__srv__SampleRequest_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_SENSOR_SERVER__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_H_

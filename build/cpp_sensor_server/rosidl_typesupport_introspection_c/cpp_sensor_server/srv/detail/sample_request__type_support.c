// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_sensor_server:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_sensor_server/srv/detail/sample_request__rosidl_typesupport_introspection_c.h"
#include "cpp_sensor_server/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_sensor_server/srv/detail/sample_request__functions.h"
#include "cpp_sensor_server/srv/detail/sample_request__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_sensor_server__srv__SampleRequest_Request__init(message_memory);
}

void cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_fini_function(void * message_memory)
{
  cpp_sensor_server__srv__SampleRequest_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_member_array[1] = {
  {
    "requestsample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_sensor_server__srv__SampleRequest_Request, requestsample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_members = {
  "cpp_sensor_server__srv",  // message namespace
  "SampleRequest_Request",  // message name
  1,  // number of fields
  sizeof(cpp_sensor_server__srv__SampleRequest_Request),
  cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_member_array,  // message members
  cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle = {
  0,
  &cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_members,
  get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SampleRequest_Request__get_type_hash,
  &cpp_sensor_server__srv__SampleRequest_Request__get_type_description,
  &cpp_sensor_server__srv__SampleRequest_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_sensor_server
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Request)() {
  if (!cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle.typesupport_identifier) {
    cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cpp_sensor_server/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__functions.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__struct.h"


// Include directives for member types
// Member `data`
#include "std_msgs/msg/float64_multi_array.h"
// Member `data`
#include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_sensor_server__srv__SampleRequest_Response__init(message_memory);
}

void cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_fini_function(void * message_memory)
{
  cpp_sensor_server__srv__SampleRequest_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_sensor_server__srv__SampleRequest_Response, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_members = {
  "cpp_sensor_server__srv",  // message namespace
  "SampleRequest_Response",  // message name
  1,  // number of fields
  sizeof(cpp_sensor_server__srv__SampleRequest_Response),
  cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_member_array,  // message members
  cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle = {
  0,
  &cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_members,
  get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SampleRequest_Response__get_type_hash,
  &cpp_sensor_server__srv__SampleRequest_Response__get_type_description,
  &cpp_sensor_server__srv__SampleRequest_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_sensor_server
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Response)() {
  cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  if (!cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle.typesupport_identifier) {
    cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cpp_sensor_server/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__functions.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "cpp_sensor_server/srv/sample_request.h"
// Member `request`
// Member `response`
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_sensor_server__srv__SampleRequest_Event__init(message_memory);
}

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_fini_function(void * message_memory)
{
  cpp_sensor_server__srv__SampleRequest_Event__fini(message_memory);
}

size_t cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__size_function__SampleRequest_Event__request(
  const void * untyped_member)
{
  const cpp_sensor_server__srv__SampleRequest_Request__Sequence * member =
    (const cpp_sensor_server__srv__SampleRequest_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__request(
  const void * untyped_member, size_t index)
{
  const cpp_sensor_server__srv__SampleRequest_Request__Sequence * member =
    (const cpp_sensor_server__srv__SampleRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__request(
  void * untyped_member, size_t index)
{
  cpp_sensor_server__srv__SampleRequest_Request__Sequence * member =
    (cpp_sensor_server__srv__SampleRequest_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__fetch_function__SampleRequest_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cpp_sensor_server__srv__SampleRequest_Request * item =
    ((const cpp_sensor_server__srv__SampleRequest_Request *)
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__request(untyped_member, index));
  cpp_sensor_server__srv__SampleRequest_Request * value =
    (cpp_sensor_server__srv__SampleRequest_Request *)(untyped_value);
  *value = *item;
}

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__assign_function__SampleRequest_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cpp_sensor_server__srv__SampleRequest_Request * item =
    ((cpp_sensor_server__srv__SampleRequest_Request *)
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__request(untyped_member, index));
  const cpp_sensor_server__srv__SampleRequest_Request * value =
    (const cpp_sensor_server__srv__SampleRequest_Request *)(untyped_value);
  *item = *value;
}

bool cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__resize_function__SampleRequest_Event__request(
  void * untyped_member, size_t size)
{
  cpp_sensor_server__srv__SampleRequest_Request__Sequence * member =
    (cpp_sensor_server__srv__SampleRequest_Request__Sequence *)(untyped_member);
  cpp_sensor_server__srv__SampleRequest_Request__Sequence__fini(member);
  return cpp_sensor_server__srv__SampleRequest_Request__Sequence__init(member, size);
}

size_t cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__size_function__SampleRequest_Event__response(
  const void * untyped_member)
{
  const cpp_sensor_server__srv__SampleRequest_Response__Sequence * member =
    (const cpp_sensor_server__srv__SampleRequest_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__response(
  const void * untyped_member, size_t index)
{
  const cpp_sensor_server__srv__SampleRequest_Response__Sequence * member =
    (const cpp_sensor_server__srv__SampleRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__response(
  void * untyped_member, size_t index)
{
  cpp_sensor_server__srv__SampleRequest_Response__Sequence * member =
    (cpp_sensor_server__srv__SampleRequest_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__fetch_function__SampleRequest_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cpp_sensor_server__srv__SampleRequest_Response * item =
    ((const cpp_sensor_server__srv__SampleRequest_Response *)
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__response(untyped_member, index));
  cpp_sensor_server__srv__SampleRequest_Response * value =
    (cpp_sensor_server__srv__SampleRequest_Response *)(untyped_value);
  *value = *item;
}

void cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__assign_function__SampleRequest_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cpp_sensor_server__srv__SampleRequest_Response * item =
    ((cpp_sensor_server__srv__SampleRequest_Response *)
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__response(untyped_member, index));
  const cpp_sensor_server__srv__SampleRequest_Response * value =
    (const cpp_sensor_server__srv__SampleRequest_Response *)(untyped_value);
  *item = *value;
}

bool cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__resize_function__SampleRequest_Event__response(
  void * untyped_member, size_t size)
{
  cpp_sensor_server__srv__SampleRequest_Response__Sequence * member =
    (cpp_sensor_server__srv__SampleRequest_Response__Sequence *)(untyped_member);
  cpp_sensor_server__srv__SampleRequest_Response__Sequence__fini(member);
  return cpp_sensor_server__srv__SampleRequest_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_sensor_server__srv__SampleRequest_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(cpp_sensor_server__srv__SampleRequest_Event, request),  // bytes offset in struct
    NULL,  // default value
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__size_function__SampleRequest_Event__request,  // size() function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__request,  // get_const(index) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__request,  // get(index) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__fetch_function__SampleRequest_Event__request,  // fetch(index, &value) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__assign_function__SampleRequest_Event__request,  // assign(index, value) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__resize_function__SampleRequest_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(cpp_sensor_server__srv__SampleRequest_Event, response),  // bytes offset in struct
    NULL,  // default value
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__size_function__SampleRequest_Event__response,  // size() function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_const_function__SampleRequest_Event__response,  // get_const(index) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__get_function__SampleRequest_Event__response,  // get(index) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__fetch_function__SampleRequest_Event__response,  // fetch(index, &value) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__assign_function__SampleRequest_Event__response,  // assign(index, value) function pointer
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__resize_function__SampleRequest_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_members = {
  "cpp_sensor_server__srv",  // message namespace
  "SampleRequest_Event",  // message name
  3,  // number of fields
  sizeof(cpp_sensor_server__srv__SampleRequest_Event),
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_member_array,  // message members
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_type_support_handle = {
  0,
  &cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_members,
  get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SampleRequest_Event__get_type_hash,
  &cpp_sensor_server__srv__SampleRequest_Event__get_type_description,
  &cpp_sensor_server__srv__SampleRequest_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_sensor_server
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Event)() {
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Request)();
  cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Response)();
  if (!cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_type_support_handle.typesupport_identifier) {
    cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cpp_sensor_server/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_members = {
  "cpp_sensor_server__srv",  // service namespace
  "SampleRequest",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle,
  NULL,  // response message
  // cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle
  NULL  // event_message
  // cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle
};


static rosidl_service_type_support_t cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_type_support_handle = {
  0,
  &cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_members,
  get_service_typesupport_handle_function,
  &cpp_sensor_server__srv__SampleRequest_Request__rosidl_typesupport_introspection_c__SampleRequest_Request_message_type_support_handle,
  &cpp_sensor_server__srv__SampleRequest_Response__rosidl_typesupport_introspection_c__SampleRequest_Response_message_type_support_handle,
  &cpp_sensor_server__srv__SampleRequest_Event__rosidl_typesupport_introspection_c__SampleRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cpp_sensor_server,
    srv,
    SampleRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    cpp_sensor_server,
    srv,
    SampleRequest
  ),
  &cpp_sensor_server__srv__SampleRequest__get_type_hash,
  &cpp_sensor_server__srv__SampleRequest__get_type_description,
  &cpp_sensor_server__srv__SampleRequest__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_sensor_server
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest)() {
  if (!cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_type_support_handle.typesupport_identifier) {
    cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_sensor_server, srv, SampleRequest_Event)()->data;
  }

  return &cpp_sensor_server__srv__detail__sample_request__rosidl_typesupport_introspection_c__SampleRequest_service_type_support_handle;
}

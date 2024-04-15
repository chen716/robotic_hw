// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cpp_sensor_server:msg/SampleArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_sensor_server/msg/detail/sample_array__functions.h"
#include "cpp_sensor_server/msg/detail/sample_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cpp_sensor_server
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SampleArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cpp_sensor_server::msg::SampleArray(_init);
}

void SampleArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cpp_sensor_server::msg::SampleArray *>(message_memory);
  typed_message->~SampleArray();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SampleArray_message_member_array[1] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64MultiArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_sensor_server::msg::SampleArray, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SampleArray_message_members = {
  "cpp_sensor_server::msg",  // message namespace
  "SampleArray",  // message name
  1,  // number of fields
  sizeof(cpp_sensor_server::msg::SampleArray),
  SampleArray_message_member_array,  // message members
  SampleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  SampleArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SampleArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SampleArray_message_members,
  get_message_typesupport_handle_function,
  &cpp_sensor_server__msg__SampleArray__get_type_hash,
  &cpp_sensor_server__msg__SampleArray__get_type_description,
  &cpp_sensor_server__msg__SampleArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cpp_sensor_server


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_sensor_server::msg::SampleArray>()
{
  return &::cpp_sensor_server::msg::rosidl_typesupport_introspection_cpp::SampleArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_sensor_server, msg, SampleArray)() {
  return &::cpp_sensor_server::msg::rosidl_typesupport_introspection_cpp::SampleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

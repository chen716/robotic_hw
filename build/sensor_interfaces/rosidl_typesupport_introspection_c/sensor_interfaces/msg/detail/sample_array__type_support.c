// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensor_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensor_interfaces/msg/detail/sample_array__rosidl_typesupport_introspection_c.h"
#include "sensor_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensor_interfaces/msg/detail/sample_array__functions.h"
#include "sensor_interfaces/msg/detail/sample_array__struct.h"


// Include directives for member types
// Member `data`
#include "std_msgs/msg/float64_multi_array.h"
// Member `data`
#include "std_msgs/msg/detail/float64_multi_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensor_interfaces__msg__SampleArray__init(message_memory);
}

void sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_fini_function(void * message_memory)
{
  sensor_interfaces__msg__SampleArray__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensor_interfaces__msg__SampleArray, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_members = {
  "sensor_interfaces__msg",  // message namespace
  "SampleArray",  // message name
  1,  // number of fields
  sizeof(sensor_interfaces__msg__SampleArray),
  sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_member_array,  // message members
  sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_init_function,  // function to initialize message memory (memory has to be allocated)
  sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_type_support_handle = {
  0,
  &sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_members,
  get_message_typesupport_handle_function,
  &sensor_interfaces__msg__SampleArray__get_type_hash,
  &sensor_interfaces__msg__SampleArray__get_type_description,
  &sensor_interfaces__msg__SampleArray__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensor_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, msg, SampleArray)() {
  sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64MultiArray)();
  if (!sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_type_support_handle.typesupport_identifier) {
    sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensor_interfaces__msg__SampleArray__rosidl_typesupport_introspection_c__SampleArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

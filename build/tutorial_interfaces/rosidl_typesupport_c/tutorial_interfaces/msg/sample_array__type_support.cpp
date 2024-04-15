// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_interfaces/msg/detail/sample_array__struct.h"
#include "tutorial_interfaces/msg/detail/sample_array__type_support.h"
#include "tutorial_interfaces/msg/detail/sample_array__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _SampleArray_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleArray_type_support_ids_t;

static const _SampleArray_type_support_ids_t _SampleArray_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SampleArray_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SampleArray_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SampleArray_type_support_symbol_names_t _SampleArray_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, msg, SampleArray)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, msg, SampleArray)),
  }
};

typedef struct _SampleArray_type_support_data_t
{
  void * data[2];
} _SampleArray_type_support_data_t;

static _SampleArray_type_support_data_t _SampleArray_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SampleArray_message_typesupport_map = {
  2,
  "tutorial_interfaces",
  &_SampleArray_message_typesupport_ids.typesupport_identifier[0],
  &_SampleArray_message_typesupport_symbol_names.symbol_name[0],
  &_SampleArray_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleArray_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleArray_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_interfaces__msg__SampleArray__get_type_hash,
  &tutorial_interfaces__msg__SampleArray__get_type_description,
  &tutorial_interfaces__msg__SampleArray__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, msg, SampleArray)() {
  return &::tutorial_interfaces::msg::rosidl_typesupport_c::SampleArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

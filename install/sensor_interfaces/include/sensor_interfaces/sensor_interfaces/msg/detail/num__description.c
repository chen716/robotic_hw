// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sensor_interfaces:msg/Num.idl
// generated code does not contain a copyright notice

#include "sensor_interfaces/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0x10, 0x4f, 0x73, 0xbb, 0xa2, 0x8d, 0x44,
      0x97, 0xf1, 0xcf, 0xbe, 0x70, 0x5f, 0x67, 0xc8,
      0x19, 0x6b, 0xe1, 0x34, 0xa2, 0xb6, 0xa2, 0xa7,
      0xd2, 0x8b, 0x05, 0x58, 0x68, 0x55, 0x2c, 0x67,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char sensor_interfaces__msg__Num__TYPE_NAME[] = "sensor_interfaces/msg/Num";

// Define type names, field names, and default values
static char sensor_interfaces__msg__Num__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field sensor_interfaces__msg__Num__FIELDS[] = {
  {
    {sensor_interfaces__msg__Num__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__msg__Num__TYPE_NAME, 25, 25},
      {sensor_interfaces__msg__Num__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__msg__Num__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 9, 9},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

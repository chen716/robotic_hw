// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_
#define SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.h"

/// Struct defined in msg/SampleArray in the package sensor_interfaces.
typedef struct sensor_interfaces__msg__SampleArray
{
  std_msgs__msg__Float64MultiArray data;
} sensor_interfaces__msg__SampleArray;

// Struct for a sequence of sensor_interfaces__msg__SampleArray.
typedef struct sensor_interfaces__msg__SampleArray__Sequence
{
  sensor_interfaces__msg__SampleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interfaces__msg__SampleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_

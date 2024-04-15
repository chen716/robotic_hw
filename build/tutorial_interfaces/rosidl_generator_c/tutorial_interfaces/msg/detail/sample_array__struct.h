// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_

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

/// Struct defined in msg/SampleArray in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__SampleArray
{
  std_msgs__msg__Float64MultiArray data;
} tutorial_interfaces__msg__SampleArray;

// Struct for a sequence of tutorial_interfaces__msg__SampleArray.
typedef struct tutorial_interfaces__msg__SampleArray__Sequence
{
  tutorial_interfaces__msg__SampleArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__SampleArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_H_

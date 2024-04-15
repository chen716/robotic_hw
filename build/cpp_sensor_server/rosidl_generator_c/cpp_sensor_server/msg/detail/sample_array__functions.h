// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cpp_sensor_server:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__FUNCTIONS_H_
#define CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "cpp_sensor_server/msg/rosidl_generator_c__visibility_control.h"

#include "cpp_sensor_server/msg/detail/sample_array__struct.h"

/// Initialize msg/SampleArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cpp_sensor_server__msg__SampleArray
 * )) before or use
 * cpp_sensor_server__msg__SampleArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__init(cpp_sensor_server__msg__SampleArray * msg);

/// Finalize msg/SampleArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
void
cpp_sensor_server__msg__SampleArray__fini(cpp_sensor_server__msg__SampleArray * msg);

/// Create msg/SampleArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cpp_sensor_server__msg__SampleArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
cpp_sensor_server__msg__SampleArray *
cpp_sensor_server__msg__SampleArray__create();

/// Destroy msg/SampleArray message.
/**
 * It calls
 * cpp_sensor_server__msg__SampleArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
void
cpp_sensor_server__msg__SampleArray__destroy(cpp_sensor_server__msg__SampleArray * msg);

/// Check for msg/SampleArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__are_equal(const cpp_sensor_server__msg__SampleArray * lhs, const cpp_sensor_server__msg__SampleArray * rhs);

/// Copy a msg/SampleArray message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__copy(
  const cpp_sensor_server__msg__SampleArray * input,
  cpp_sensor_server__msg__SampleArray * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__msg__SampleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_runtime_c__type_description__TypeDescription *
cpp_sensor_server__msg__SampleArray__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__msg__SampleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__msg__SampleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/SampleArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * cpp_sensor_server__msg__SampleArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__Sequence__init(cpp_sensor_server__msg__SampleArray__Sequence * array, size_t size);

/// Finalize array of msg/SampleArray messages.
/**
 * It calls
 * cpp_sensor_server__msg__SampleArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
void
cpp_sensor_server__msg__SampleArray__Sequence__fini(cpp_sensor_server__msg__SampleArray__Sequence * array);

/// Create array of msg/SampleArray messages.
/**
 * It allocates the memory for the array and calls
 * cpp_sensor_server__msg__SampleArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
cpp_sensor_server__msg__SampleArray__Sequence *
cpp_sensor_server__msg__SampleArray__Sequence__create(size_t size);

/// Destroy array of msg/SampleArray messages.
/**
 * It calls
 * cpp_sensor_server__msg__SampleArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
void
cpp_sensor_server__msg__SampleArray__Sequence__destroy(cpp_sensor_server__msg__SampleArray__Sequence * array);

/// Check for msg/SampleArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__Sequence__are_equal(const cpp_sensor_server__msg__SampleArray__Sequence * lhs, const cpp_sensor_server__msg__SampleArray__Sequence * rhs);

/// Copy an array of msg/SampleArray messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
bool
cpp_sensor_server__msg__SampleArray__Sequence__copy(
  const cpp_sensor_server__msg__SampleArray__Sequence * input,
  cpp_sensor_server__msg__SampleArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__FUNCTIONS_H_

// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tutorial_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__FUNCTIONS_H_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__FUNCTIONS_H_

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
#include "tutorial_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "tutorial_interfaces/srv/detail/sensor_data__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SensorData__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SensorData__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SensorData__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SensorData__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/SensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__srv__SensorData_Request
 * )) before or use
 * tutorial_interfaces__srv__SensorData_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__init(tutorial_interfaces__srv__SensorData_Request * msg);

/// Finalize srv/SensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Request__fini(tutorial_interfaces__srv__SensorData_Request * msg);

/// Create srv/SensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__srv__SensorData_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Request *
tutorial_interfaces__srv__SensorData_Request__create();

/// Destroy srv/SensorData message.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Request__destroy(tutorial_interfaces__srv__SensorData_Request * msg);

/// Check for srv/SensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__are_equal(const tutorial_interfaces__srv__SensorData_Request * lhs, const tutorial_interfaces__srv__SensorData_Request * rhs);

/// Copy a srv/SensorData message.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__copy(
  const tutorial_interfaces__srv__SensorData_Request * input,
  tutorial_interfaces__srv__SensorData_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SensorData_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SensorData_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SensorData_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SensorData_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__srv__SensorData_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__Sequence__init(tutorial_interfaces__srv__SensorData_Request__Sequence * array, size_t size);

/// Finalize array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Request__Sequence__fini(tutorial_interfaces__srv__SensorData_Request__Sequence * array);

/// Create array of srv/SensorData messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__srv__SensorData_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Request__Sequence *
tutorial_interfaces__srv__SensorData_Request__Sequence__create(size_t size);

/// Destroy array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Request__Sequence__destroy(tutorial_interfaces__srv__SensorData_Request__Sequence * array);

/// Check for srv/SensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__Sequence__are_equal(const tutorial_interfaces__srv__SensorData_Request__Sequence * lhs, const tutorial_interfaces__srv__SensorData_Request__Sequence * rhs);

/// Copy an array of srv/SensorData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Request__Sequence__copy(
  const tutorial_interfaces__srv__SensorData_Request__Sequence * input,
  tutorial_interfaces__srv__SensorData_Request__Sequence * output);

/// Initialize srv/SensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__srv__SensorData_Response
 * )) before or use
 * tutorial_interfaces__srv__SensorData_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__init(tutorial_interfaces__srv__SensorData_Response * msg);

/// Finalize srv/SensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Response__fini(tutorial_interfaces__srv__SensorData_Response * msg);

/// Create srv/SensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__srv__SensorData_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Response *
tutorial_interfaces__srv__SensorData_Response__create();

/// Destroy srv/SensorData message.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Response__destroy(tutorial_interfaces__srv__SensorData_Response * msg);

/// Check for srv/SensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__are_equal(const tutorial_interfaces__srv__SensorData_Response * lhs, const tutorial_interfaces__srv__SensorData_Response * rhs);

/// Copy a srv/SensorData message.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__copy(
  const tutorial_interfaces__srv__SensorData_Response * input,
  tutorial_interfaces__srv__SensorData_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SensorData_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SensorData_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SensorData_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SensorData_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__srv__SensorData_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__Sequence__init(tutorial_interfaces__srv__SensorData_Response__Sequence * array, size_t size);

/// Finalize array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Response__Sequence__fini(tutorial_interfaces__srv__SensorData_Response__Sequence * array);

/// Create array of srv/SensorData messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__srv__SensorData_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Response__Sequence *
tutorial_interfaces__srv__SensorData_Response__Sequence__create(size_t size);

/// Destroy array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Response__Sequence__destroy(tutorial_interfaces__srv__SensorData_Response__Sequence * array);

/// Check for srv/SensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__Sequence__are_equal(const tutorial_interfaces__srv__SensorData_Response__Sequence * lhs, const tutorial_interfaces__srv__SensorData_Response__Sequence * rhs);

/// Copy an array of srv/SensorData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Response__Sequence__copy(
  const tutorial_interfaces__srv__SensorData_Response__Sequence * input,
  tutorial_interfaces__srv__SensorData_Response__Sequence * output);

/// Initialize srv/SensorData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tutorial_interfaces__srv__SensorData_Event
 * )) before or use
 * tutorial_interfaces__srv__SensorData_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__init(tutorial_interfaces__srv__SensorData_Event * msg);

/// Finalize srv/SensorData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Event__fini(tutorial_interfaces__srv__SensorData_Event * msg);

/// Create srv/SensorData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tutorial_interfaces__srv__SensorData_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Event *
tutorial_interfaces__srv__SensorData_Event__create();

/// Destroy srv/SensorData message.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Event__destroy(tutorial_interfaces__srv__SensorData_Event * msg);

/// Check for srv/SensorData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__are_equal(const tutorial_interfaces__srv__SensorData_Event * lhs, const tutorial_interfaces__srv__SensorData_Event * rhs);

/// Copy a srv/SensorData message.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__copy(
  const tutorial_interfaces__srv__SensorData_Event * input,
  tutorial_interfaces__srv__SensorData_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_type_hash_t *
tutorial_interfaces__srv__SensorData_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
tutorial_interfaces__srv__SensorData_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource *
tutorial_interfaces__srv__SensorData_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
tutorial_interfaces__srv__SensorData_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/SensorData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tutorial_interfaces__srv__SensorData_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__Sequence__init(tutorial_interfaces__srv__SensorData_Event__Sequence * array, size_t size);

/// Finalize array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Event__Sequence__fini(tutorial_interfaces__srv__SensorData_Event__Sequence * array);

/// Create array of srv/SensorData messages.
/**
 * It allocates the memory for the array and calls
 * tutorial_interfaces__srv__SensorData_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
tutorial_interfaces__srv__SensorData_Event__Sequence *
tutorial_interfaces__srv__SensorData_Event__Sequence__create(size_t size);

/// Destroy array of srv/SensorData messages.
/**
 * It calls
 * tutorial_interfaces__srv__SensorData_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
void
tutorial_interfaces__srv__SensorData_Event__Sequence__destroy(tutorial_interfaces__srv__SensorData_Event__Sequence * array);

/// Check for srv/SensorData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__Sequence__are_equal(const tutorial_interfaces__srv__SensorData_Event__Sequence * lhs, const tutorial_interfaces__srv__SensorData_Event__Sequence * rhs);

/// Copy an array of srv/SensorData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tutorial_interfaces
bool
tutorial_interfaces__srv__SensorData_Event__Sequence__copy(
  const tutorial_interfaces__srv__SensorData_Event__Sequence * input,
  tutorial_interfaces__srv__SensorData_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__FUNCTIONS_H_

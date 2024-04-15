// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/detail/sample_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "std_msgs/msg/detail/float64_multi_array__functions.h"

bool
tutorial_interfaces__msg__SampleArray__init(tutorial_interfaces__msg__SampleArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!std_msgs__msg__Float64MultiArray__init(&msg->data)) {
    tutorial_interfaces__msg__SampleArray__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__msg__SampleArray__fini(tutorial_interfaces__msg__SampleArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  std_msgs__msg__Float64MultiArray__fini(&msg->data);
}

bool
tutorial_interfaces__msg__SampleArray__are_equal(const tutorial_interfaces__msg__SampleArray * lhs, const tutorial_interfaces__msg__SampleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!std_msgs__msg__Float64MultiArray__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__msg__SampleArray__copy(
  const tutorial_interfaces__msg__SampleArray * input,
  tutorial_interfaces__msg__SampleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!std_msgs__msg__Float64MultiArray__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

tutorial_interfaces__msg__SampleArray *
tutorial_interfaces__msg__SampleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__SampleArray * msg = (tutorial_interfaces__msg__SampleArray *)allocator.allocate(sizeof(tutorial_interfaces__msg__SampleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__msg__SampleArray));
  bool success = tutorial_interfaces__msg__SampleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__msg__SampleArray__destroy(tutorial_interfaces__msg__SampleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tutorial_interfaces__msg__SampleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tutorial_interfaces__msg__SampleArray__Sequence__init(tutorial_interfaces__msg__SampleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__SampleArray * data = NULL;

  if (size) {
    data = (tutorial_interfaces__msg__SampleArray *)allocator.zero_allocate(size, sizeof(tutorial_interfaces__msg__SampleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__msg__SampleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__msg__SampleArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tutorial_interfaces__msg__SampleArray__Sequence__fini(tutorial_interfaces__msg__SampleArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__msg__SampleArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tutorial_interfaces__msg__SampleArray__Sequence *
tutorial_interfaces__msg__SampleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tutorial_interfaces__msg__SampleArray__Sequence * array = (tutorial_interfaces__msg__SampleArray__Sequence *)allocator.allocate(sizeof(tutorial_interfaces__msg__SampleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__msg__SampleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__msg__SampleArray__Sequence__destroy(tutorial_interfaces__msg__SampleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tutorial_interfaces__msg__SampleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tutorial_interfaces__msg__SampleArray__Sequence__are_equal(const tutorial_interfaces__msg__SampleArray__Sequence * lhs, const tutorial_interfaces__msg__SampleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__msg__SampleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__msg__SampleArray__Sequence__copy(
  const tutorial_interfaces__msg__SampleArray__Sequence * input,
  tutorial_interfaces__msg__SampleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__msg__SampleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tutorial_interfaces__msg__SampleArray * data =
      (tutorial_interfaces__msg__SampleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__msg__SampleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__msg__SampleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tutorial_interfaces__msg__SampleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

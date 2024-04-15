// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_sensor_server:srv/SampleRequest.idl
// generated code does not contain a copyright notice
#include "cpp_sensor_server/srv/detail/sample_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cpp_sensor_server__srv__SampleRequest_Request__init(cpp_sensor_server__srv__SampleRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // requestsample
  return true;
}

void
cpp_sensor_server__srv__SampleRequest_Request__fini(cpp_sensor_server__srv__SampleRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // requestsample
}

bool
cpp_sensor_server__srv__SampleRequest_Request__are_equal(const cpp_sensor_server__srv__SampleRequest_Request * lhs, const cpp_sensor_server__srv__SampleRequest_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // requestsample
  if (lhs->requestsample != rhs->requestsample) {
    return false;
  }
  return true;
}

bool
cpp_sensor_server__srv__SampleRequest_Request__copy(
  const cpp_sensor_server__srv__SampleRequest_Request * input,
  cpp_sensor_server__srv__SampleRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // requestsample
  output->requestsample = input->requestsample;
  return true;
}

cpp_sensor_server__srv__SampleRequest_Request *
cpp_sensor_server__srv__SampleRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Request * msg = (cpp_sensor_server__srv__SampleRequest_Request *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_sensor_server__srv__SampleRequest_Request));
  bool success = cpp_sensor_server__srv__SampleRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_sensor_server__srv__SampleRequest_Request__destroy(cpp_sensor_server__srv__SampleRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_sensor_server__srv__SampleRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_sensor_server__srv__SampleRequest_Request__Sequence__init(cpp_sensor_server__srv__SampleRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Request * data = NULL;

  if (size) {
    data = (cpp_sensor_server__srv__SampleRequest_Request *)allocator.zero_allocate(size, sizeof(cpp_sensor_server__srv__SampleRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_sensor_server__srv__SampleRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_sensor_server__srv__SampleRequest_Request__fini(&data[i - 1]);
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
cpp_sensor_server__srv__SampleRequest_Request__Sequence__fini(cpp_sensor_server__srv__SampleRequest_Request__Sequence * array)
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
      cpp_sensor_server__srv__SampleRequest_Request__fini(&array->data[i]);
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

cpp_sensor_server__srv__SampleRequest_Request__Sequence *
cpp_sensor_server__srv__SampleRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Request__Sequence * array = (cpp_sensor_server__srv__SampleRequest_Request__Sequence *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_sensor_server__srv__SampleRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_sensor_server__srv__SampleRequest_Request__Sequence__destroy(cpp_sensor_server__srv__SampleRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_sensor_server__srv__SampleRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_sensor_server__srv__SampleRequest_Request__Sequence__are_equal(const cpp_sensor_server__srv__SampleRequest_Request__Sequence * lhs, const cpp_sensor_server__srv__SampleRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_sensor_server__srv__SampleRequest_Request__Sequence__copy(
  const cpp_sensor_server__srv__SampleRequest_Request__Sequence * input,
  cpp_sensor_server__srv__SampleRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_sensor_server__srv__SampleRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_sensor_server__srv__SampleRequest_Request * data =
      (cpp_sensor_server__srv__SampleRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_sensor_server__srv__SampleRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_sensor_server__srv__SampleRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `data`
#include "std_msgs/msg/detail/float64_multi_array__functions.h"

bool
cpp_sensor_server__srv__SampleRequest_Response__init(cpp_sensor_server__srv__SampleRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!std_msgs__msg__Float64MultiArray__init(&msg->data)) {
    cpp_sensor_server__srv__SampleRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
cpp_sensor_server__srv__SampleRequest_Response__fini(cpp_sensor_server__srv__SampleRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  std_msgs__msg__Float64MultiArray__fini(&msg->data);
}

bool
cpp_sensor_server__srv__SampleRequest_Response__are_equal(const cpp_sensor_server__srv__SampleRequest_Response * lhs, const cpp_sensor_server__srv__SampleRequest_Response * rhs)
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
cpp_sensor_server__srv__SampleRequest_Response__copy(
  const cpp_sensor_server__srv__SampleRequest_Response * input,
  cpp_sensor_server__srv__SampleRequest_Response * output)
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

cpp_sensor_server__srv__SampleRequest_Response *
cpp_sensor_server__srv__SampleRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Response * msg = (cpp_sensor_server__srv__SampleRequest_Response *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_sensor_server__srv__SampleRequest_Response));
  bool success = cpp_sensor_server__srv__SampleRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_sensor_server__srv__SampleRequest_Response__destroy(cpp_sensor_server__srv__SampleRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_sensor_server__srv__SampleRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_sensor_server__srv__SampleRequest_Response__Sequence__init(cpp_sensor_server__srv__SampleRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Response * data = NULL;

  if (size) {
    data = (cpp_sensor_server__srv__SampleRequest_Response *)allocator.zero_allocate(size, sizeof(cpp_sensor_server__srv__SampleRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_sensor_server__srv__SampleRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_sensor_server__srv__SampleRequest_Response__fini(&data[i - 1]);
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
cpp_sensor_server__srv__SampleRequest_Response__Sequence__fini(cpp_sensor_server__srv__SampleRequest_Response__Sequence * array)
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
      cpp_sensor_server__srv__SampleRequest_Response__fini(&array->data[i]);
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

cpp_sensor_server__srv__SampleRequest_Response__Sequence *
cpp_sensor_server__srv__SampleRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Response__Sequence * array = (cpp_sensor_server__srv__SampleRequest_Response__Sequence *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_sensor_server__srv__SampleRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_sensor_server__srv__SampleRequest_Response__Sequence__destroy(cpp_sensor_server__srv__SampleRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_sensor_server__srv__SampleRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_sensor_server__srv__SampleRequest_Response__Sequence__are_equal(const cpp_sensor_server__srv__SampleRequest_Response__Sequence * lhs, const cpp_sensor_server__srv__SampleRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_sensor_server__srv__SampleRequest_Response__Sequence__copy(
  const cpp_sensor_server__srv__SampleRequest_Response__Sequence * input,
  cpp_sensor_server__srv__SampleRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_sensor_server__srv__SampleRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_sensor_server__srv__SampleRequest_Response * data =
      (cpp_sensor_server__srv__SampleRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_sensor_server__srv__SampleRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_sensor_server__srv__SampleRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "cpp_sensor_server/srv/detail/sample_request__functions.h"

bool
cpp_sensor_server__srv__SampleRequest_Event__init(cpp_sensor_server__srv__SampleRequest_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    cpp_sensor_server__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  // request
  if (!cpp_sensor_server__srv__SampleRequest_Request__Sequence__init(&msg->request, 0)) {
    cpp_sensor_server__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  // response
  if (!cpp_sensor_server__srv__SampleRequest_Response__Sequence__init(&msg->response, 0)) {
    cpp_sensor_server__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  return true;
}

void
cpp_sensor_server__srv__SampleRequest_Event__fini(cpp_sensor_server__srv__SampleRequest_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  cpp_sensor_server__srv__SampleRequest_Request__Sequence__fini(&msg->request);
  // response
  cpp_sensor_server__srv__SampleRequest_Response__Sequence__fini(&msg->response);
}

bool
cpp_sensor_server__srv__SampleRequest_Event__are_equal(const cpp_sensor_server__srv__SampleRequest_Event * lhs, const cpp_sensor_server__srv__SampleRequest_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!cpp_sensor_server__srv__SampleRequest_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!cpp_sensor_server__srv__SampleRequest_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
cpp_sensor_server__srv__SampleRequest_Event__copy(
  const cpp_sensor_server__srv__SampleRequest_Event * input,
  cpp_sensor_server__srv__SampleRequest_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!cpp_sensor_server__srv__SampleRequest_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!cpp_sensor_server__srv__SampleRequest_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

cpp_sensor_server__srv__SampleRequest_Event *
cpp_sensor_server__srv__SampleRequest_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Event * msg = (cpp_sensor_server__srv__SampleRequest_Event *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_sensor_server__srv__SampleRequest_Event));
  bool success = cpp_sensor_server__srv__SampleRequest_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_sensor_server__srv__SampleRequest_Event__destroy(cpp_sensor_server__srv__SampleRequest_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_sensor_server__srv__SampleRequest_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_sensor_server__srv__SampleRequest_Event__Sequence__init(cpp_sensor_server__srv__SampleRequest_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Event * data = NULL;

  if (size) {
    data = (cpp_sensor_server__srv__SampleRequest_Event *)allocator.zero_allocate(size, sizeof(cpp_sensor_server__srv__SampleRequest_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_sensor_server__srv__SampleRequest_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_sensor_server__srv__SampleRequest_Event__fini(&data[i - 1]);
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
cpp_sensor_server__srv__SampleRequest_Event__Sequence__fini(cpp_sensor_server__srv__SampleRequest_Event__Sequence * array)
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
      cpp_sensor_server__srv__SampleRequest_Event__fini(&array->data[i]);
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

cpp_sensor_server__srv__SampleRequest_Event__Sequence *
cpp_sensor_server__srv__SampleRequest_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_sensor_server__srv__SampleRequest_Event__Sequence * array = (cpp_sensor_server__srv__SampleRequest_Event__Sequence *)allocator.allocate(sizeof(cpp_sensor_server__srv__SampleRequest_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_sensor_server__srv__SampleRequest_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_sensor_server__srv__SampleRequest_Event__Sequence__destroy(cpp_sensor_server__srv__SampleRequest_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_sensor_server__srv__SampleRequest_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_sensor_server__srv__SampleRequest_Event__Sequence__are_equal(const cpp_sensor_server__srv__SampleRequest_Event__Sequence * lhs, const cpp_sensor_server__srv__SampleRequest_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_sensor_server__srv__SampleRequest_Event__Sequence__copy(
  const cpp_sensor_server__srv__SampleRequest_Event__Sequence * input,
  cpp_sensor_server__srv__SampleRequest_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_sensor_server__srv__SampleRequest_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_sensor_server__srv__SampleRequest_Event * data =
      (cpp_sensor_server__srv__SampleRequest_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_sensor_server__srv__SampleRequest_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_sensor_server__srv__SampleRequest_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_sensor_server__srv__SampleRequest_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

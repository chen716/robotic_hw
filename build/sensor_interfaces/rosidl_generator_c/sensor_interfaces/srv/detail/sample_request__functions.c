// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice
#include "sensor_interfaces/srv/detail/sample_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
sensor_interfaces__srv__SampleRequest_Request__init(sensor_interfaces__srv__SampleRequest_Request * msg)
{
  if (!msg) {
    return false;
  }
  // requestsample
  return true;
}

void
sensor_interfaces__srv__SampleRequest_Request__fini(sensor_interfaces__srv__SampleRequest_Request * msg)
{
  if (!msg) {
    return;
  }
  // requestsample
}

bool
sensor_interfaces__srv__SampleRequest_Request__are_equal(const sensor_interfaces__srv__SampleRequest_Request * lhs, const sensor_interfaces__srv__SampleRequest_Request * rhs)
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
sensor_interfaces__srv__SampleRequest_Request__copy(
  const sensor_interfaces__srv__SampleRequest_Request * input,
  sensor_interfaces__srv__SampleRequest_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // requestsample
  output->requestsample = input->requestsample;
  return true;
}

sensor_interfaces__srv__SampleRequest_Request *
sensor_interfaces__srv__SampleRequest_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Request * msg = (sensor_interfaces__srv__SampleRequest_Request *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interfaces__srv__SampleRequest_Request));
  bool success = sensor_interfaces__srv__SampleRequest_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interfaces__srv__SampleRequest_Request__destroy(sensor_interfaces__srv__SampleRequest_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interfaces__srv__SampleRequest_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interfaces__srv__SampleRequest_Request__Sequence__init(sensor_interfaces__srv__SampleRequest_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Request * data = NULL;

  if (size) {
    data = (sensor_interfaces__srv__SampleRequest_Request *)allocator.zero_allocate(size, sizeof(sensor_interfaces__srv__SampleRequest_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interfaces__srv__SampleRequest_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interfaces__srv__SampleRequest_Request__fini(&data[i - 1]);
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
sensor_interfaces__srv__SampleRequest_Request__Sequence__fini(sensor_interfaces__srv__SampleRequest_Request__Sequence * array)
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
      sensor_interfaces__srv__SampleRequest_Request__fini(&array->data[i]);
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

sensor_interfaces__srv__SampleRequest_Request__Sequence *
sensor_interfaces__srv__SampleRequest_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Request__Sequence * array = (sensor_interfaces__srv__SampleRequest_Request__Sequence *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interfaces__srv__SampleRequest_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interfaces__srv__SampleRequest_Request__Sequence__destroy(sensor_interfaces__srv__SampleRequest_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interfaces__srv__SampleRequest_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interfaces__srv__SampleRequest_Request__Sequence__are_equal(const sensor_interfaces__srv__SampleRequest_Request__Sequence * lhs, const sensor_interfaces__srv__SampleRequest_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interfaces__srv__SampleRequest_Request__Sequence__copy(
  const sensor_interfaces__srv__SampleRequest_Request__Sequence * input,
  sensor_interfaces__srv__SampleRequest_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interfaces__srv__SampleRequest_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interfaces__srv__SampleRequest_Request * data =
      (sensor_interfaces__srv__SampleRequest_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interfaces__srv__SampleRequest_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interfaces__srv__SampleRequest_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Request__copy(
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
sensor_interfaces__srv__SampleRequest_Response__init(sensor_interfaces__srv__SampleRequest_Response * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!std_msgs__msg__Float64MultiArray__init(&msg->data)) {
    sensor_interfaces__srv__SampleRequest_Response__fini(msg);
    return false;
  }
  return true;
}

void
sensor_interfaces__srv__SampleRequest_Response__fini(sensor_interfaces__srv__SampleRequest_Response * msg)
{
  if (!msg) {
    return;
  }
  // data
  std_msgs__msg__Float64MultiArray__fini(&msg->data);
}

bool
sensor_interfaces__srv__SampleRequest_Response__are_equal(const sensor_interfaces__srv__SampleRequest_Response * lhs, const sensor_interfaces__srv__SampleRequest_Response * rhs)
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
sensor_interfaces__srv__SampleRequest_Response__copy(
  const sensor_interfaces__srv__SampleRequest_Response * input,
  sensor_interfaces__srv__SampleRequest_Response * output)
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

sensor_interfaces__srv__SampleRequest_Response *
sensor_interfaces__srv__SampleRequest_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Response * msg = (sensor_interfaces__srv__SampleRequest_Response *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interfaces__srv__SampleRequest_Response));
  bool success = sensor_interfaces__srv__SampleRequest_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interfaces__srv__SampleRequest_Response__destroy(sensor_interfaces__srv__SampleRequest_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interfaces__srv__SampleRequest_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interfaces__srv__SampleRequest_Response__Sequence__init(sensor_interfaces__srv__SampleRequest_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Response * data = NULL;

  if (size) {
    data = (sensor_interfaces__srv__SampleRequest_Response *)allocator.zero_allocate(size, sizeof(sensor_interfaces__srv__SampleRequest_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interfaces__srv__SampleRequest_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interfaces__srv__SampleRequest_Response__fini(&data[i - 1]);
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
sensor_interfaces__srv__SampleRequest_Response__Sequence__fini(sensor_interfaces__srv__SampleRequest_Response__Sequence * array)
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
      sensor_interfaces__srv__SampleRequest_Response__fini(&array->data[i]);
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

sensor_interfaces__srv__SampleRequest_Response__Sequence *
sensor_interfaces__srv__SampleRequest_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Response__Sequence * array = (sensor_interfaces__srv__SampleRequest_Response__Sequence *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interfaces__srv__SampleRequest_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interfaces__srv__SampleRequest_Response__Sequence__destroy(sensor_interfaces__srv__SampleRequest_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interfaces__srv__SampleRequest_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interfaces__srv__SampleRequest_Response__Sequence__are_equal(const sensor_interfaces__srv__SampleRequest_Response__Sequence * lhs, const sensor_interfaces__srv__SampleRequest_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interfaces__srv__SampleRequest_Response__Sequence__copy(
  const sensor_interfaces__srv__SampleRequest_Response__Sequence * input,
  sensor_interfaces__srv__SampleRequest_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interfaces__srv__SampleRequest_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interfaces__srv__SampleRequest_Response * data =
      (sensor_interfaces__srv__SampleRequest_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interfaces__srv__SampleRequest_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interfaces__srv__SampleRequest_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Response__copy(
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
// #include "sensor_interfaces/srv/detail/sample_request__functions.h"

bool
sensor_interfaces__srv__SampleRequest_Event__init(sensor_interfaces__srv__SampleRequest_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    sensor_interfaces__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  // request
  if (!sensor_interfaces__srv__SampleRequest_Request__Sequence__init(&msg->request, 0)) {
    sensor_interfaces__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  // response
  if (!sensor_interfaces__srv__SampleRequest_Response__Sequence__init(&msg->response, 0)) {
    sensor_interfaces__srv__SampleRequest_Event__fini(msg);
    return false;
  }
  return true;
}

void
sensor_interfaces__srv__SampleRequest_Event__fini(sensor_interfaces__srv__SampleRequest_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  sensor_interfaces__srv__SampleRequest_Request__Sequence__fini(&msg->request);
  // response
  sensor_interfaces__srv__SampleRequest_Response__Sequence__fini(&msg->response);
}

bool
sensor_interfaces__srv__SampleRequest_Event__are_equal(const sensor_interfaces__srv__SampleRequest_Event * lhs, const sensor_interfaces__srv__SampleRequest_Event * rhs)
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
  if (!sensor_interfaces__srv__SampleRequest_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!sensor_interfaces__srv__SampleRequest_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
sensor_interfaces__srv__SampleRequest_Event__copy(
  const sensor_interfaces__srv__SampleRequest_Event * input,
  sensor_interfaces__srv__SampleRequest_Event * output)
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
  if (!sensor_interfaces__srv__SampleRequest_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!sensor_interfaces__srv__SampleRequest_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

sensor_interfaces__srv__SampleRequest_Event *
sensor_interfaces__srv__SampleRequest_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Event * msg = (sensor_interfaces__srv__SampleRequest_Event *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interfaces__srv__SampleRequest_Event));
  bool success = sensor_interfaces__srv__SampleRequest_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interfaces__srv__SampleRequest_Event__destroy(sensor_interfaces__srv__SampleRequest_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interfaces__srv__SampleRequest_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interfaces__srv__SampleRequest_Event__Sequence__init(sensor_interfaces__srv__SampleRequest_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Event * data = NULL;

  if (size) {
    data = (sensor_interfaces__srv__SampleRequest_Event *)allocator.zero_allocate(size, sizeof(sensor_interfaces__srv__SampleRequest_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interfaces__srv__SampleRequest_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interfaces__srv__SampleRequest_Event__fini(&data[i - 1]);
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
sensor_interfaces__srv__SampleRequest_Event__Sequence__fini(sensor_interfaces__srv__SampleRequest_Event__Sequence * array)
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
      sensor_interfaces__srv__SampleRequest_Event__fini(&array->data[i]);
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

sensor_interfaces__srv__SampleRequest_Event__Sequence *
sensor_interfaces__srv__SampleRequest_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interfaces__srv__SampleRequest_Event__Sequence * array = (sensor_interfaces__srv__SampleRequest_Event__Sequence *)allocator.allocate(sizeof(sensor_interfaces__srv__SampleRequest_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interfaces__srv__SampleRequest_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interfaces__srv__SampleRequest_Event__Sequence__destroy(sensor_interfaces__srv__SampleRequest_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interfaces__srv__SampleRequest_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interfaces__srv__SampleRequest_Event__Sequence__are_equal(const sensor_interfaces__srv__SampleRequest_Event__Sequence * lhs, const sensor_interfaces__srv__SampleRequest_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interfaces__srv__SampleRequest_Event__Sequence__copy(
  const sensor_interfaces__srv__SampleRequest_Event__Sequence * input,
  sensor_interfaces__srv__SampleRequest_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interfaces__srv__SampleRequest_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interfaces__srv__SampleRequest_Event * data =
      (sensor_interfaces__srv__SampleRequest_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interfaces__srv__SampleRequest_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interfaces__srv__SampleRequest_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interfaces__srv__SampleRequest_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

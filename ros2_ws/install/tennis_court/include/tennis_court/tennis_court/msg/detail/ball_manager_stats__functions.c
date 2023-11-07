// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice
#include "tennis_court/msg/detail/ball_manager_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tennis_court__msg__BallManagerStats__init(tennis_court__msg__BallManagerStats * msg)
{
  if (!msg) {
    return false;
  }
  // score
  // current_ball_count
  // total_ball_count
  return true;
}

void
tennis_court__msg__BallManagerStats__fini(tennis_court__msg__BallManagerStats * msg)
{
  if (!msg) {
    return;
  }
  // score
  // current_ball_count
  // total_ball_count
}

bool
tennis_court__msg__BallManagerStats__are_equal(const tennis_court__msg__BallManagerStats * lhs, const tennis_court__msg__BallManagerStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // current_ball_count
  if (lhs->current_ball_count != rhs->current_ball_count) {
    return false;
  }
  // total_ball_count
  if (lhs->total_ball_count != rhs->total_ball_count) {
    return false;
  }
  return true;
}

bool
tennis_court__msg__BallManagerStats__copy(
  const tennis_court__msg__BallManagerStats * input,
  tennis_court__msg__BallManagerStats * output)
{
  if (!input || !output) {
    return false;
  }
  // score
  output->score = input->score;
  // current_ball_count
  output->current_ball_count = input->current_ball_count;
  // total_ball_count
  output->total_ball_count = input->total_ball_count;
  return true;
}

tennis_court__msg__BallManagerStats *
tennis_court__msg__BallManagerStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tennis_court__msg__BallManagerStats * msg = (tennis_court__msg__BallManagerStats *)allocator.allocate(sizeof(tennis_court__msg__BallManagerStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tennis_court__msg__BallManagerStats));
  bool success = tennis_court__msg__BallManagerStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tennis_court__msg__BallManagerStats__destroy(tennis_court__msg__BallManagerStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tennis_court__msg__BallManagerStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tennis_court__msg__BallManagerStats__Sequence__init(tennis_court__msg__BallManagerStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tennis_court__msg__BallManagerStats * data = NULL;

  if (size) {
    data = (tennis_court__msg__BallManagerStats *)allocator.zero_allocate(size, sizeof(tennis_court__msg__BallManagerStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tennis_court__msg__BallManagerStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tennis_court__msg__BallManagerStats__fini(&data[i - 1]);
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
tennis_court__msg__BallManagerStats__Sequence__fini(tennis_court__msg__BallManagerStats__Sequence * array)
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
      tennis_court__msg__BallManagerStats__fini(&array->data[i]);
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

tennis_court__msg__BallManagerStats__Sequence *
tennis_court__msg__BallManagerStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tennis_court__msg__BallManagerStats__Sequence * array = (tennis_court__msg__BallManagerStats__Sequence *)allocator.allocate(sizeof(tennis_court__msg__BallManagerStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tennis_court__msg__BallManagerStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tennis_court__msg__BallManagerStats__Sequence__destroy(tennis_court__msg__BallManagerStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tennis_court__msg__BallManagerStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tennis_court__msg__BallManagerStats__Sequence__are_equal(const tennis_court__msg__BallManagerStats__Sequence * lhs, const tennis_court__msg__BallManagerStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tennis_court__msg__BallManagerStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tennis_court__msg__BallManagerStats__Sequence__copy(
  const tennis_court__msg__BallManagerStats__Sequence * input,
  tennis_court__msg__BallManagerStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tennis_court__msg__BallManagerStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tennis_court__msg__BallManagerStats * data =
      (tennis_court__msg__BallManagerStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tennis_court__msg__BallManagerStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tennis_court__msg__BallManagerStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tennis_court__msg__BallManagerStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

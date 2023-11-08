// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__FUNCTIONS_H_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tennis_court/msg/rosidl_generator_c__visibility_control.h"

#include "tennis_court/msg/detail/ball_manager_stats__struct.h"

/// Initialize msg/BallManagerStats message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tennis_court__msg__BallManagerStats
 * )) before or use
 * tennis_court__msg__BallManagerStats__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__init(tennis_court__msg__BallManagerStats * msg);

/// Finalize msg/BallManagerStats message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
void
tennis_court__msg__BallManagerStats__fini(tennis_court__msg__BallManagerStats * msg);

/// Create msg/BallManagerStats message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tennis_court__msg__BallManagerStats__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
tennis_court__msg__BallManagerStats *
tennis_court__msg__BallManagerStats__create();

/// Destroy msg/BallManagerStats message.
/**
 * It calls
 * tennis_court__msg__BallManagerStats__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
void
tennis_court__msg__BallManagerStats__destroy(tennis_court__msg__BallManagerStats * msg);

/// Check for msg/BallManagerStats message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__are_equal(const tennis_court__msg__BallManagerStats * lhs, const tennis_court__msg__BallManagerStats * rhs);

/// Copy a msg/BallManagerStats message.
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
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__copy(
  const tennis_court__msg__BallManagerStats * input,
  tennis_court__msg__BallManagerStats * output);

/// Initialize array of msg/BallManagerStats messages.
/**
 * It allocates the memory for the number of elements and calls
 * tennis_court__msg__BallManagerStats__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__Sequence__init(tennis_court__msg__BallManagerStats__Sequence * array, size_t size);

/// Finalize array of msg/BallManagerStats messages.
/**
 * It calls
 * tennis_court__msg__BallManagerStats__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
void
tennis_court__msg__BallManagerStats__Sequence__fini(tennis_court__msg__BallManagerStats__Sequence * array);

/// Create array of msg/BallManagerStats messages.
/**
 * It allocates the memory for the array and calls
 * tennis_court__msg__BallManagerStats__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
tennis_court__msg__BallManagerStats__Sequence *
tennis_court__msg__BallManagerStats__Sequence__create(size_t size);

/// Destroy array of msg/BallManagerStats messages.
/**
 * It calls
 * tennis_court__msg__BallManagerStats__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
void
tennis_court__msg__BallManagerStats__Sequence__destroy(tennis_court__msg__BallManagerStats__Sequence * array);

/// Check for msg/BallManagerStats message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__Sequence__are_equal(const tennis_court__msg__BallManagerStats__Sequence * lhs, const tennis_court__msg__BallManagerStats__Sequence * rhs);

/// Copy an array of msg/BallManagerStats messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tennis_court
bool
tennis_court__msg__BallManagerStats__Sequence__copy(
  const tennis_court__msg__BallManagerStats__Sequence * input,
  tennis_court__msg__BallManagerStats__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__FUNCTIONS_H_

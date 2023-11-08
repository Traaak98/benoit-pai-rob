// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__FUNCTIONS_H_
#define CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msg/msg/rosidl_generator_c__visibility_control.h"

#include "custom_msg/msg/detail/img_detection__struct.h"

/// Initialize msg/ImgDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_msg__msg__ImgDetection
 * )) before or use
 * custom_msg__msg__ImgDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__init(custom_msg__msg__ImgDetection * msg);

/// Finalize msg/ImgDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__ImgDetection__fini(custom_msg__msg__ImgDetection * msg);

/// Create msg/ImgDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_msg__msg__ImgDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
custom_msg__msg__ImgDetection *
custom_msg__msg__ImgDetection__create();

/// Destroy msg/ImgDetection message.
/**
 * It calls
 * custom_msg__msg__ImgDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__ImgDetection__destroy(custom_msg__msg__ImgDetection * msg);

/// Check for msg/ImgDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__are_equal(const custom_msg__msg__ImgDetection * lhs, const custom_msg__msg__ImgDetection * rhs);

/// Copy a msg/ImgDetection message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__copy(
  const custom_msg__msg__ImgDetection * input,
  custom_msg__msg__ImgDetection * output);

/// Initialize array of msg/ImgDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_msg__msg__ImgDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__Sequence__init(custom_msg__msg__ImgDetection__Sequence * array, size_t size);

/// Finalize array of msg/ImgDetection messages.
/**
 * It calls
 * custom_msg__msg__ImgDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__ImgDetection__Sequence__fini(custom_msg__msg__ImgDetection__Sequence * array);

/// Create array of msg/ImgDetection messages.
/**
 * It allocates the memory for the array and calls
 * custom_msg__msg__ImgDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
custom_msg__msg__ImgDetection__Sequence *
custom_msg__msg__ImgDetection__Sequence__create(size_t size);

/// Destroy array of msg/ImgDetection messages.
/**
 * It calls
 * custom_msg__msg__ImgDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
void
custom_msg__msg__ImgDetection__Sequence__destroy(custom_msg__msg__ImgDetection__Sequence * array);

/// Check for msg/ImgDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__Sequence__are_equal(const custom_msg__msg__ImgDetection__Sequence * lhs, const custom_msg__msg__ImgDetection__Sequence * rhs);

/// Copy an array of msg/ImgDetection messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_msg
bool
custom_msg__msg__ImgDetection__Sequence__copy(
  const custom_msg__msg__ImgDetection__Sequence * input,
  custom_msg__msg__ImgDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__FUNCTIONS_H_

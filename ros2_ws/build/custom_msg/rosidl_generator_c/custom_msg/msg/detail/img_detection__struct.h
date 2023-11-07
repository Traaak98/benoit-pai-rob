// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_H_
#define CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'coordx'
// Member 'coordy'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImgDetection in the package custom_msg.
typedef struct custom_msg__msg__ImgDetection
{
  bool detect;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__double__Sequence coordx;
  rosidl_runtime_c__double__Sequence coordy;
} custom_msg__msg__ImgDetection;

// Struct for a sequence of custom_msg__msg__ImgDetection.
typedef struct custom_msg__msg__ImgDetection__Sequence
{
  custom_msg__msg__ImgDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msg__msg__ImgDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_H_

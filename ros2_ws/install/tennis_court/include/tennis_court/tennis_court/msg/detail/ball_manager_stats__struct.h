// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_H_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BallManagerStats in the package tennis_court.
typedef struct tennis_court__msg__BallManagerStats
{
  int64_t score;
  int32_t current_ball_count;
  int32_t total_ball_count;
} tennis_court__msg__BallManagerStats;

// Struct for a sequence of tennis_court__msg__BallManagerStats.
typedef struct tennis_court__msg__BallManagerStats__Sequence
{
  tennis_court__msg__BallManagerStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tennis_court__msg__BallManagerStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__STRUCT_H_

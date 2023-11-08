// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tennis_court/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tennis_court/msg/detail/ball_manager_stats__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tennis_court
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
cdr_serialize(
  const tennis_court::msg::BallManagerStats & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tennis_court::msg::BallManagerStats & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
get_serialized_size(
  const tennis_court::msg::BallManagerStats & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
max_serialized_size_BallManagerStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tennis_court

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tennis_court, msg, BallManagerStats)();

#ifdef __cplusplus
}
#endif

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

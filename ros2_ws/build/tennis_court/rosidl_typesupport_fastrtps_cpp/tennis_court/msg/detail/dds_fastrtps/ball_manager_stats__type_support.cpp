// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice
#include "tennis_court/msg/detail/ball_manager_stats__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tennis_court/msg/detail/ball_manager_stats__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: score
  cdr << ros_message.score;
  // Member: current_ball_count
  cdr << ros_message.current_ball_count;
  // Member: total_ball_count
  cdr << ros_message.total_ball_count;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tennis_court::msg::BallManagerStats & ros_message)
{
  // Member: score
  cdr >> ros_message.score;

  // Member: current_ball_count
  cdr >> ros_message.current_ball_count;

  // Member: total_ball_count
  cdr >> ros_message.total_ball_count;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
get_serialized_size(
  const tennis_court::msg::BallManagerStats & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: score
  {
    size_t item_size = sizeof(ros_message.score);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_ball_count
  {
    size_t item_size = sizeof(ros_message.current_ball_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_ball_count
  {
    size_t item_size = sizeof(ros_message.total_ball_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tennis_court
max_serialized_size_BallManagerStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: score
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_ball_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_ball_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _BallManagerStats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tennis_court::msg::BallManagerStats *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BallManagerStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tennis_court::msg::BallManagerStats *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BallManagerStats__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tennis_court::msg::BallManagerStats *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BallManagerStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BallManagerStats(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BallManagerStats__callbacks = {
  "tennis_court::msg",
  "BallManagerStats",
  _BallManagerStats__cdr_serialize,
  _BallManagerStats__cdr_deserialize,
  _BallManagerStats__get_serialized_size,
  _BallManagerStats__max_serialized_size
};

static rosidl_message_type_support_t _BallManagerStats__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BallManagerStats__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tennis_court

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tennis_court
const rosidl_message_type_support_t *
get_message_type_support_handle<tennis_court::msg::BallManagerStats>()
{
  return &tennis_court::msg::typesupport_fastrtps_cpp::_BallManagerStats__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tennis_court, msg, BallManagerStats)() {
  return &tennis_court::msg::typesupport_fastrtps_cpp::_BallManagerStats__handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/img_detection__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msg/msg/detail/img_detection__struct.hpp"

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

namespace custom_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
cdr_serialize(
  const custom_msg::msg::ImgDetection & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detect
  cdr << (ros_message.detect ? true : false);
  // Member: names
  {
    cdr << ros_message.names;
  }
  // Member: coordx
  {
    cdr << ros_message.coordx;
  }
  // Member: coordy
  {
    cdr << ros_message.coordy;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msg::msg::ImgDetection & ros_message)
{
  // Member: detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.detect = tmp ? true : false;
  }

  // Member: names
  {
    cdr >> ros_message.names;
  }

  // Member: coordx
  {
    cdr >> ros_message.coordx;
  }

  // Member: coordy
  {
    cdr >> ros_message.coordy;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
get_serialized_size(
  const custom_msg::msg::ImgDetection & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detect
  {
    size_t item_size = sizeof(ros_message.detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: names
  {
    size_t array_size = ros_message.names.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.names[index].size() + 1);
    }
  }
  // Member: coordx
  {
    size_t array_size = ros_message.coordx.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.coordx[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coordy
  {
    size_t array_size = ros_message.coordy.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.coordy[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msg
max_serialized_size_ImgDetection(
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


  // Member: detect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: names
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: coordx
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: coordy
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ImgDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msg::msg::ImgDetection *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImgDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msg::msg::ImgDetection *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImgDetection__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msg::msg::ImgDetection *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImgDetection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImgDetection(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImgDetection__callbacks = {
  "custom_msg::msg",
  "ImgDetection",
  _ImgDetection__cdr_serialize,
  _ImgDetection__cdr_deserialize,
  _ImgDetection__get_serialized_size,
  _ImgDetection__max_serialized_size
};

static rosidl_message_type_support_t _ImgDetection__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImgDetection__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msg::msg::ImgDetection>()
{
  return &custom_msg::msg::typesupport_fastrtps_cpp::_ImgDetection__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msg, msg, ImgDetection)() {
  return &custom_msg::msg::typesupport_fastrtps_cpp::_ImgDetection__handle;
}

#ifdef __cplusplus
}
#endif

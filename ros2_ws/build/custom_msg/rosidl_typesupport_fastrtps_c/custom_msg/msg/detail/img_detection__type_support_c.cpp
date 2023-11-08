// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice
#include "custom_msg/msg/detail/img_detection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msg/msg/detail/img_detection__struct.h"
#include "custom_msg/msg/detail/img_detection__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // coordx, coordy
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // coordx, coordy
#include "rosidl_runtime_c/string.h"  // names
#include "rosidl_runtime_c/string_functions.h"  // names

// forward declare type support functions


using _ImgDetection__ros_msg_type = custom_msg__msg__ImgDetection;

static bool _ImgDetection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ImgDetection__ros_msg_type * ros_message = static_cast<const _ImgDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: detect
  {
    cdr << (ros_message->detect ? true : false);
  }

  // Field name: names
  {
    size_t size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
      if (str->capacity == 0 || str->capacity <= str->size) {
        fprintf(stderr, "string capacity not greater than size\n");
        return false;
      }
      if (str->data[str->size] != '\0') {
        fprintf(stderr, "string not null-terminated\n");
        return false;
      }
      cdr << str->data;
    }
  }

  // Field name: coordx
  {
    size_t size = ros_message->coordx.size;
    auto array_ptr = ros_message->coordx.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: coordy
  {
    size_t size = ros_message->coordy.size;
    auto array_ptr = ros_message->coordy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ImgDetection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ImgDetection__ros_msg_type * ros_message = static_cast<_ImgDetection__ros_msg_type *>(untyped_ros_message);
  // Field name: detect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->detect = tmp ? true : false;
  }

  // Field name: names
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->names.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->names);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->names, size)) {
      fprintf(stderr, "failed to create array for field 'names'");
      return false;
    }
    auto array_ptr = ros_message->names.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'names'\n");
        return false;
      }
    }
  }

  // Field name: coordx
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->coordx.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->coordx);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->coordx, size)) {
      fprintf(stderr, "failed to create array for field 'coordx'");
      return false;
    }
    auto array_ptr = ros_message->coordx.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: coordy
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->coordy.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->coordy);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->coordy, size)) {
      fprintf(stderr, "failed to create array for field 'coordy'");
      return false;
    }
    auto array_ptr = ros_message->coordy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg
size_t get_serialized_size_custom_msg__msg__ImgDetection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ImgDetection__ros_msg_type * ros_message = static_cast<const _ImgDetection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detect
  {
    size_t item_size = sizeof(ros_message->detect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name names
  {
    size_t array_size = ros_message->names.size;
    auto array_ptr = ros_message->names.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }
  // field.name coordx
  {
    size_t array_size = ros_message->coordx.size;
    auto array_ptr = ros_message->coordx.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coordy
  {
    size_t array_size = ros_message->coordy.size;
    auto array_ptr = ros_message->coordy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ImgDetection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msg__msg__ImgDetection(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msg
size_t max_serialized_size_custom_msg__msg__ImgDetection(
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

  // member: detect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: names
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
  // member: coordx
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: coordy
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

static size_t _ImgDetection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msg__msg__ImgDetection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ImgDetection = {
  "custom_msg::msg",
  "ImgDetection",
  _ImgDetection__cdr_serialize,
  _ImgDetection__cdr_deserialize,
  _ImgDetection__get_serialized_size,
  _ImgDetection__max_serialized_size
};

static rosidl_message_type_support_t _ImgDetection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ImgDetection,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msg, msg, ImgDetection)() {
  return &_ImgDetection__type_support;
}

#if defined(__cplusplus)
}
#endif

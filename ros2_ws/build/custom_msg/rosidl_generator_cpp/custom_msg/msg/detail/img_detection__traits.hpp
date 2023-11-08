// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__TRAITS_HPP_
#define CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msg/msg/detail/img_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImgDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: detect
  {
    out << "detect: ";
    rosidl_generator_traits::value_to_yaml(msg.detect, out);
    out << ", ";
  }

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coordx
  {
    if (msg.coordx.size() == 0) {
      out << "coordx: []";
    } else {
      out << "coordx: [";
      size_t pending_items = msg.coordx.size();
      for (auto item : msg.coordx) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: coordy
  {
    if (msg.coordy.size() == 0) {
      out << "coordy: []";
    } else {
      out << "coordy: [";
      size_t pending_items = msg.coordy.size();
      for (auto item : msg.coordy) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImgDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detect
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detect: ";
    rosidl_generator_traits::value_to_yaml(msg.detect, out);
    out << "\n";
  }

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coordx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordx.size() == 0) {
      out << "coordx: []\n";
    } else {
      out << "coordx:\n";
      for (auto item : msg.coordx) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: coordy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coordy.size() == 0) {
      out << "coordy: []\n";
    } else {
      out << "coordy:\n";
      for (auto item : msg.coordy) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImgDetection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msg

namespace rosidl_generator_traits
{

[[deprecated("use custom_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msg::msg::ImgDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msg::msg::ImgDetection & msg)
{
  return custom_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msg::msg::ImgDetection>()
{
  return "custom_msg::msg::ImgDetection";
}

template<>
inline const char * name<custom_msg::msg::ImgDetection>()
{
  return "custom_msg/msg/ImgDetection";
}

template<>
struct has_fixed_size<custom_msg::msg::ImgDetection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msg::msg::ImgDetection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msg::msg::ImgDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__TRAITS_HPP_

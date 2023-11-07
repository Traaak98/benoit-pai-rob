// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tennis_court:msg/BallManagerStats.idl
// generated code does not contain a copyright notice

#ifndef TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__TRAITS_HPP_
#define TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tennis_court/msg/detail/ball_manager_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tennis_court
{

namespace msg
{

inline void to_flow_style_yaml(
  const BallManagerStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: current_ball_count
  {
    out << "current_ball_count: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ball_count, out);
    out << ", ";
  }

  // member: total_ball_count
  {
    out << "total_ball_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_ball_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BallManagerStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: current_ball_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ball_count: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ball_count, out);
    out << "\n";
  }

  // member: total_ball_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_ball_count: ";
    rosidl_generator_traits::value_to_yaml(msg.total_ball_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BallManagerStats & msg, bool use_flow_style = false)
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

}  // namespace tennis_court

namespace rosidl_generator_traits
{

[[deprecated("use tennis_court::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tennis_court::msg::BallManagerStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  tennis_court::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tennis_court::msg::to_yaml() instead")]]
inline std::string to_yaml(const tennis_court::msg::BallManagerStats & msg)
{
  return tennis_court::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tennis_court::msg::BallManagerStats>()
{
  return "tennis_court::msg::BallManagerStats";
}

template<>
inline const char * name<tennis_court::msg::BallManagerStats>()
{
  return "tennis_court/msg/BallManagerStats";
}

template<>
struct has_fixed_size<tennis_court::msg::BallManagerStats>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tennis_court::msg::BallManagerStats>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tennis_court::msg::BallManagerStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TENNIS_COURT__MSG__DETAIL__BALL_MANAGER_STATS__TRAITS_HPP_

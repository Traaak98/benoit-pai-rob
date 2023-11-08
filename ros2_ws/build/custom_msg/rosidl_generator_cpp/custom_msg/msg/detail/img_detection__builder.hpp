// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__BUILDER_HPP_
#define CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msg/msg/detail/img_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msg
{

namespace msg
{

namespace builder
{

class Init_ImgDetection_coordy
{
public:
  explicit Init_ImgDetection_coordy(::custom_msg::msg::ImgDetection & msg)
  : msg_(msg)
  {}
  ::custom_msg::msg::ImgDetection coordy(::custom_msg::msg::ImgDetection::_coordy_type arg)
  {
    msg_.coordy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msg::msg::ImgDetection msg_;
};

class Init_ImgDetection_coordx
{
public:
  explicit Init_ImgDetection_coordx(::custom_msg::msg::ImgDetection & msg)
  : msg_(msg)
  {}
  Init_ImgDetection_coordy coordx(::custom_msg::msg::ImgDetection::_coordx_type arg)
  {
    msg_.coordx = std::move(arg);
    return Init_ImgDetection_coordy(msg_);
  }

private:
  ::custom_msg::msg::ImgDetection msg_;
};

class Init_ImgDetection_names
{
public:
  explicit Init_ImgDetection_names(::custom_msg::msg::ImgDetection & msg)
  : msg_(msg)
  {}
  Init_ImgDetection_coordx names(::custom_msg::msg::ImgDetection::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_ImgDetection_coordx(msg_);
  }

private:
  ::custom_msg::msg::ImgDetection msg_;
};

class Init_ImgDetection_detect
{
public:
  Init_ImgDetection_detect()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImgDetection_names detect(::custom_msg::msg::ImgDetection::_detect_type arg)
  {
    msg_.detect = std::move(arg);
    return Init_ImgDetection_names(msg_);
  }

private:
  ::custom_msg::msg::ImgDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msg::msg::ImgDetection>()
{
  return custom_msg::msg::builder::Init_ImgDetection_detect();
}

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__BUILDER_HPP_

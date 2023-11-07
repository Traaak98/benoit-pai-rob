// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msg:msg/ImgDetection.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_HPP_
#define CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msg__msg__ImgDetection __attribute__((deprecated))
#else
# define DEPRECATED__custom_msg__msg__ImgDetection __declspec(deprecated)
#endif

namespace custom_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImgDetection_
{
  using Type = ImgDetection_<ContainerAllocator>;

  explicit ImgDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detect = false;
    }
  }

  explicit ImgDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detect = false;
    }
  }

  // field types and members
  using _detect_type =
    bool;
  _detect_type detect;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _coordx_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _coordx_type coordx;
  using _coordy_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _coordy_type coordy;

  // setters for named parameter idiom
  Type & set__detect(
    const bool & _arg)
  {
    this->detect = _arg;
    return *this;
  }
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__coordx(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->coordx = _arg;
    return *this;
  }
  Type & set__coordy(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->coordy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msg::msg::ImgDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msg::msg::ImgDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::ImgDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msg::msg::ImgDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msg__msg__ImgDetection
    std::shared_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msg__msg__ImgDetection
    std::shared_ptr<custom_msg::msg::ImgDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImgDetection_ & other) const
  {
    if (this->detect != other.detect) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->coordx != other.coordx) {
      return false;
    }
    if (this->coordy != other.coordy) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImgDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImgDetection_

// alias to use template instance with default allocator
using ImgDetection =
  custom_msg::msg::ImgDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msg

#endif  // CUSTOM_MSG__MSG__DETAIL__IMG_DETECTION__STRUCT_HPP_

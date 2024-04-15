// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_HPP_
#define SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_interfaces__msg__SampleArray __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interfaces__msg__SampleArray __declspec(deprecated)
#endif

namespace sensor_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SampleArray_
{
  using Type = SampleArray_<ContainerAllocator>;

  explicit SampleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit SampleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interfaces::msg::SampleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interfaces::msg::SampleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::msg::SampleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::msg::SampleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interfaces__msg__SampleArray
    std::shared_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interfaces__msg__SampleArray
    std::shared_ptr<sensor_interfaces::msg::SampleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleArray_

// alias to use template instance with default allocator
using SampleArray =
  sensor_interfaces::msg::SampleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__STRUCT_HPP_

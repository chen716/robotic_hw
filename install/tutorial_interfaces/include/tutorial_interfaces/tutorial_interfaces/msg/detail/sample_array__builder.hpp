// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/sample_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_SampleArray_data
{
public:
  Init_SampleArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::msg::SampleArray data(::tutorial_interfaces::msg::SampleArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::SampleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::SampleArray>()
{
  return tutorial_interfaces::msg::builder::Init_SampleArray_data();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_
#define SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interfaces/msg/detail/sample_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interfaces
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
  ::sensor_interfaces::msg::SampleArray data(::sensor_interfaces::msg::SampleArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::msg::SampleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::msg::SampleArray>()
{
  return sensor_interfaces::msg::builder::Init_SampleArray_data();
}

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

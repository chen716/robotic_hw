// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_sensor_server:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_
#define CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_sensor_server/msg/detail/sample_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_sensor_server
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
  ::cpp_sensor_server::msg::SampleArray data(::cpp_sensor_server::msg::SampleArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_sensor_server::msg::SampleArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_sensor_server::msg::SampleArray>()
{
  return cpp_sensor_server::msg::builder::Init_SampleArray_data();
}

}  // namespace cpp_sensor_server

#endif  // CPP_SENSOR_SERVER__MSG__DETAIL__SAMPLE_ARRAY__BUILDER_HPP_

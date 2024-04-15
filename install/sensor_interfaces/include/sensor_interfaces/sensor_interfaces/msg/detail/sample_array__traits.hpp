// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interfaces:msg/SampleArray.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__TRAITS_HPP_
#define SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interfaces/msg/detail/sample_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"

namespace sensor_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SampleArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleArray & msg, bool use_flow_style = false)
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

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::msg::SampleArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::msg::SampleArray & msg)
{
  return sensor_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::msg::SampleArray>()
{
  return "sensor_interfaces::msg::SampleArray";
}

template<>
inline const char * name<sensor_interfaces::msg::SampleArray>()
{
  return "sensor_interfaces/msg/SampleArray";
}

template<>
struct has_fixed_size<sensor_interfaces::msg::SampleArray>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct has_bounded_size<sensor_interfaces::msg::SampleArray>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct is_message<sensor_interfaces::msg::SampleArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACES__MSG__DETAIL__SAMPLE_ARRAY__TRAITS_HPP_

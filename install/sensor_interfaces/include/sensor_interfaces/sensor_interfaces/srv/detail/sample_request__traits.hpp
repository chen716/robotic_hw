// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__TRAITS_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requestsample
  {
    out << "requestsample: ";
    rosidl_generator_traits::value_to_yaml(msg.requestsample, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SampleRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requestsample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requestsample: ";
    rosidl_generator_traits::value_to_yaml(msg.requestsample, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::srv::SampleRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::srv::SampleRequest_Request & msg)
{
  return sensor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::srv::SampleRequest_Request>()
{
  return "sensor_interfaces::srv::SampleRequest_Request";
}

template<>
inline const char * name<sensor_interfaces::srv::SampleRequest_Request>()
{
  return "sensor_interfaces/srv/SampleRequest_Request";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::SampleRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interfaces::srv::SampleRequest_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interfaces::srv::SampleRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__traits.hpp"

namespace sensor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleRequest_Response & msg,
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
  const SampleRequest_Response & msg,
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

inline std::string to_yaml(const SampleRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::srv::SampleRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::srv::SampleRequest_Response & msg)
{
  return sensor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::srv::SampleRequest_Response>()
{
  return "sensor_interfaces::srv::SampleRequest_Response";
}

template<>
inline const char * name<sensor_interfaces::srv::SampleRequest_Response>()
{
  return "sensor_interfaces/srv/SampleRequest_Response";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::SampleRequest_Response>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct has_bounded_size<sensor_interfaces::srv::SampleRequest_Response>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64MultiArray>::value> {};

template<>
struct is_message<sensor_interfaces::srv::SampleRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace sensor_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SampleRequest_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SampleRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SampleRequest_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interfaces::srv::SampleRequest_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interfaces::srv::SampleRequest_Event & msg)
{
  return sensor_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interfaces::srv::SampleRequest_Event>()
{
  return "sensor_interfaces::srv::SampleRequest_Event";
}

template<>
inline const char * name<sensor_interfaces::srv::SampleRequest_Event>()
{
  return "sensor_interfaces/srv/SampleRequest_Event";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::SampleRequest_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensor_interfaces::srv::SampleRequest_Event>
  : std::integral_constant<bool, has_bounded_size<sensor_interfaces::srv::SampleRequest_Request>::value && has_bounded_size<sensor_interfaces::srv::SampleRequest_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<sensor_interfaces::srv::SampleRequest_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_interfaces::srv::SampleRequest>()
{
  return "sensor_interfaces::srv::SampleRequest";
}

template<>
inline const char * name<sensor_interfaces::srv::SampleRequest>()
{
  return "sensor_interfaces/srv/SampleRequest";
}

template<>
struct has_fixed_size<sensor_interfaces::srv::SampleRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_interfaces::srv::SampleRequest_Request>::value &&
    has_fixed_size<sensor_interfaces::srv::SampleRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<sensor_interfaces::srv::SampleRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<sensor_interfaces::srv::SampleRequest_Request>::value &&
    has_bounded_size<sensor_interfaces::srv::SampleRequest_Response>::value
  >
{
};

template<>
struct is_service<sensor_interfaces::srv::SampleRequest>
  : std::true_type
{
};

template<>
struct is_service_request<sensor_interfaces::srv::SampleRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sensor_interfaces::srv::SampleRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__TRAITS_HPP_

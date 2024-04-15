// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__TRAITS_HPP_
#define CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cpp_sensor_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const SensorData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_samples
  {
    out << "num_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_samples, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.num_samples, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorData_Request & msg, bool use_flow_style = false)
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

}  // namespace cpp_sensor_server

namespace rosidl_generator_traits
{

[[deprecated("use cpp_sensor_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_sensor_server::srv::SensorData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_sensor_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_sensor_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_sensor_server::srv::SensorData_Request & msg)
{
  return cpp_sensor_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_sensor_server::srv::SensorData_Request>()
{
  return "cpp_sensor_server::srv::SensorData_Request";
}

template<>
inline const char * name<cpp_sensor_server::srv::SensorData_Request>()
{
  return "cpp_sensor_server/srv/SensorData_Request";
}

template<>
struct has_fixed_size<cpp_sensor_server::srv::SensorData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cpp_sensor_server::srv::SensorData_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cpp_sensor_server::srv::SensorData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace cpp_sensor_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const SensorData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const SensorData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const SensorData_Response & msg, bool use_flow_style = false)
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

}  // namespace cpp_sensor_server

namespace rosidl_generator_traits
{

[[deprecated("use cpp_sensor_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_sensor_server::srv::SensorData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_sensor_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_sensor_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_sensor_server::srv::SensorData_Response & msg)
{
  return cpp_sensor_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_sensor_server::srv::SensorData_Response>()
{
  return "cpp_sensor_server::srv::SensorData_Response";
}

template<>
inline const char * name<cpp_sensor_server::srv::SensorData_Response>()
{
  return "cpp_sensor_server/srv/SensorData_Response";
}

template<>
struct has_fixed_size<cpp_sensor_server::srv::SensorData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_sensor_server::srv::SensorData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_sensor_server::srv::SensorData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace cpp_sensor_server
{

namespace srv
{

inline void to_flow_style_yaml(
  const SensorData_Event & msg,
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
  const SensorData_Event & msg,
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

inline std::string to_yaml(const SensorData_Event & msg, bool use_flow_style = false)
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

}  // namespace cpp_sensor_server

namespace rosidl_generator_traits
{

[[deprecated("use cpp_sensor_server::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_sensor_server::srv::SensorData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_sensor_server::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_sensor_server::srv::to_yaml() instead")]]
inline std::string to_yaml(const cpp_sensor_server::srv::SensorData_Event & msg)
{
  return cpp_sensor_server::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_sensor_server::srv::SensorData_Event>()
{
  return "cpp_sensor_server::srv::SensorData_Event";
}

template<>
inline const char * name<cpp_sensor_server::srv::SensorData_Event>()
{
  return "cpp_sensor_server/srv/SensorData_Event";
}

template<>
struct has_fixed_size<cpp_sensor_server::srv::SensorData_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_sensor_server::srv::SensorData_Event>
  : std::integral_constant<bool, has_bounded_size<cpp_sensor_server::srv::SensorData_Request>::value && has_bounded_size<cpp_sensor_server::srv::SensorData_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<cpp_sensor_server::srv::SensorData_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cpp_sensor_server::srv::SensorData>()
{
  return "cpp_sensor_server::srv::SensorData";
}

template<>
inline const char * name<cpp_sensor_server::srv::SensorData>()
{
  return "cpp_sensor_server/srv/SensorData";
}

template<>
struct has_fixed_size<cpp_sensor_server::srv::SensorData>
  : std::integral_constant<
    bool,
    has_fixed_size<cpp_sensor_server::srv::SensorData_Request>::value &&
    has_fixed_size<cpp_sensor_server::srv::SensorData_Response>::value
  >
{
};

template<>
struct has_bounded_size<cpp_sensor_server::srv::SensorData>
  : std::integral_constant<
    bool,
    has_bounded_size<cpp_sensor_server::srv::SensorData_Request>::value &&
    has_bounded_size<cpp_sensor_server::srv::SensorData_Response>::value
  >
{
};

template<>
struct is_service<cpp_sensor_server::srv::SensorData>
  : std::true_type
{
};

template<>
struct is_service_request<cpp_sensor_server::srv::SensorData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cpp_sensor_server::srv::SensorData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__TRAITS_HPP_

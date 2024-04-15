// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_sensor_server
{

namespace srv
{

namespace builder
{

class Init_SensorData_Request_num_samples
{
public:
  Init_SensorData_Request_num_samples()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_sensor_server::srv::SensorData_Request num_samples(::cpp_sensor_server::srv::SensorData_Request::_num_samples_type arg)
  {
    msg_.num_samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_sensor_server::srv::SensorData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_sensor_server::srv::SensorData_Request>()
{
  return cpp_sensor_server::srv::builder::Init_SensorData_Request_num_samples();
}

}  // namespace cpp_sensor_server


namespace cpp_sensor_server
{

namespace srv
{

namespace builder
{

class Init_SensorData_Response_data
{
public:
  Init_SensorData_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cpp_sensor_server::srv::SensorData_Response data(::cpp_sensor_server::srv::SensorData_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_sensor_server::srv::SensorData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_sensor_server::srv::SensorData_Response>()
{
  return cpp_sensor_server::srv::builder::Init_SensorData_Response_data();
}

}  // namespace cpp_sensor_server


namespace cpp_sensor_server
{

namespace srv
{

namespace builder
{

class Init_SensorData_Event_response
{
public:
  explicit Init_SensorData_Event_response(::cpp_sensor_server::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  ::cpp_sensor_server::srv::SensorData_Event response(::cpp_sensor_server::srv::SensorData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_sensor_server::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_request
{
public:
  explicit Init_SensorData_Event_request(::cpp_sensor_server::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  Init_SensorData_Event_response request(::cpp_sensor_server::srv::SensorData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SensorData_Event_response(msg_);
  }

private:
  ::cpp_sensor_server::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_info
{
public:
  Init_SensorData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_Event_request info(::cpp_sensor_server::srv::SensorData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SensorData_Event_request(msg_);
  }

private:
  ::cpp_sensor_server::srv::SensorData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_sensor_server::srv::SensorData_Event>()
{
  return cpp_sensor_server::srv::builder::Init_SensorData_Event_info();
}

}  // namespace cpp_sensor_server

#endif  // CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

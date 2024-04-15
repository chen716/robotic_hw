// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interfaces/srv/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interfaces
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
  ::sensor_interfaces::srv::SensorData_Request num_samples(::sensor_interfaces::srv::SensorData_Request::_num_samples_type arg)
  {
    msg_.num_samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SensorData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SensorData_Request>()
{
  return sensor_interfaces::srv::builder::Init_SensorData_Request_num_samples();
}

}  // namespace sensor_interfaces


namespace sensor_interfaces
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
  ::sensor_interfaces::srv::SensorData_Response data(::sensor_interfaces::srv::SensorData_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SensorData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SensorData_Response>()
{
  return sensor_interfaces::srv::builder::Init_SensorData_Response_data();
}

}  // namespace sensor_interfaces


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SensorData_Event_response
{
public:
  explicit Init_SensorData_Event_response(::sensor_interfaces::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  ::sensor_interfaces::srv::SensorData_Event response(::sensor_interfaces::srv::SensorData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_request
{
public:
  explicit Init_SensorData_Event_request(::sensor_interfaces::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  Init_SensorData_Event_response request(::sensor_interfaces::srv::SensorData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SensorData_Event_response(msg_);
  }

private:
  ::sensor_interfaces::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_info
{
public:
  Init_SensorData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_Event_request info(::sensor_interfaces::srv::SensorData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SensorData_Event_request(msg_);
  }

private:
  ::sensor_interfaces::srv::SensorData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SensorData_Event>()
{
  return sensor_interfaces::srv::builder::Init_SensorData_Event_info();
}

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

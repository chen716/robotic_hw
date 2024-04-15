// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/sensor_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
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
  ::tutorial_interfaces::srv::SensorData_Request num_samples(::tutorial_interfaces::srv::SensorData_Request::_num_samples_type arg)
  {
    msg_.num_samples = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SensorData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SensorData_Request>()
{
  return tutorial_interfaces::srv::builder::Init_SensorData_Request_num_samples();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
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
  ::tutorial_interfaces::srv::SensorData_Response data(::tutorial_interfaces::srv::SensorData_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SensorData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SensorData_Response>()
{
  return tutorial_interfaces::srv::builder::Init_SensorData_Response_data();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SensorData_Event_response
{
public:
  explicit Init_SensorData_Event_response(::tutorial_interfaces::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SensorData_Event response(::tutorial_interfaces::srv::SensorData_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_request
{
public:
  explicit Init_SensorData_Event_request(::tutorial_interfaces::srv::SensorData_Event & msg)
  : msg_(msg)
  {}
  Init_SensorData_Event_response request(::tutorial_interfaces::srv::SensorData_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SensorData_Event_response(msg_);
  }

private:
  ::tutorial_interfaces::srv::SensorData_Event msg_;
};

class Init_SensorData_Event_info
{
public:
  Init_SensorData_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorData_Event_request info(::tutorial_interfaces::srv::SensorData_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SensorData_Event_request(msg_);
  }

private:
  ::tutorial_interfaces::srv::SensorData_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SensorData_Event>()
{
  return tutorial_interfaces::srv::builder::Init_SensorData_Event_info();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SENSOR_DATA__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleRequest_Request_requestsample
{
public:
  Init_SampleRequest_Request_requestsample()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_interfaces::srv::SampleRequest_Request requestsample(::sensor_interfaces::srv::SampleRequest_Request::_requestsample_type arg)
  {
    msg_.requestsample = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SampleRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SampleRequest_Request>()
{
  return sensor_interfaces::srv::builder::Init_SampleRequest_Request_requestsample();
}

}  // namespace sensor_interfaces


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleRequest_Response_data
{
public:
  Init_SampleRequest_Response_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_interfaces::srv::SampleRequest_Response data(::sensor_interfaces::srv::SampleRequest_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SampleRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SampleRequest_Response>()
{
  return sensor_interfaces::srv::builder::Init_SampleRequest_Response_data();
}

}  // namespace sensor_interfaces


namespace sensor_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleRequest_Event_response
{
public:
  explicit Init_SampleRequest_Event_response(::sensor_interfaces::srv::SampleRequest_Event & msg)
  : msg_(msg)
  {}
  ::sensor_interfaces::srv::SampleRequest_Event response(::sensor_interfaces::srv::SampleRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interfaces::srv::SampleRequest_Event msg_;
};

class Init_SampleRequest_Event_request
{
public:
  explicit Init_SampleRequest_Event_request(::sensor_interfaces::srv::SampleRequest_Event & msg)
  : msg_(msg)
  {}
  Init_SampleRequest_Event_response request(::sensor_interfaces::srv::SampleRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SampleRequest_Event_response(msg_);
  }

private:
  ::sensor_interfaces::srv::SampleRequest_Event msg_;
};

class Init_SampleRequest_Event_info
{
public:
  Init_SampleRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleRequest_Event_request info(::sensor_interfaces::srv::SampleRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SampleRequest_Event_request(msg_);
  }

private:
  ::sensor_interfaces::srv::SampleRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interfaces::srv::SampleRequest_Event>()
{
  return sensor_interfaces::srv::builder::Init_SampleRequest_Event_info();
}

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_

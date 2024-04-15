// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/sample_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
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
  ::tutorial_interfaces::srv::SampleRequest_Request requestsample(::tutorial_interfaces::srv::SampleRequest_Request::_requestsample_type arg)
  {
    msg_.requestsample = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SampleRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SampleRequest_Request>()
{
  return tutorial_interfaces::srv::builder::Init_SampleRequest_Request_requestsample();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
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
  ::tutorial_interfaces::srv::SampleRequest_Response data(::tutorial_interfaces::srv::SampleRequest_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SampleRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SampleRequest_Response>()
{
  return tutorial_interfaces::srv::builder::Init_SampleRequest_Response_data();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_SampleRequest_Event_response
{
public:
  explicit Init_SampleRequest_Event_response(::tutorial_interfaces::srv::SampleRequest_Event & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::SampleRequest_Event response(::tutorial_interfaces::srv::SampleRequest_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::SampleRequest_Event msg_;
};

class Init_SampleRequest_Event_request
{
public:
  explicit Init_SampleRequest_Event_request(::tutorial_interfaces::srv::SampleRequest_Event & msg)
  : msg_(msg)
  {}
  Init_SampleRequest_Event_response request(::tutorial_interfaces::srv::SampleRequest_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SampleRequest_Event_response(msg_);
  }

private:
  ::tutorial_interfaces::srv::SampleRequest_Event msg_;
};

class Init_SampleRequest_Event_info
{
public:
  Init_SampleRequest_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SampleRequest_Event_request info(::tutorial_interfaces::srv::SampleRequest_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SampleRequest_Event_request(msg_);
  }

private:
  ::tutorial_interfaces::srv::SampleRequest_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::SampleRequest_Event>()
{
  return tutorial_interfaces::srv::builder::Init_SampleRequest_Event_info();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__BUILDER_HPP_

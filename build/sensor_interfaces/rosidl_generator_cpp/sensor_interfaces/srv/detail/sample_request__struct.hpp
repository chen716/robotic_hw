// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_HPP_
#define SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Request __declspec(deprecated)
#endif

namespace sensor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleRequest_Request_
{
  using Type = SampleRequest_Request_<ContainerAllocator>;

  explicit SampleRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requestsample = 0l;
    }
  }

  explicit SampleRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->requestsample = 0l;
    }
  }

  // field types and members
  using _requestsample_type =
    int32_t;
  _requestsample_type requestsample;

  // setters for named parameter idiom
  Type & set__requestsample(
    const int32_t & _arg)
  {
    this->requestsample = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Request
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Request
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleRequest_Request_ & other) const
  {
    if (this->requestsample != other.requestsample) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleRequest_Request_

// alias to use template instance with default allocator
using SampleRequest_Request =
  sensor_interfaces::srv::SampleRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_interfaces


// Include directives for member types
// Member 'data'
#include "std_msgs/msg/detail/float64_multi_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Response __declspec(deprecated)
#endif

namespace sensor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleRequest_Response_
{
  using Type = SampleRequest_Response_<ContainerAllocator>;

  explicit SampleRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_init)
  {
    (void)_init;
  }

  explicit SampleRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _data_type =
    std_msgs::msg::Float64MultiArray_<ContainerAllocator>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std_msgs::msg::Float64MultiArray_<ContainerAllocator> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Response
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Response
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleRequest_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleRequest_Response_

// alias to use template instance with default allocator
using SampleRequest_Response =
  sensor_interfaces::srv::SampleRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Event __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interfaces__srv__SampleRequest_Event __declspec(deprecated)
#endif

namespace sensor_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SampleRequest_Event_
{
  using Type = SampleRequest_Event_<ContainerAllocator>;

  explicit SampleRequest_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SampleRequest_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_interfaces::srv::SampleRequest_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<sensor_interfaces::srv::SampleRequest_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Event
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interfaces__srv__SampleRequest_Event
    std::shared_ptr<sensor_interfaces::srv::SampleRequest_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SampleRequest_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SampleRequest_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SampleRequest_Event_

// alias to use template instance with default allocator
using SampleRequest_Event =
  sensor_interfaces::srv::SampleRequest_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_interfaces

namespace sensor_interfaces
{

namespace srv
{

struct SampleRequest
{
  using Request = sensor_interfaces::srv::SampleRequest_Request;
  using Response = sensor_interfaces::srv::SampleRequest_Response;
  using Event = sensor_interfaces::srv::SampleRequest_Event;
};

}  // namespace srv

}  // namespace sensor_interfaces

#endif  // SENSOR_INTERFACES__SRV__DETAIL__SAMPLE_REQUEST__STRUCT_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#ifndef CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_HPP_
#define CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Request __attribute__((deprecated))
#else
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Request __declspec(deprecated)
#endif

namespace cpp_sensor_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SensorData_Request_
{
  using Type = SensorData_Request_<ContainerAllocator>;

  explicit SensorData_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_samples = 0ll;
    }
  }

  explicit SensorData_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_samples = 0ll;
    }
  }

  // field types and members
  using _num_samples_type =
    int64_t;
  _num_samples_type num_samples;

  // setters for named parameter idiom
  Type & set__num_samples(
    const int64_t & _arg)
  {
    this->num_samples = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Request
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Request
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_Request_ & other) const
  {
    if (this->num_samples != other.num_samples) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_Request_

// alias to use template instance with default allocator
using SensorData_Request =
  cpp_sensor_server::srv::SensorData_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_sensor_server


#ifndef _WIN32
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Response __attribute__((deprecated))
#else
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Response __declspec(deprecated)
#endif

namespace cpp_sensor_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SensorData_Response_
{
  using Type = SensorData_Response_<ContainerAllocator>;

  explicit SensorData_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SensorData_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Response
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Response
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_Response_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_Response_

// alias to use template instance with default allocator
using SensorData_Response =
  cpp_sensor_server::srv::SensorData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_sensor_server


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Event __attribute__((deprecated))
#else
# define DEPRECATED__cpp_sensor_server__srv__SensorData_Event __declspec(deprecated)
#endif

namespace cpp_sensor_server
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SensorData_Event_
{
  using Type = SensorData_Event_<ContainerAllocator>;

  explicit SensorData_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SensorData_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cpp_sensor_server::srv::SensorData_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cpp_sensor_server::srv::SensorData_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Event
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_sensor_server__srv__SensorData_Event
    std::shared_ptr<cpp_sensor_server::srv::SensorData_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorData_Event_ & other) const
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
  bool operator!=(const SensorData_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorData_Event_

// alias to use template instance with default allocator
using SensorData_Event =
  cpp_sensor_server::srv::SensorData_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cpp_sensor_server

namespace cpp_sensor_server
{

namespace srv
{

struct SensorData
{
  using Request = cpp_sensor_server::srv::SensorData_Request;
  using Response = cpp_sensor_server::srv::SensorData_Response;
  using Event = cpp_sensor_server::srv::SensorData_Event;
};

}  // namespace srv

}  // namespace cpp_sensor_server

#endif  // CPP_SENSOR_SERVER__SRV__DETAIL__SENSOR_DATA__STRUCT_HPP_

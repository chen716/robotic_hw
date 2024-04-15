// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "cpp_sensor_server/srv/detail/sensor_data__functions.h"
#include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace cpp_sensor_server
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Request_type_support_ids_t;

static const _SensorData_Request_type_support_ids_t _SensorData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorData_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorData_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorData_Request_type_support_symbol_names_t _SensorData_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_sensor_server, srv, SensorData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_sensor_server, srv, SensorData_Request)),
  }
};

typedef struct _SensorData_Request_type_support_data_t
{
  void * data[2];
} _SensorData_Request_type_support_data_t;

static _SensorData_Request_type_support_data_t _SensorData_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorData_Request_message_typesupport_map = {
  2,
  "cpp_sensor_server",
  &_SensorData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SensorData_Request__get_type_hash,
  &cpp_sensor_server__srv__SensorData_Request__get_type_description,
  &cpp_sensor_server__srv__SensorData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cpp_sensor_server

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Request>()
{
  return &::cpp_sensor_server::srv::rosidl_typesupport_cpp::SensorData_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cpp_sensor_server, srv, SensorData_Request)() {
  return get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sensor_data__functions.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_sensor_server
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Response_type_support_ids_t;

static const _SensorData_Response_type_support_ids_t _SensorData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorData_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorData_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorData_Response_type_support_symbol_names_t _SensorData_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_sensor_server, srv, SensorData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_sensor_server, srv, SensorData_Response)),
  }
};

typedef struct _SensorData_Response_type_support_data_t
{
  void * data[2];
} _SensorData_Response_type_support_data_t;

static _SensorData_Response_type_support_data_t _SensorData_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorData_Response_message_typesupport_map = {
  2,
  "cpp_sensor_server",
  &_SensorData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SensorData_Response__get_type_hash,
  &cpp_sensor_server__srv__SensorData_Response__get_type_description,
  &cpp_sensor_server__srv__SensorData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cpp_sensor_server

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Response>()
{
  return &::cpp_sensor_server::srv::rosidl_typesupport_cpp::SensorData_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cpp_sensor_server, srv, SensorData_Response)() {
  return get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sensor_data__functions.h"
// already included above
// #include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_sensor_server
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorData_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Event_type_support_ids_t;

static const _SensorData_Event_type_support_ids_t _SensorData_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorData_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorData_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorData_Event_type_support_symbol_names_t _SensorData_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_sensor_server, srv, SensorData_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_sensor_server, srv, SensorData_Event)),
  }
};

typedef struct _SensorData_Event_type_support_data_t
{
  void * data[2];
} _SensorData_Event_type_support_data_t;

static _SensorData_Event_type_support_data_t _SensorData_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorData_Event_message_typesupport_map = {
  2,
  "cpp_sensor_server",
  &_SensorData_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &cpp_sensor_server__srv__SensorData_Event__get_type_hash,
  &cpp_sensor_server__srv__SensorData_Event__get_type_description,
  &cpp_sensor_server__srv__SensorData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cpp_sensor_server

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Event>()
{
  return &::cpp_sensor_server::srv::rosidl_typesupport_cpp::SensorData_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, cpp_sensor_server, srv, SensorData_Event)() {
  return get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "cpp_sensor_server/srv/detail/sensor_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace cpp_sensor_server
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SensorData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_type_support_ids_t;

static const _SensorData_type_support_ids_t _SensorData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SensorData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SensorData_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SensorData_type_support_symbol_names_t _SensorData_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_sensor_server, srv, SensorData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cpp_sensor_server, srv, SensorData)),
  }
};

typedef struct _SensorData_type_support_data_t
{
  void * data[2];
} _SensorData_type_support_data_t;

static _SensorData_type_support_data_t _SensorData_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SensorData_service_typesupport_map = {
  2,
  "cpp_sensor_server",
  &_SensorData_service_typesupport_ids.typesupport_identifier[0],
  &_SensorData_service_typesupport_symbol_names.symbol_name[0],
  &_SensorData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SensorData_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<cpp_sensor_server::srv::SensorData_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<cpp_sensor_server::srv::SensorData>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<cpp_sensor_server::srv::SensorData>,
  &cpp_sensor_server__srv__SensorData__get_type_hash,
  &cpp_sensor_server__srv__SensorData__get_type_description,
  &cpp_sensor_server__srv__SensorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace cpp_sensor_server

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<cpp_sensor_server::srv::SensorData>()
{
  return &::cpp_sensor_server::srv::rosidl_typesupport_cpp::SensorData_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

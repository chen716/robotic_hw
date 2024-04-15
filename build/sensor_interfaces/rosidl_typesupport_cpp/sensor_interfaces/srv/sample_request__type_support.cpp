// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sensor_interfaces/srv/detail/sample_request__functions.h"
#include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SampleRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Request_type_support_ids_t;

static const _SampleRequest_Request_type_support_ids_t _SampleRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SampleRequest_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SampleRequest_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SampleRequest_Request_type_support_symbol_names_t _SampleRequest_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_interfaces, srv, SampleRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_interfaces, srv, SampleRequest_Request)),
  }
};

typedef struct _SampleRequest_Request_type_support_data_t
{
  void * data[2];
} _SampleRequest_Request_type_support_data_t;

static _SampleRequest_Request_type_support_data_t _SampleRequest_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SampleRequest_Request_message_typesupport_map = {
  2,
  "sensor_interfaces",
  &_SampleRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SampleRequest_Request__get_type_hash,
  &sensor_interfaces__srv__SampleRequest_Request__get_type_description,
  &sensor_interfaces__srv__SampleRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Request>()
{
  return &::sensor_interfaces::srv::rosidl_typesupport_cpp::SampleRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sensor_interfaces, srv, SampleRequest_Request)() {
  return get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Request>();
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
// #include "sensor_interfaces/srv/detail/sample_request__functions.h"
// already included above
// #include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
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

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SampleRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Response_type_support_ids_t;

static const _SampleRequest_Response_type_support_ids_t _SampleRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SampleRequest_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SampleRequest_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SampleRequest_Response_type_support_symbol_names_t _SampleRequest_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_interfaces, srv, SampleRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_interfaces, srv, SampleRequest_Response)),
  }
};

typedef struct _SampleRequest_Response_type_support_data_t
{
  void * data[2];
} _SampleRequest_Response_type_support_data_t;

static _SampleRequest_Response_type_support_data_t _SampleRequest_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SampleRequest_Response_message_typesupport_map = {
  2,
  "sensor_interfaces",
  &_SampleRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SampleRequest_Response__get_type_hash,
  &sensor_interfaces__srv__SampleRequest_Response__get_type_description,
  &sensor_interfaces__srv__SampleRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Response>()
{
  return &::sensor_interfaces::srv::rosidl_typesupport_cpp::SampleRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sensor_interfaces, srv, SampleRequest_Response)() {
  return get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Response>();
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
// #include "sensor_interfaces/srv/detail/sample_request__functions.h"
// already included above
// #include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
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

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SampleRequest_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Event_type_support_ids_t;

static const _SampleRequest_Event_type_support_ids_t _SampleRequest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SampleRequest_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SampleRequest_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SampleRequest_Event_type_support_symbol_names_t _SampleRequest_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_interfaces, srv, SampleRequest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_interfaces, srv, SampleRequest_Event)),
  }
};

typedef struct _SampleRequest_Event_type_support_data_t
{
  void * data[2];
} _SampleRequest_Event_type_support_data_t;

static _SampleRequest_Event_type_support_data_t _SampleRequest_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SampleRequest_Event_message_typesupport_map = {
  2,
  "sensor_interfaces",
  &_SampleRequest_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SampleRequest_Event__get_type_hash,
  &sensor_interfaces__srv__SampleRequest_Event__get_type_description,
  &sensor_interfaces__srv__SampleRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Event>()
{
  return &::sensor_interfaces::srv::rosidl_typesupport_cpp::SampleRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, sensor_interfaces, srv, SampleRequest_Event)() {
  return get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Event>();
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
// #include "sensor_interfaces/srv/detail/sample_request__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SampleRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_type_support_ids_t;

static const _SampleRequest_type_support_ids_t _SampleRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SampleRequest_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SampleRequest_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SampleRequest_type_support_symbol_names_t _SampleRequest_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensor_interfaces, srv, SampleRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensor_interfaces, srv, SampleRequest)),
  }
};

typedef struct _SampleRequest_type_support_data_t
{
  void * data[2];
} _SampleRequest_type_support_data_t;

static _SampleRequest_type_support_data_t _SampleRequest_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SampleRequest_service_typesupport_map = {
  2,
  "sensor_interfaces",
  &_SampleRequest_service_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_service_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SampleRequest_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<sensor_interfaces::srv::SampleRequest_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<sensor_interfaces::srv::SampleRequest>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<sensor_interfaces::srv::SampleRequest>,
  &sensor_interfaces__srv__SampleRequest__get_type_hash,
  &sensor_interfaces__srv__SampleRequest__get_type_description,
  &sensor_interfaces__srv__SampleRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace sensor_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<sensor_interfaces::srv::SampleRequest>()
{
  return &::sensor_interfaces::srv::rosidl_typesupport_cpp::SampleRequest_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

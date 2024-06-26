// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sensor_interfaces:srv/SensorData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sensor_interfaces/srv/detail/sensor_data__struct.h"
#include "sensor_interfaces/srv/detail/sensor_data__type_support.h"
#include "sensor_interfaces/srv/detail/sensor_data__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SensorData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Request_type_support_ids_t;

static const _SensorData_Request_type_support_ids_t _SensorData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_interfaces, srv, SensorData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, SensorData_Request)),
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
  "sensor_interfaces",
  &_SensorData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SensorData_Request__get_type_hash,
  &sensor_interfaces__srv__SensorData_Request__get_type_description,
  &sensor_interfaces__srv__SensorData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_interfaces, srv, SensorData_Request)() {
  return &::sensor_interfaces::srv::rosidl_typesupport_c::SensorData_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__struct.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__type_support.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SensorData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Response_type_support_ids_t;

static const _SensorData_Response_type_support_ids_t _SensorData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_interfaces, srv, SensorData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, SensorData_Response)),
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
  "sensor_interfaces",
  &_SensorData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SensorData_Response__get_type_hash,
  &sensor_interfaces__srv__SensorData_Response__get_type_description,
  &sensor_interfaces__srv__SensorData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_interfaces, srv, SensorData_Response)() {
  return &::sensor_interfaces::srv::rosidl_typesupport_c::SensorData_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__struct.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__type_support.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SensorData_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_Event_type_support_ids_t;

static const _SensorData_Event_type_support_ids_t _SensorData_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_interfaces, srv, SensorData_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, SensorData_Event)),
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
  "sensor_interfaces",
  &_SensorData_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SensorData_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SensorData_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SensorData_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &sensor_interfaces__srv__SensorData_Event__get_type_hash,
  &sensor_interfaces__srv__SensorData_Event__get_type_description,
  &sensor_interfaces__srv__SensorData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sensor_interfaces, srv, SensorData_Event)() {
  return &::sensor_interfaces::srv::rosidl_typesupport_c::SensorData_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "sensor_interfaces/srv/detail/sensor_data__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace sensor_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SensorData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SensorData_type_support_ids_t;

static const _SensorData_type_support_ids_t _SensorData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_interfaces, srv, SensorData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_interfaces, srv, SensorData)),
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
  "sensor_interfaces",
  &_SensorData_service_typesupport_ids.typesupport_identifier[0],
  &_SensorData_service_typesupport_symbol_names.symbol_name[0],
  &_SensorData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SensorData_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SensorData_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SensorData_Request_message_type_support_handle,
  &SensorData_Response_message_type_support_handle,
  &SensorData_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sensor_interfaces,
    srv,
    SensorData
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    sensor_interfaces,
    srv,
    SensorData
  ),
  &sensor_interfaces__srv__SensorData__get_type_hash,
  &sensor_interfaces__srv__SensorData__get_type_description,
  &sensor_interfaces__srv__SensorData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace sensor_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, sensor_interfaces, srv, SensorData)() {
  return &::sensor_interfaces::srv::rosidl_typesupport_c::SensorData_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

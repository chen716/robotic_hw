// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tutorial_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tutorial_interfaces/srv/detail/sample_request__struct.h"
#include "tutorial_interfaces/srv/detail/sample_request__type_support.h"
#include "tutorial_interfaces/srv/detail/sample_request__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SampleRequest_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Request_type_support_ids_t;

static const _SampleRequest_Request_type_support_ids_t _SampleRequest_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, SampleRequest_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, SampleRequest_Request)),
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
  "tutorial_interfaces",
  &_SampleRequest_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SampleRequest_Request__get_type_hash,
  &tutorial_interfaces__srv__SampleRequest_Request__get_type_description,
  &tutorial_interfaces__srv__SampleRequest_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, srv, SampleRequest_Request)() {
  return &::tutorial_interfaces::srv::rosidl_typesupport_c::SampleRequest_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__type_support.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__functions.h"
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

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SampleRequest_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Response_type_support_ids_t;

static const _SampleRequest_Response_type_support_ids_t _SampleRequest_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, SampleRequest_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, SampleRequest_Response)),
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
  "tutorial_interfaces",
  &_SampleRequest_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SampleRequest_Response__get_type_hash,
  &tutorial_interfaces__srv__SampleRequest_Response__get_type_description,
  &tutorial_interfaces__srv__SampleRequest_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, srv, SampleRequest_Response)() {
  return &::tutorial_interfaces::srv::rosidl_typesupport_c::SampleRequest_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__type_support.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__functions.h"
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

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SampleRequest_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_Event_type_support_ids_t;

static const _SampleRequest_Event_type_support_ids_t _SampleRequest_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, SampleRequest_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, SampleRequest_Event)),
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
  "tutorial_interfaces",
  &_SampleRequest_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SampleRequest_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &tutorial_interfaces__srv__SampleRequest_Event__get_type_hash,
  &tutorial_interfaces__srv__SampleRequest_Event__get_type_description,
  &tutorial_interfaces__srv__SampleRequest_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, srv, SampleRequest_Event)() {
  return &::tutorial_interfaces::srv::rosidl_typesupport_c::SampleRequest_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tutorial_interfaces/srv/detail/sample_request__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace tutorial_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SampleRequest_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SampleRequest_type_support_ids_t;

static const _SampleRequest_type_support_ids_t _SampleRequest_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tutorial_interfaces, srv, SampleRequest)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tutorial_interfaces, srv, SampleRequest)),
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
  "tutorial_interfaces",
  &_SampleRequest_service_typesupport_ids.typesupport_identifier[0],
  &_SampleRequest_service_typesupport_symbol_names.symbol_name[0],
  &_SampleRequest_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SampleRequest_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SampleRequest_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SampleRequest_Request_message_type_support_handle,
  &SampleRequest_Response_message_type_support_handle,
  &SampleRequest_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_interfaces,
    srv,
    SampleRequest
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    tutorial_interfaces,
    srv,
    SampleRequest
  ),
  &tutorial_interfaces__srv__SampleRequest__get_type_hash,
  &tutorial_interfaces__srv__SampleRequest__get_type_description,
  &tutorial_interfaces__srv__SampleRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tutorial_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tutorial_interfaces, srv, SampleRequest)() {
  return &::tutorial_interfaces::srv::rosidl_typesupport_c::SampleRequest_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

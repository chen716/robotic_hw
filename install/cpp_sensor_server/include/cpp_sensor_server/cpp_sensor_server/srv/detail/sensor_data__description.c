// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cpp_sensor_server:srv/SensorData.idl
// generated code does not contain a copyright notice

#include "cpp_sensor_server/srv/detail/sensor_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SensorData__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xc2, 0x91, 0x22, 0xf7, 0x80, 0xe2, 0x5b,
      0xe8, 0x57, 0x1c, 0x9f, 0xb1, 0x2e, 0xbe, 0x31,
      0x61, 0x02, 0xe9, 0xd1, 0x41, 0x64, 0x86, 0x46,
      0xf0, 0x04, 0x9e, 0x9a, 0x8a, 0x64, 0xa9, 0x58,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SensorData_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x73, 0x68, 0x95, 0xb6, 0xa7, 0xe2, 0xd9,
      0x50, 0x08, 0x75, 0x14, 0xe2, 0x33, 0xa1, 0xcf,
      0x86, 0xec, 0xdb, 0xd9, 0xe9, 0xc2, 0x24, 0x05,
      0x00, 0xee, 0x02, 0x4c, 0xc6, 0x7e, 0x16, 0x91,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SensorData_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x07, 0xcd, 0x2a, 0x86, 0x1d, 0x10, 0x0d,
      0x48, 0x93, 0x92, 0x53, 0x14, 0xa5, 0x9a, 0xef,
      0x82, 0x40, 0x38, 0x1b, 0x89, 0xcf, 0xf4, 0x60,
      0x9c, 0x1e, 0xf6, 0xd7, 0xbf, 0x55, 0x52, 0x1b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SensorData_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf3, 0x2b, 0x1d, 0x26, 0xac, 0x50, 0x27, 0x17,
      0x35, 0xda, 0x97, 0x4f, 0x83, 0x54, 0x07, 0x90,
      0xa9, 0xe5, 0xec, 0xe3, 0x6f, 0xda, 0xe1, 0x84,
      0xa2, 0x71, 0xc6, 0x07, 0x42, 0x83, 0x49, 0xdf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char cpp_sensor_server__srv__SensorData__TYPE_NAME[] = "cpp_sensor_server/srv/SensorData";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char cpp_sensor_server__srv__SensorData_Event__TYPE_NAME[] = "cpp_sensor_server/srv/SensorData_Event";
static char cpp_sensor_server__srv__SensorData_Request__TYPE_NAME[] = "cpp_sensor_server/srv/SensorData_Request";
static char cpp_sensor_server__srv__SensorData_Response__TYPE_NAME[] = "cpp_sensor_server/srv/SensorData_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char cpp_sensor_server__srv__SensorData__FIELD_NAME__request_message[] = "request_message";
static char cpp_sensor_server__srv__SensorData__FIELD_NAME__response_message[] = "response_message";
static char cpp_sensor_server__srv__SensorData__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SensorData__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SensorData__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SensorData_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cpp_sensor_server__srv__SensorData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cpp_sensor_server__srv__SensorData__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SensorData__TYPE_NAME, 32, 32},
      {cpp_sensor_server__srv__SensorData__FIELDS, 3, 3},
    },
    {cpp_sensor_server__srv__SensorData__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = cpp_sensor_server__srv__SensorData_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = cpp_sensor_server__srv__SensorData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = cpp_sensor_server__srv__SensorData_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char cpp_sensor_server__srv__SensorData_Request__FIELD_NAME__num_samples[] = "num_samples";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SensorData_Request__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SensorData_Request__FIELD_NAME__num_samples, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cpp_sensor_server__srv__SensorData_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
      {cpp_sensor_server__srv__SensorData_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char cpp_sensor_server__srv__SensorData_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SensorData_Response__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SensorData_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cpp_sensor_server__srv__SensorData_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
      {cpp_sensor_server__srv__SensorData_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__info[] = "info";
static char cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__request[] = "request";
static char cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SensorData_Event__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cpp_sensor_server__srv__SensorData_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
cpp_sensor_server__srv__SensorData_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SensorData_Event__TYPE_NAME, 38, 38},
      {cpp_sensor_server__srv__SensorData_Event__FIELDS, 3, 3},
    },
    {cpp_sensor_server__srv__SensorData_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = cpp_sensor_server__srv__SensorData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = cpp_sensor_server__srv__SensorData_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num_samples\n"
  "---\n"
  "float64[] data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SensorData__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SensorData__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SensorData_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SensorData_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SensorData_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SensorData_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SensorData_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SensorData_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SensorData__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SensorData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *cpp_sensor_server__srv__SensorData_Event__get_individual_type_description_source(NULL);
    sources[3] = *cpp_sensor_server__srv__SensorData_Request__get_individual_type_description_source(NULL);
    sources[4] = *cpp_sensor_server__srv__SensorData_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SensorData_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SensorData_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SensorData_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SensorData_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SensorData_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SensorData_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *cpp_sensor_server__srv__SensorData_Request__get_individual_type_description_source(NULL);
    sources[3] = *cpp_sensor_server__srv__SensorData_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

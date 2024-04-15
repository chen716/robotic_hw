// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sensor_interfaces:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#include "sensor_interfaces/srv/detail/sample_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__SampleRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x1f, 0xdd, 0xd4, 0x2a, 0xf8, 0x19, 0xfe,
      0x29, 0xb9, 0xf0, 0x25, 0x0e, 0x4e, 0x99, 0x0c,
      0xae, 0x21, 0x6b, 0xbe, 0xff, 0x0f, 0x2b, 0x44,
      0x53, 0xb8, 0x01, 0xf0, 0x3e, 0xfc, 0xaa, 0x0e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__SampleRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x1a, 0xa4, 0x76, 0x92, 0x30, 0x2d, 0x66,
      0xfe, 0x68, 0x6d, 0xf0, 0xfa, 0xce, 0x1f, 0x4d,
      0x7c, 0x51, 0x6d, 0xeb, 0x97, 0x58, 0xfe, 0x18,
      0x43, 0x79, 0xad, 0xf7, 0x9b, 0x61, 0x44, 0x88,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__SampleRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd9, 0x2d, 0xeb, 0x45, 0xfe, 0x99, 0xad, 0xd4,
      0xad, 0xaf, 0xc7, 0x9a, 0x78, 0x48, 0xad, 0x83,
      0xa4, 0x58, 0xbf, 0x30, 0x75, 0x20, 0xc8, 0x71,
      0x6a, 0xc7, 0x57, 0xda, 0xbf, 0x0c, 0x19, 0xf1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__SampleRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x9d, 0x1c, 0xb4, 0x38, 0x3a, 0x37, 0x57,
      0x6f, 0xf3, 0x6d, 0x73, 0xbc, 0xdf, 0xef, 0xd5,
      0xf3, 0xe5, 0xf3, 0xfb, 0x9d, 0x15, 0x46, 0x39,
      0xad, 0x2f, 0x8d, 0x88, 0xec, 0xc9, 0x16, 0x64,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
#include "std_msgs/msg/detail/float64_multi_array__functions.h"
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
static const rosidl_type_hash_t std_msgs__msg__Float64MultiArray__EXPECTED_HASH = {1, {
    0x10, 0x25, 0xdd, 0xc6, 0xb9, 0x55, 0x2d, 0x19,
    0x1f, 0x89, 0xef, 0x1a, 0x8d, 0x2f, 0x60, 0xf3,
    0xd3, 0x73, 0xe2, 0x8b, 0x28, 0x3d, 0x88, 0x91,
    0xdd, 0xcc, 0x97, 0x4e, 0x8c, 0x55, 0x39, 0x7f,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayDimension__EXPECTED_HASH = {1, {
    0x5e, 0x77, 0x3a, 0x60, 0xa4, 0xc7, 0xfc, 0x8a,
    0x54, 0x98, 0x5f, 0x30, 0x7c, 0x78, 0x37, 0xaa,
    0x29, 0x94, 0x25, 0x2a, 0x12, 0x6c, 0x30, 0x19,
    0x57, 0xa2, 0x4e, 0x31, 0x28, 0x2c, 0x9c, 0xbe,
  }};
static const rosidl_type_hash_t std_msgs__msg__MultiArrayLayout__EXPECTED_HASH = {1, {
    0x4c, 0x66, 0xe6, 0xf7, 0x8e, 0x74, 0x0a, 0xc1,
    0x03, 0xa9, 0x4c, 0xf6, 0x32, 0x59, 0xf9, 0x68,
    0xe4, 0x8c, 0x61, 0x7e, 0x76, 0x99, 0xe8, 0x29,
    0xb6, 0x3c, 0x21, 0xa5, 0xcb, 0x50, 0xda, 0xc6,
  }};
#endif

static char sensor_interfaces__srv__SampleRequest__TYPE_NAME[] = "sensor_interfaces/srv/SampleRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_interfaces__srv__SampleRequest_Event__TYPE_NAME[] = "sensor_interfaces/srv/SampleRequest_Event";
static char sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME[] = "sensor_interfaces/srv/SampleRequest_Request";
static char sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME[] = "sensor_interfaces/srv/SampleRequest_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Float64MultiArray__TYPE_NAME[] = "std_msgs/msg/Float64MultiArray";
static char std_msgs__msg__MultiArrayDimension__TYPE_NAME[] = "std_msgs/msg/MultiArrayDimension";
static char std_msgs__msg__MultiArrayLayout__TYPE_NAME[] = "std_msgs/msg/MultiArrayLayout";

// Define type names, field names, and default values
static char sensor_interfaces__srv__SampleRequest__FIELD_NAME__request_message[] = "request_message";
static char sensor_interfaces__srv__SampleRequest__FIELD_NAME__response_message[] = "response_message";
static char sensor_interfaces__srv__SampleRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__SampleRequest__FIELDS[] = {
  {
    {sensor_interfaces__srv__SampleRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sensor_interfaces__srv__SampleRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayDimension__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayLayout__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__SampleRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__SampleRequest__TYPE_NAME, 35, 35},
      {sensor_interfaces__srv__SampleRequest__FIELDS, 3, 3},
    },
    {sensor_interfaces__srv__SampleRequest__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = sensor_interfaces__srv__SampleRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sensor_interfaces__srv__SampleRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = sensor_interfaces__srv__SampleRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float64MultiArray__EXPECTED_HASH, std_msgs__msg__Float64MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__Float64MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayDimension__EXPECTED_HASH, std_msgs__msg__MultiArrayDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__MultiArrayDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayLayout__EXPECTED_HASH, std_msgs__msg__MultiArrayLayout__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[7].fields = std_msgs__msg__MultiArrayLayout__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__SampleRequest_Request__FIELD_NAME__requestsample[] = "requestsample";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__SampleRequest_Request__FIELDS[] = {
  {
    {sensor_interfaces__srv__SampleRequest_Request__FIELD_NAME__requestsample, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__SampleRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
      {sensor_interfaces__srv__SampleRequest_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__SampleRequest_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__SampleRequest_Response__FIELDS[] = {
  {
    {sensor_interfaces__srv__SampleRequest_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sensor_interfaces__srv__SampleRequest_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayDimension__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayLayout__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__SampleRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
      {sensor_interfaces__srv__SampleRequest_Response__FIELDS, 1, 1},
    },
    {sensor_interfaces__srv__SampleRequest_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__Float64MultiArray__EXPECTED_HASH, std_msgs__msg__Float64MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Float64MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayDimension__EXPECTED_HASH, std_msgs__msg__MultiArrayDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__MultiArrayDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayLayout__EXPECTED_HASH, std_msgs__msg__MultiArrayLayout__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__MultiArrayLayout__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__info[] = "info";
static char sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__request[] = "request";
static char sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__SampleRequest_Event__FIELDS[] = {
  {
    {sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sensor_interfaces__srv__SampleRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayDimension__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__MultiArrayLayout__TYPE_NAME, 29, 29},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__SampleRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
      {sensor_interfaces__srv__SampleRequest_Event__FIELDS, 3, 3},
    },
    {sensor_interfaces__srv__SampleRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = sensor_interfaces__srv__SampleRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sensor_interfaces__srv__SampleRequest_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float64MultiArray__EXPECTED_HASH, std_msgs__msg__Float64MultiArray__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__Float64MultiArray__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayDimension__EXPECTED_HASH, std_msgs__msg__MultiArrayDimension__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__MultiArrayDimension__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__MultiArrayLayout__EXPECTED_HASH, std_msgs__msg__MultiArrayLayout__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[6].fields = std_msgs__msg__MultiArrayLayout__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 requestsample\n"
  "---\n"
  "std_msgs/Float64MultiArray data";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__SampleRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__SampleRequest__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__SampleRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__SampleRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__SampleRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__SampleRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__SampleRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_interfaces__srv__SampleRequest_Event__get_individual_type_description_source(NULL);
    sources[3] = *sensor_interfaces__srv__SampleRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *sensor_interfaces__srv__SampleRequest_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__SampleRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__SampleRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__SampleRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__SampleRequest_Response__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__SampleRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__SampleRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_interfaces__srv__SampleRequest_Request__get_individual_type_description_source(NULL);
    sources[3] = *sensor_interfaces__srv__SampleRequest_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

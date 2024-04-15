// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from cpp_sensor_server:srv/SampleRequest.idl
// generated code does not contain a copyright notice

#include "cpp_sensor_server/srv/detail/sample_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SampleRequest__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5d, 0x47, 0x70, 0x19, 0x24, 0x77, 0x01, 0x31,
      0xdb, 0xc9, 0xe5, 0x2e, 0x08, 0xe1, 0xea, 0x1d,
      0x05, 0xd5, 0xbe, 0xe6, 0x01, 0xd1, 0xd8, 0x19,
      0xc0, 0x55, 0x7b, 0xcd, 0xfb, 0xee, 0x2f, 0xd8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SampleRequest_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0xc9, 0x57, 0x54, 0xf2, 0xbf, 0xe3, 0x54,
      0xa9, 0xe6, 0x8a, 0x0b, 0x7f, 0x3b, 0xef, 0x29,
      0x15, 0xf2, 0x31, 0xf8, 0xb1, 0x96, 0xa8, 0x4b,
      0x37, 0xa6, 0xc4, 0xc3, 0x92, 0x21, 0x31, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SampleRequest_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x3c, 0x8f, 0x57, 0xca, 0x58, 0xc5, 0x90,
      0x67, 0x6c, 0xec, 0x76, 0xd9, 0x56, 0x00, 0x49,
      0xb4, 0x80, 0x94, 0x7c, 0x2c, 0xd9, 0xfa, 0xe3,
      0x07, 0xf3, 0xbc, 0x93, 0x35, 0xc2, 0x55, 0xac,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_cpp_sensor_server
const rosidl_type_hash_t *
cpp_sensor_server__srv__SampleRequest_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x1e, 0x3c, 0xc1, 0xff, 0x11, 0x7b, 0x20,
      0xfc, 0x54, 0x45, 0x0e, 0x80, 0x21, 0x34, 0x25,
      0xac, 0x70, 0xc4, 0x18, 0xbe, 0x25, 0x24, 0x98,
      0xaf, 0xb8, 0xb4, 0x5a, 0x64, 0xc9, 0xff, 0x71,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/multi_array_layout__functions.h"
#include "std_msgs/msg/detail/float64_multi_array__functions.h"
#include "std_msgs/msg/detail/multi_array_dimension__functions.h"
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

static char cpp_sensor_server__srv__SampleRequest__TYPE_NAME[] = "cpp_sensor_server/srv/SampleRequest";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char cpp_sensor_server__srv__SampleRequest_Event__TYPE_NAME[] = "cpp_sensor_server/srv/SampleRequest_Event";
static char cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME[] = "cpp_sensor_server/srv/SampleRequest_Request";
static char cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME[] = "cpp_sensor_server/srv/SampleRequest_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char std_msgs__msg__Float64MultiArray__TYPE_NAME[] = "std_msgs/msg/Float64MultiArray";
static char std_msgs__msg__MultiArrayDimension__TYPE_NAME[] = "std_msgs/msg/MultiArrayDimension";
static char std_msgs__msg__MultiArrayLayout__TYPE_NAME[] = "std_msgs/msg/MultiArrayLayout";

// Define type names, field names, and default values
static char cpp_sensor_server__srv__SampleRequest__FIELD_NAME__request_message[] = "request_message";
static char cpp_sensor_server__srv__SampleRequest__FIELD_NAME__response_message[] = "response_message";
static char cpp_sensor_server__srv__SampleRequest__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SampleRequest__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SampleRequest__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {cpp_sensor_server__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cpp_sensor_server__srv__SampleRequest__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
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
cpp_sensor_server__srv__SampleRequest__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SampleRequest__TYPE_NAME, 35, 35},
      {cpp_sensor_server__srv__SampleRequest__FIELDS, 3, 3},
    },
    {cpp_sensor_server__srv__SampleRequest__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = cpp_sensor_server__srv__SampleRequest_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = cpp_sensor_server__srv__SampleRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = cpp_sensor_server__srv__SampleRequest_Response__get_type_description(NULL)->type_description.fields;
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
static char cpp_sensor_server__srv__SampleRequest_Request__FIELD_NAME__requestsample[] = "requestsample";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SampleRequest_Request__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SampleRequest_Request__FIELD_NAME__requestsample, 13, 13},
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
cpp_sensor_server__srv__SampleRequest_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
      {cpp_sensor_server__srv__SampleRequest_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char cpp_sensor_server__srv__SampleRequest_Response__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SampleRequest_Response__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SampleRequest_Response__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float64MultiArray__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cpp_sensor_server__srv__SampleRequest_Response__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
cpp_sensor_server__srv__SampleRequest_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
      {cpp_sensor_server__srv__SampleRequest_Response__FIELDS, 1, 1},
    },
    {cpp_sensor_server__srv__SampleRequest_Response__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
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
static char cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__info[] = "info";
static char cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__request[] = "request";
static char cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field cpp_sensor_server__srv__SampleRequest_Event__FIELDS[] = {
  {
    {cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription cpp_sensor_server__srv__SampleRequest_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
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
cpp_sensor_server__srv__SampleRequest_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {cpp_sensor_server__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
      {cpp_sensor_server__srv__SampleRequest_Event__FIELDS, 3, 3},
    },
    {cpp_sensor_server__srv__SampleRequest_Event__REFERENCED_TYPE_DESCRIPTIONS, 7, 7},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = cpp_sensor_server__srv__SampleRequest_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = cpp_sensor_server__srv__SampleRequest_Response__get_type_description(NULL)->type_description.fields;
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
cpp_sensor_server__srv__SampleRequest__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SampleRequest__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SampleRequest_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SampleRequest_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SampleRequest_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SampleRequest_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
cpp_sensor_server__srv__SampleRequest_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {cpp_sensor_server__srv__SampleRequest_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SampleRequest__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SampleRequest__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *cpp_sensor_server__srv__SampleRequest_Event__get_individual_type_description_source(NULL);
    sources[3] = *cpp_sensor_server__srv__SampleRequest_Request__get_individual_type_description_source(NULL);
    sources[4] = *cpp_sensor_server__srv__SampleRequest_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[8] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SampleRequest_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SampleRequest_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SampleRequest_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SampleRequest_Response__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
cpp_sensor_server__srv__SampleRequest_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[8];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 8, 8};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *cpp_sensor_server__srv__SampleRequest_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *cpp_sensor_server__srv__SampleRequest_Request__get_individual_type_description_source(NULL);
    sources[3] = *cpp_sensor_server__srv__SampleRequest_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__Float64MultiArray__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__MultiArrayDimension__get_individual_type_description_source(NULL);
    sources[7] = *std_msgs__msg__MultiArrayLayout__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

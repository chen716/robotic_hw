// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from sensor_interfaces:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#include "sensor_interfaces/srv/detail/add_three_ints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__AddThreeInts__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x21, 0x20, 0xb9, 0x62, 0xe7, 0x2e, 0x7a, 0xef,
      0x8b, 0x95, 0xcf, 0x8d, 0x34, 0x90, 0xd1, 0x3c,
      0x79, 0x18, 0xe4, 0x89, 0x97, 0x8b, 0xda, 0x95,
      0x38, 0x6e, 0xe2, 0x6b, 0x8c, 0xc0, 0xf1, 0x6a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__AddThreeInts_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6f, 0x10, 0x49, 0x12, 0xb3, 0xb9, 0x56, 0x8e,
      0xa0, 0x52, 0xa9, 0x8c, 0x21, 0x35, 0x34, 0x67,
      0xca, 0x51, 0x2d, 0x08, 0x0d, 0x82, 0x56, 0x66,
      0xf4, 0x85, 0x5e, 0x70, 0x77, 0xe6, 0xe9, 0xc6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__AddThreeInts_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0x5e, 0xd8, 0x4e, 0x86, 0x6a, 0xfa, 0xf6,
      0xf0, 0xd9, 0xf7, 0xdf, 0x08, 0xe4, 0x21, 0x3e,
      0x68, 0x20, 0x67, 0x2c, 0x83, 0x33, 0x77, 0x61,
      0x32, 0xf9, 0x9d, 0x1a, 0x08, 0xa8, 0xfa, 0xc3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_sensor_interfaces
const rosidl_type_hash_t *
sensor_interfaces__srv__AddThreeInts_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0c, 0x87, 0x36, 0x17, 0x2b, 0xb5, 0xd5, 0x50,
      0xc0, 0xbd, 0xa1, 0x92, 0x4c, 0x93, 0x5f, 0x6a,
      0xec, 0x86, 0x18, 0xd1, 0x56, 0xdc, 0x0e, 0xab,
      0xdb, 0xa7, 0xfa, 0x40, 0x31, 0x3f, 0xae, 0x8a,
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

static char sensor_interfaces__srv__AddThreeInts__TYPE_NAME[] = "sensor_interfaces/srv/AddThreeInts";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char sensor_interfaces__srv__AddThreeInts_Event__TYPE_NAME[] = "sensor_interfaces/srv/AddThreeInts_Event";
static char sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME[] = "sensor_interfaces/srv/AddThreeInts_Request";
static char sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME[] = "sensor_interfaces/srv/AddThreeInts_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char sensor_interfaces__srv__AddThreeInts__FIELD_NAME__request_message[] = "request_message";
static char sensor_interfaces__srv__AddThreeInts__FIELD_NAME__response_message[] = "response_message";
static char sensor_interfaces__srv__AddThreeInts__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__AddThreeInts__FIELDS[] = {
  {
    {sensor_interfaces__srv__AddThreeInts__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {sensor_interfaces__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sensor_interfaces__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__AddThreeInts__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__AddThreeInts__TYPE_NAME, 34, 34},
      {sensor_interfaces__srv__AddThreeInts__FIELDS, 3, 3},
    },
    {sensor_interfaces__srv__AddThreeInts__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = sensor_interfaces__srv__AddThreeInts_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sensor_interfaces__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = sensor_interfaces__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__a[] = "a";
static char sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__b[] = "b";
static char sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__c[] = "c";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__AddThreeInts_Request__FIELDS[] = {
  {
    {sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Request__FIELD_NAME__c, 1, 1},
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
sensor_interfaces__srv__AddThreeInts_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
      {sensor_interfaces__srv__AddThreeInts_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__AddThreeInts_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__AddThreeInts_Response__FIELDS[] = {
  {
    {sensor_interfaces__srv__AddThreeInts_Response__FIELD_NAME__sum, 3, 3},
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
sensor_interfaces__srv__AddThreeInts_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
      {sensor_interfaces__srv__AddThreeInts_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__info[] = "info";
static char sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__request[] = "request";
static char sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field sensor_interfaces__srv__AddThreeInts_Event__FIELDS[] = {
  {
    {sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription sensor_interfaces__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
sensor_interfaces__srv__AddThreeInts_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {sensor_interfaces__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
      {sensor_interfaces__srv__AddThreeInts_Event__FIELDS, 3, 3},
    },
    {sensor_interfaces__srv__AddThreeInts_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = sensor_interfaces__srv__AddThreeInts_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = sensor_interfaces__srv__AddThreeInts_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "int64 c\n"
  "---\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__AddThreeInts__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__AddThreeInts__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__AddThreeInts_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__AddThreeInts_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__AddThreeInts_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__AddThreeInts_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
sensor_interfaces__srv__AddThreeInts_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {sensor_interfaces__srv__AddThreeInts_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__AddThreeInts__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__AddThreeInts__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_interfaces__srv__AddThreeInts_Event__get_individual_type_description_source(NULL);
    sources[3] = *sensor_interfaces__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[4] = *sensor_interfaces__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__AddThreeInts_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__AddThreeInts_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__AddThreeInts_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__AddThreeInts_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
sensor_interfaces__srv__AddThreeInts_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *sensor_interfaces__srv__AddThreeInts_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *sensor_interfaces__srv__AddThreeInts_Request__get_individual_type_description_source(NULL);
    sources[3] = *sensor_interfaces__srv__AddThreeInts_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

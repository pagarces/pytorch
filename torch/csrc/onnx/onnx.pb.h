/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9-dev */

#ifndef PB_ONNX_ONNX_PB_H_INCLUDED
#define PB_ONNX_ONNX_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _onnx_Version {
    onnx_Version__START_VERSION = 0,
    onnx_Version_IR_VERSION_2017_10_10 = 1,
    onnx_Version_IR_VERSION = 2
} onnx_Version;
#define _onnx_Version_MIN onnx_Version__START_VERSION
#define _onnx_Version_MAX onnx_Version_IR_VERSION
#define _onnx_Version_ARRAYSIZE ((onnx_Version)(onnx_Version_IR_VERSION+1))

typedef enum _onnx_AttributeProto_AttributeType {
    onnx_AttributeProto_AttributeType_UNDEFINED = 0,
    onnx_AttributeProto_AttributeType_FLOAT = 1,
    onnx_AttributeProto_AttributeType_INT = 2,
    onnx_AttributeProto_AttributeType_STRING = 3,
    onnx_AttributeProto_AttributeType_TENSOR = 4,
    onnx_AttributeProto_AttributeType_GRAPH = 5,
    onnx_AttributeProto_AttributeType_FLOATS = 6,
    onnx_AttributeProto_AttributeType_INTS = 7,
    onnx_AttributeProto_AttributeType_STRINGS = 8,
    onnx_AttributeProto_AttributeType_TENSORS = 9,
    onnx_AttributeProto_AttributeType_GRAPHS = 10
} onnx_AttributeProto_AttributeType;
#define _onnx_AttributeProto_AttributeType_MIN onnx_AttributeProto_AttributeType_UNDEFINED
#define _onnx_AttributeProto_AttributeType_MAX onnx_AttributeProto_AttributeType_GRAPHS
#define _onnx_AttributeProto_AttributeType_ARRAYSIZE ((onnx_AttributeProto_AttributeType)(onnx_AttributeProto_AttributeType_GRAPHS+1))

typedef enum _onnx_TensorProto_DataType {
    onnx_TensorProto_DataType_UNDEFINED = 0,
    onnx_TensorProto_DataType_FLOAT = 1,
    onnx_TensorProto_DataType_UINT8 = 2,
    onnx_TensorProto_DataType_INT8 = 3,
    onnx_TensorProto_DataType_UINT16 = 4,
    onnx_TensorProto_DataType_INT16 = 5,
    onnx_TensorProto_DataType_INT32 = 6,
    onnx_TensorProto_DataType_INT64 = 7,
    onnx_TensorProto_DataType_STRING = 8,
    onnx_TensorProto_DataType_BOOL = 9,
    onnx_TensorProto_DataType_FLOAT16 = 10,
    onnx_TensorProto_DataType_DOUBLE = 11,
    onnx_TensorProto_DataType_UINT32 = 12,
    onnx_TensorProto_DataType_UINT64 = 13,
    onnx_TensorProto_DataType_COMPLEX64 = 14,
    onnx_TensorProto_DataType_COMPLEX128 = 15
} onnx_TensorProto_DataType;
#define _onnx_TensorProto_DataType_MIN onnx_TensorProto_DataType_UNDEFINED
#define _onnx_TensorProto_DataType_MAX onnx_TensorProto_DataType_COMPLEX128
#define _onnx_TensorProto_DataType_ARRAYSIZE ((onnx_TensorProto_DataType)(onnx_TensorProto_DataType_COMPLEX128+1))

/* Struct definitions */
typedef struct _onnx_GraphProto {
    pb_callback_t node;
    pb_callback_t name;
    pb_callback_t initializer;
    pb_callback_t doc_string;
    pb_callback_t input;
    pb_callback_t output;
    pb_callback_t value_info;
/* @@protoc_insertion_point(struct:onnx_GraphProto) */
} onnx_GraphProto;

typedef struct _onnx_NodeProto {
    pb_callback_t input;
    pb_callback_t output;
    pb_callback_t name;
    pb_callback_t op_type;
    pb_callback_t attribute;
    pb_callback_t doc_string;
    pb_callback_t domain;
/* @@protoc_insertion_point(struct:onnx_NodeProto) */
} onnx_NodeProto;

typedef struct _onnx_TypeProto_TensorShapeProto {
    pb_callback_t dim;
/* @@protoc_insertion_point(struct:onnx_TypeProto_TensorShapeProto) */
} onnx_TypeProto_TensorShapeProto;

typedef struct _onnx_ValueInfoProto {
    pb_callback_t name;
    pb_callback_t type;
/* @@protoc_insertion_point(struct:onnx_ValueInfoProto) */
} onnx_ValueInfoProto;

typedef struct _onnx_AttributeProto {
    pb_callback_t name;
    bool has_f;
    float f;
    bool has_i;
    int64_t i;
    pb_callback_t s;
    pb_callback_t t;
    pb_callback_t g;
    pb_callback_t floats;
    pb_callback_t ints;
    pb_callback_t strings;
    pb_callback_t tensors;
    pb_callback_t graphs;
    bool has_type;
    onnx_AttributeProto_AttributeType type;
/* @@protoc_insertion_point(struct:onnx_AttributeProto) */
} onnx_AttributeProto;

typedef struct _onnx_ModelProto {
    bool has_ir_version;
    int64_t ir_version;
    pb_callback_t producer_name;
    pb_callback_t producer_version;
    pb_callback_t domain;
    bool has_model_version;
    int64_t model_version;
    pb_callback_t doc_string;
    pb_callback_t graph;
    pb_callback_t opset_import;
/* @@protoc_insertion_point(struct:onnx_ModelProto) */
} onnx_ModelProto;

typedef struct _onnx_OperatorSetIdProto {
    pb_callback_t domain;
    bool has_version;
    int64_t version;
/* @@protoc_insertion_point(struct:onnx_OperatorSetIdProto) */
} onnx_OperatorSetIdProto;

typedef struct _onnx_TensorProto_Segment {
    bool has_begin;
    int64_t begin;
    bool has_end;
    int64_t end;
/* @@protoc_insertion_point(struct:onnx_TensorProto_Segment) */
} onnx_TensorProto_Segment;

typedef struct _onnx_TypeProto_SparseTensorTypeProto {
    bool has_elem_type;
    onnx_TensorProto_DataType elem_type;
    bool has_shape;
    onnx_TypeProto_TensorShapeProto shape;
/* @@protoc_insertion_point(struct:onnx_TypeProto_SparseTensorTypeProto) */
} onnx_TypeProto_SparseTensorTypeProto;

typedef struct _onnx_TypeProto_TensorShapeProto_Dimension {
    bool has_dim_value;
    int64_t dim_value;
    pb_callback_t dim_param;
/* @@protoc_insertion_point(struct:onnx_TypeProto_TensorShapeProto_Dimension) */
} onnx_TypeProto_TensorShapeProto_Dimension;

typedef struct _onnx_TypeProto_TensorTypeProto {
    bool has_elem_type;
    onnx_TensorProto_DataType elem_type;
    pb_callback_t shape;
/* @@protoc_insertion_point(struct:onnx_TypeProto_TensorTypeProto) */
} onnx_TypeProto_TensorTypeProto;

typedef struct _onnx_TensorProto {
    pb_callback_t dims;
    bool has_data_type;
    onnx_TensorProto_DataType data_type;
    bool has_segment;
    onnx_TensorProto_Segment segment;
    pb_callback_t float_data;
    pb_callback_t int32_data;
    pb_callback_t string_data;
    pb_callback_t int64_data;
    pb_callback_t name;
    pb_callback_t raw_data;
    pb_callback_t double_data;
    pb_callback_t uint64_data;
/* @@protoc_insertion_point(struct:onnx_TensorProto) */
} onnx_TensorProto;

typedef struct _onnx_TypeProto {
    pb_callback_t tensor_type;
    bool has_sparse_tensor_type;
    onnx_TypeProto_SparseTensorTypeProto sparse_tensor_type;
/* @@protoc_insertion_point(struct:onnx_TypeProto) */
} onnx_TypeProto;

typedef struct _onnx_SparseTensorProto {
    pb_callback_t dims;
    bool has_indices;
    onnx_TensorProto indices;
    bool has_values;
    onnx_TensorProto values;
/* @@protoc_insertion_point(struct:onnx_SparseTensorProto) */
} onnx_SparseTensorProto;

/* Default values for struct fields */

/* Initializer values for message structs */
#define onnx_AttributeProto_init_default         {{{NULL}, NULL}, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, (onnx_AttributeProto_AttributeType)0}
#define onnx_ValueInfoProto_init_default         {{{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_NodeProto_init_default              {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_ModelProto_init_default             {false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_GraphProto_init_default             {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_init_default            {{{NULL}, NULL}, false, (onnx_TensorProto_DataType)0, false, onnx_TensorProto_Segment_init_default, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_Segment_init_default    {false, 0, false, 0}
#define onnx_SparseTensorProto_init_default      {{{NULL}, NULL}, false, onnx_TensorProto_init_default, false, onnx_TensorProto_init_default}
#define onnx_TypeProto_init_default              {{{NULL}, NULL}, false, onnx_TypeProto_SparseTensorTypeProto_init_default}
#define onnx_TypeProto_TensorShapeProto_init_default {{{NULL}, NULL}}
#define onnx_TypeProto_TensorShapeProto_Dimension_init_default {false, 0, {{NULL}, NULL}}
#define onnx_TypeProto_TensorTypeProto_init_default {false, (onnx_TensorProto_DataType)0, {{NULL}, NULL}}
#define onnx_TypeProto_SparseTensorTypeProto_init_default {false, (onnx_TensorProto_DataType)0, false, onnx_TypeProto_TensorShapeProto_init_default}
#define onnx_OperatorSetIdProto_init_default     {{{NULL}, NULL}, false, 0}
#define onnx_AttributeProto_init_zero            {{{NULL}, NULL}, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, (onnx_AttributeProto_AttributeType)0}
#define onnx_ValueInfoProto_init_zero            {{{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_NodeProto_init_zero                 {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_ModelProto_init_zero                {false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_GraphProto_init_zero                {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_init_zero               {{{NULL}, NULL}, false, (onnx_TensorProto_DataType)0, false, onnx_TensorProto_Segment_init_zero, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define onnx_TensorProto_Segment_init_zero       {false, 0, false, 0}
#define onnx_SparseTensorProto_init_zero         {{{NULL}, NULL}, false, onnx_TensorProto_init_zero, false, onnx_TensorProto_init_zero}
#define onnx_TypeProto_init_zero                 {{{NULL}, NULL}, false, onnx_TypeProto_SparseTensorTypeProto_init_zero}
#define onnx_TypeProto_TensorShapeProto_init_zero {{{NULL}, NULL}}
#define onnx_TypeProto_TensorShapeProto_Dimension_init_zero {false, 0, {{NULL}, NULL}}
#define onnx_TypeProto_TensorTypeProto_init_zero {false, (onnx_TensorProto_DataType)0, {{NULL}, NULL}}
#define onnx_TypeProto_SparseTensorTypeProto_init_zero {false, (onnx_TensorProto_DataType)0, false, onnx_TypeProto_TensorShapeProto_init_zero}
#define onnx_OperatorSetIdProto_init_zero        {{{NULL}, NULL}, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define onnx_GraphProto_node_tag                 1
#define onnx_GraphProto_name_tag                 2
#define onnx_GraphProto_initializer_tag          5
#define onnx_GraphProto_doc_string_tag           10
#define onnx_GraphProto_input_tag                11
#define onnx_GraphProto_output_tag               12
#define onnx_GraphProto_value_info_tag           13
#define onnx_NodeProto_input_tag                 1
#define onnx_NodeProto_output_tag                2
#define onnx_NodeProto_name_tag                  3
#define onnx_NodeProto_op_type_tag               4
#define onnx_NodeProto_domain_tag                7
#define onnx_NodeProto_attribute_tag             5
#define onnx_NodeProto_doc_string_tag            6
#define onnx_TypeProto_TensorShapeProto_dim_tag  1
#define onnx_ValueInfoProto_name_tag             1
#define onnx_ValueInfoProto_type_tag             2
#define onnx_AttributeProto_name_tag             1
#define onnx_AttributeProto_type_tag             20
#define onnx_AttributeProto_f_tag                2
#define onnx_AttributeProto_i_tag                3
#define onnx_AttributeProto_s_tag                4
#define onnx_AttributeProto_t_tag                5
#define onnx_AttributeProto_g_tag                6
#define onnx_AttributeProto_floats_tag           7
#define onnx_AttributeProto_ints_tag             8
#define onnx_AttributeProto_strings_tag          9
#define onnx_AttributeProto_tensors_tag          10
#define onnx_AttributeProto_graphs_tag           11
#define onnx_ModelProto_ir_version_tag           1
#define onnx_ModelProto_opset_import_tag         8
#define onnx_ModelProto_producer_name_tag        2
#define onnx_ModelProto_producer_version_tag     3
#define onnx_ModelProto_domain_tag               4
#define onnx_ModelProto_model_version_tag        5
#define onnx_ModelProto_doc_string_tag           6
#define onnx_ModelProto_graph_tag                7
#define onnx_OperatorSetIdProto_domain_tag       1
#define onnx_OperatorSetIdProto_version_tag      2
#define onnx_TensorProto_Segment_begin_tag       1
#define onnx_TensorProto_Segment_end_tag         2
#define onnx_TypeProto_SparseTensorTypeProto_elem_type_tag 1
#define onnx_TypeProto_SparseTensorTypeProto_shape_tag 2
#define onnx_TypeProto_TensorShapeProto_Dimension_dim_value_tag 1
#define onnx_TypeProto_TensorShapeProto_Dimension_dim_param_tag 2
#define onnx_TypeProto_TensorTypeProto_elem_type_tag 1
#define onnx_TypeProto_TensorTypeProto_shape_tag 2
#define onnx_TensorProto_dims_tag                1
#define onnx_TensorProto_data_type_tag           2
#define onnx_TensorProto_segment_tag             3
#define onnx_TensorProto_float_data_tag          4
#define onnx_TensorProto_int32_data_tag          5
#define onnx_TensorProto_string_data_tag         6
#define onnx_TensorProto_int64_data_tag          7
#define onnx_TensorProto_name_tag                8
#define onnx_TensorProto_raw_data_tag            9
#define onnx_TensorProto_double_data_tag         10
#define onnx_TensorProto_uint64_data_tag         11
#define onnx_TypeProto_tensor_type_tag           1
#define onnx_TypeProto_sparse_tensor_type_tag    2
#define onnx_SparseTensorProto_dims_tag          1
#define onnx_SparseTensorProto_indices_tag       2
#define onnx_SparseTensorProto_values_tag        3

/* Struct field encoding specification for nanopb */
extern const pb_field_t onnx_AttributeProto_fields[13];
extern const pb_field_t onnx_ValueInfoProto_fields[3];
extern const pb_field_t onnx_NodeProto_fields[8];
extern const pb_field_t onnx_ModelProto_fields[9];
extern const pb_field_t onnx_GraphProto_fields[8];
extern const pb_field_t onnx_TensorProto_fields[12];
extern const pb_field_t onnx_TensorProto_Segment_fields[3];
extern const pb_field_t onnx_SparseTensorProto_fields[4];
extern const pb_field_t onnx_TypeProto_fields[3];
extern const pb_field_t onnx_TypeProto_TensorShapeProto_fields[2];
extern const pb_field_t onnx_TypeProto_TensorShapeProto_Dimension_fields[3];
extern const pb_field_t onnx_TypeProto_TensorTypeProto_fields[3];
extern const pb_field_t onnx_TypeProto_SparseTensorTypeProto_fields[3];
extern const pb_field_t onnx_OperatorSetIdProto_fields[3];

/* Maximum encoded size of messages (where known) */
/* onnx_AttributeProto_size depends on runtime parameters */
/* onnx_ValueInfoProto_size depends on runtime parameters */
/* onnx_NodeProto_size depends on runtime parameters */
/* onnx_ModelProto_size depends on runtime parameters */
/* onnx_GraphProto_size depends on runtime parameters */
/* onnx_TensorProto_size depends on runtime parameters */
#define onnx_TensorProto_Segment_size            22
/* onnx_SparseTensorProto_size depends on runtime parameters */
/* onnx_TypeProto_size depends on runtime parameters */
/* onnx_TypeProto_TensorShapeProto_size depends on runtime parameters */
/* onnx_TypeProto_TensorShapeProto_Dimension_size depends on runtime parameters */
/* onnx_TypeProto_TensorTypeProto_size depends on runtime parameters */
#define onnx_TypeProto_SparseTensorTypeProto_size (8 + onnx_TypeProto_TensorShapeProto_size)
/* onnx_OperatorSetIdProto_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define ONNX_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif


//this file was generated by ../../scripts/onnx_generator/OperatorHeader.py
# ifndef OPERATOR_OPERATOR__ONNX__MATMUL__9_H
# define OPERATOR_OPERATOR__ONNX__MATMUL__9_H

# include "operators/operator.h"
# include "operators/operator_stub.h"

/**
 * onnx operator 'MatMul' version 9
 *
 * @param[in]  ctx  Operator context
 * @return          Status code
 *
 * Matrix product that behaves like numpy.matmul:
 * https://docs.scipy.org/doc/numpy-1.13.0/reference/generated/numpy.matmul.html
 * 
 * Constraint T:
 *   Constrain input and output types to float/int tensors.
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * Input T A:
 *   N-dimensional matrix A
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * 
 * Input T B:
 *   N-dimensional matrix B
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64
 * Output T Y:
 *   Matrix multiply results from A * B
 *   Allowed Types: tensor_double, tensor_float, tensor_float16, tensor_int32,
 *                  tensor_int64, tensor_uint32, tensor_uint64

 *
 * @since version 9
 *
 * @see ../../../../../../travis/build/onnx/wheel-builder/onnx/onnx/defs/math/defs.cc:1035
 * @see https://github.com/onnx/onnx/blob/master/docs/Operators.md#MatMul
 */
operator_status operator__onnx__matmul__9(
    node_context *ctx
);

operator_executer resolve_operator__onnx__matmul__9(
    node_context *ctx
);

extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_double(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_float(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_float16(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_int32(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_int64(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_uint32(
    node_context *ctx
);
extern __attribute__((weak))
operator_status operator__onnx__matmul__9__T_tensor_uint64(
    node_context *ctx
);
# endif

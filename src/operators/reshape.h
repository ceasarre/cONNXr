#ifndef EMBEDDEDML_RESHAPE_H
#define EMBEDDEDML_RESHAPE_H
#include "../pb/onnx.pb-c.h"

void operator_reshape(Onnx__TensorProto *data, Onnx__TensorProto *shape, Onnx__TensorProto *reshaped);

#endif
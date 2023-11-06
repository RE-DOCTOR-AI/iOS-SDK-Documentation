#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/xor_ops.h>

namespace at {


// aten::__xor__.Scalar(Tensor self, Scalar other) -> Tensor
TORCH_API inline at::Tensor __xor__(const at::Tensor & self, const at::Scalar & other) {
    return at::_ops::__xor___Scalar::call(self, other);
}

// aten::__xor__.Tensor(Tensor self, Tensor other) -> Tensor
TORCH_API inline at::Tensor __xor__(const at::Tensor & self, const at::Tensor & other) {
    return at::_ops::__xor___Tensor::call(self, other);
}

}

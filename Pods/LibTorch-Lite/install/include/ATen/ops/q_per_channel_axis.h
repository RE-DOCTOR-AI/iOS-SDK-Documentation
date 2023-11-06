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



#include <ATen/ops/q_per_channel_axis_ops.h>

namespace at {


// aten::q_per_channel_axis(Tensor self) -> int
TORCH_API inline int64_t q_per_channel_axis(const at::Tensor & self) {
    return at::_ops::q_per_channel_axis::call(self);
}

}

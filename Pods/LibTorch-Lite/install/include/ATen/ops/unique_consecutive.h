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



#include <ATen/ops/unique_consecutive_ops.h>

namespace at {


// aten::unique_consecutive(Tensor self, bool return_inverse=False, bool return_counts=False, int? dim=None) -> (Tensor, Tensor, Tensor)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor> unique_consecutive(const at::Tensor & self, bool return_inverse=false, bool return_counts=false, c10::optional<int64_t> dim=c10::nullopt) {
    return at::_ops::unique_consecutive::call(self, return_inverse, return_counts, dim);
}

}

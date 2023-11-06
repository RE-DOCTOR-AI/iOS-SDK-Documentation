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



#include <ATen/ops/_has_compatible_shallow_copy_type_ops.h>

namespace at {


// aten::_has_compatible_shallow_copy_type(Tensor self, Tensor from) -> bool
TORCH_API inline bool _has_compatible_shallow_copy_type(const at::Tensor & self, const at::Tensor & from) {
    return at::_ops::_has_compatible_shallow_copy_type::call(self, from);
}

}

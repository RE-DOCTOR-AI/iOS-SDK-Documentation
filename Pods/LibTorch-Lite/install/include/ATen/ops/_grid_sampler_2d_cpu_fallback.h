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



#include <ATen/ops/_grid_sampler_2d_cpu_fallback_ops.h>

namespace at {


// aten::_grid_sampler_2d_cpu_fallback(Tensor input, Tensor grid, int interpolation_mode, int padding_mode, bool align_corners) -> Tensor
TORCH_API inline at::Tensor _grid_sampler_2d_cpu_fallback(const at::Tensor & input, const at::Tensor & grid, int64_t interpolation_mode, int64_t padding_mode, bool align_corners) {
    return at::_ops::_grid_sampler_2d_cpu_fallback::call(input, grid, interpolation_mode, padding_mode, align_corners);
}

}

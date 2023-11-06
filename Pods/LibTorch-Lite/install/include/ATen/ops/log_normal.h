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



#include <ATen/ops/log_normal_ops.h>

namespace at {


// aten::log_normal.out(Tensor self, float mean=1, float std=2, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & log_normal_out(at::Tensor & out, const at::Tensor & self, double mean=1, double std=2, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::log_normal_out::call(self, mean, std, generator, out);
}

// aten::log_normal.out(Tensor self, float mean=1, float std=2, *, Generator? generator=None, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & log_normal_outf(const at::Tensor & self, double mean, double std, c10::optional<at::Generator> generator, at::Tensor & out) {
    return at::_ops::log_normal_out::call(self, mean, std, generator, out);
}

// aten::log_normal.functional(Tensor self, float mean=1, float std=2, *, Generator? generator=None) -> Tensor
TORCH_API inline at::Tensor log_normal_functional(const at::Tensor & self, double mean=1, double std=2, c10::optional<at::Generator> generator=c10::nullopt) {
    return at::_ops::log_normal_functional::call(self, mean, std, generator);
}

}
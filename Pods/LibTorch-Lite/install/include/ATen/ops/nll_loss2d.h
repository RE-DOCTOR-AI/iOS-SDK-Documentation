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



#include <ATen/ops/nll_loss2d_ops.h>

namespace at {


// aten::nll_loss2d.out(Tensor self, Tensor target, Tensor? weight=None, int reduction=Mean, int ignore_index=-100, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & nll_loss2d_out(at::Tensor & out, const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight={}, int64_t reduction=at::Reduction::Mean, int64_t ignore_index=-100) {
    return at::_ops::nll_loss2d_out::call(self, target, weight, reduction, ignore_index, out);
}

// aten::nll_loss2d.out(Tensor self, Tensor target, Tensor? weight=None, int reduction=Mean, int ignore_index=-100, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & nll_loss2d_outf(const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight, int64_t reduction, int64_t ignore_index, at::Tensor & out) {
    return at::_ops::nll_loss2d_out::call(self, target, weight, reduction, ignore_index, out);
}

// aten::nll_loss2d(Tensor self, Tensor target, Tensor? weight=None, int reduction=Mean, int ignore_index=-100) -> Tensor
TORCH_API inline at::Tensor nll_loss2d(const at::Tensor & self, const at::Tensor & target, const c10::optional<at::Tensor> & weight={}, int64_t reduction=at::Reduction::Mean, int64_t ignore_index=-100) {
    return at::_ops::nll_loss2d::call(self, target, weight, reduction, ignore_index);
}

}

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



#include <ATen/ops/miopen_rnn_ops.h>

namespace at {


// aten::miopen_rnn(Tensor input, Tensor[] weight, int weight_stride0, Tensor hx, Tensor? cx, int mode, int hidden_size, int num_layers, bool batch_first, float dropout, bool train, bool bidirectional, int[] batch_sizes, Tensor? dropout_state) -> (Tensor, Tensor, Tensor, Tensor, Tensor)
TORCH_API inline ::std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor,at::Tensor> miopen_rnn(const at::Tensor & input, at::TensorList weight, int64_t weight_stride0, const at::Tensor & hx, const c10::optional<at::Tensor> & cx, int64_t mode, int64_t hidden_size, int64_t num_layers, bool batch_first, double dropout, bool train, bool bidirectional, at::IntArrayRef batch_sizes, const c10::optional<at::Tensor> & dropout_state) {
    return at::_ops::miopen_rnn::call(input, weight, weight_stride0, hx, cx, mode, hidden_size, num_layers, batch_first, dropout, train, bidirectional, batch_sizes, dropout_state);
}

}
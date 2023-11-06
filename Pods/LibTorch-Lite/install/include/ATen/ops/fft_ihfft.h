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



#include <ATen/ops/fft_ihfft_ops.h>

namespace at {


// aten::fft_ihfft(Tensor self, int? n=None, int dim=-1, str? norm=None) -> Tensor
TORCH_API inline at::Tensor fft_ihfft(const at::Tensor & self, c10::optional<int64_t> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt) {
    return at::_ops::fft_ihfft::call(self, n, dim, norm);
}

// aten::fft_ihfft.out(Tensor self, int? n=None, int dim=-1, str? norm=None, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & fft_ihfft_out(at::Tensor & out, const at::Tensor & self, c10::optional<int64_t> n=c10::nullopt, int64_t dim=-1, c10::optional<c10::string_view> norm=c10::nullopt) {
    return at::_ops::fft_ihfft_out::call(self, n, dim, norm, out);
}

// aten::fft_ihfft.out(Tensor self, int? n=None, int dim=-1, str? norm=None, *, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & fft_ihfft_outf(const at::Tensor & self, c10::optional<int64_t> n, int64_t dim, c10::optional<c10::string_view> norm, at::Tensor & out) {
    return at::_ops::fft_ihfft_out::call(self, n, dim, norm, out);
}

}

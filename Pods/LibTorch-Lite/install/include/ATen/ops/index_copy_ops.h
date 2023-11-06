#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API index_copy_out {
  using schema = at::Tensor & (const at::Tensor &, int64_t, const at::Tensor &, const at::Tensor &, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::index_copy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "index_copy.out(Tensor self, int dim, Tensor index, Tensor source, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, at::Tensor & out);
};

struct TORCH_API index_copy_ {
  using schema = at::Tensor & (at::Tensor &, int64_t, const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::index_copy_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "index_copy_(Tensor(a!) self, int dim, Tensor index, Tensor source) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source);
};

struct TORCH_API index_copy {
  using schema = at::Tensor (const at::Tensor &, int64_t, const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::index_copy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "index_copy(Tensor self, int dim, Tensor index, Tensor source) -> Tensor")
  static at::Tensor call(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source);
};

struct TORCH_API index_copy__dimname {
  using schema = at::Tensor & (at::Tensor &, at::Dimname, const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::index_copy_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "index_copy_.dimname(Tensor(a!) self, Dimname dim, Tensor index, Tensor source) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source);
};

struct TORCH_API index_copy_dimname {
  using schema = at::Tensor (const at::Tensor &, at::Dimname, const at::Tensor &, const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::index_copy")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "index_copy.dimname(Tensor self, Dimname dim, Tensor index, Tensor source) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source);
};

}} // namespace at::_ops

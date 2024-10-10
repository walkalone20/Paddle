// Copyright (c) 2024 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <vector>

#include "paddle/phi/core/distributed/auto_parallel/dist_meta_tensor.h"
#include "paddle/phi/core/distributed/type_defs.h"
#include "paddle/phi/infermeta/spmd_rules/reduction.h"

namespace phi {
namespace distributed {

SpmdInfo PNormInferSpmd(const DistMetaTensor& x,
                        float porder,
                        int axis,
                        float epsilon,
                        bool keepdims,
                        bool asvector);

SpmdInfo PNormInferSpmdReverse(const DistMetaTensor& x,
                               const DistMetaTensor& out,
                               float porder,
                               int axis,
                               float epsilon,
                               bool keepdims,
                               bool asvector);

SpmdInfo PNormGradInferSpmd(const DistMetaTensor& x,
                            const DistMetaTensor& out,
                            const DistMetaTensor& out_grad,
                            float porder,
                            int axis,
                            float epsilon,
                            bool keepdims,
                            bool asvector);
}  // namespace distributed
}  // namespace phi

/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

namespace ABI44_0_0facebook {
namespace ABI44_0_0React {

inline bool floatEquality(float a, float b, float epsilon = 0.005f) {
  return (std::isnan(a) && std::isnan(b)) ||
      (!std::isnan(a) && !std::isnan(b) && fabs(a - b) < epsilon);
}

} // namespace ABI44_0_0React
} // namespace ABI44_0_0facebook

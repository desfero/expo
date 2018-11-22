/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ABI31_0_0fabric/ABI31_0_0components/text/BaseTextShadowNode.h>
#include <ABI31_0_0fabric/ABI31_0_0components/text/TextProps.h>
#include <ABI31_0_0fabric/ABI31_0_0core/ConcreteShadowNode.h>

namespace facebook {
namespace ReactABI31_0_0 {

extern const char TextComponentName[];

class TextShadowNode:
  public ConcreteShadowNode<
    TextComponentName,
    TextProps
  >,
  public BaseTextShadowNode {

public:

  using ConcreteShadowNode::ConcreteShadowNode;
};

} // namespace ReactABI31_0_0
} // namespace facebook

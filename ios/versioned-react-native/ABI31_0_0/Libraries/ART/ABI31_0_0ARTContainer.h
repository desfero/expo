/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>

@protocol ABI31_0_0ARTContainer <NSObject>

// This is used as a hook for child to mark it's parent as dirty.
// This bubbles up to the root which gets marked as dirty.
- (void)invalidate;

@end

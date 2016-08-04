//
//  NSArray+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - generating

/// Note: contains assert inner error
- (nullable NSString *)bs_JSONString;

/// Note: contains assert inner error
+ (nullable instancetype)bs_arrayWithAuxiliaryExecutablePlist:(NSString *)plist;

- (instancetype)bs_arrayByReversing;

- (instancetype)bs_arrayByShuffling;

@end

@interface NSMutableArray (BSCategory)

- (void)bs_reverse;

- (void)bs_shuffle;

NS_ASSUME_NONNULL_END

@end
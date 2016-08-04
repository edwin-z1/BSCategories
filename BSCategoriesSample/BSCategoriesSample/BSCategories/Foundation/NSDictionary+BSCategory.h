//
//  NSDictionary+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - generating

- (nullable NSString *)bs_JSONString;

/// Note: contains assert inner error
+ (nullable instancetype)bs_dictionaryWithAuxiliaryExecutablePlist:(NSString *)plist;

NS_ASSUME_NONNULL_END

@end

//
//  NSNumber+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSNumber (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - handing format

- (NSString *)bs_stringWithNumberFormat:(NSString *)numberFormat;

- (NSString *)bs_moneyWithNumberFormat:(NSString *)numberFormat;

NS_ASSUME_NONNULL_END

@end

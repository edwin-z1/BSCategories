//
//  NSDate+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - handing format

- (NSString *)bs_stringWithDateFormat:(NSString *)dateFormat;

NS_ASSUME_NONNULL_END

@end

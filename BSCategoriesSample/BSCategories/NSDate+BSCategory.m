//
//  NSDate+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSDate+BSCategory.h"

@implementation NSDate (BSCategory)

#pragma mark - handing format

- (NSString *)bs_stringWithDateFormat:(NSString *)dateFormat {
    static NSDateFormatter *formatter;
    static dispatch_once_t once_token;
    dispatch_once(&once_token, ^{
        formatter = [NSDateFormatter new];
        formatter.locale = [NSLocale currentLocale];
    });
    formatter.dateFormat = dateFormat;
    return [formatter stringFromDate:self];
}

@end

//
//  NSNumber+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSNumber+BSCategory.h"
#import "NSString+BSCategory.h"

@implementation NSNumber (BSCategory)

#pragma mark - handing format

- (NSString *)bs_stringWithNumberFormat:(NSString *)numberFormat {
    static NSNumberFormatter *formatter;
    static dispatch_once_t once_token;
    dispatch_once(&once_token, ^{
        formatter = [NSNumberFormatter new];
        formatter.locale = [NSLocale currentLocale];
    });
    formatter.positiveFormat = numberFormat;
    return [formatter stringFromNumber:self];
}

- (NSString *)bs_moneyWithNumberFormat:(NSString *)numberFormat {
    static NSNumberFormatter *formatter;
    static dispatch_once_t once_token;
    dispatch_once(&once_token, ^{
        formatter = [NSNumberFormatter new];
        formatter.locale = [NSLocale currentLocale];
        formatter.numberStyle = NSNumberFormatterCurrencyStyle;
    });
    formatter.positiveFormat = numberFormat;
    NSString *money = [formatter stringFromNumber:self];
    return [money bs_stringByTrimmingCharactersInString:@"CN"];
}

@end

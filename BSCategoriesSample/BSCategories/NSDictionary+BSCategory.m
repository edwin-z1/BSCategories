//
//  NSDictionary+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSDictionary+BSCategory.h"
#import "NSData+BSCategory.h"

@implementation NSDictionary (BSCategory)

#pragma mark - generating

- (nullable NSString *)bs_JSONString {
    if (![NSJSONSerialization isValidJSONObject:self]) {
        return nil;
    }
    NSError *error = nil;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self options:NSJSONWritingPrettyPrinted error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return nil;
    }
    NSString *json = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    return json;
}

+ (nullable instancetype)bs_dictionaryWithAuxiliaryExecutablePlist:(NSString *)plist {
    
    NSData *plistData = [NSData bs_dataNamed:plist];
    NSError *error = nil;
    NSDictionary *dictionary = (NSDictionary *)[NSPropertyListSerialization propertyListWithData:plistData options:NSPropertyListMutableContainersAndLeaves format:NULL error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return nil;
    }
    return dictionary;
}

@end

//
//  NSArray+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/25.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSArray+BSCategory.h"
#import "NSData+BSCategory.h"

@implementation NSArray (BSCategory)

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

+ (nullable instancetype)bs_arrayWithAuxiliaryExecutablePlist:(NSString *)plist {
    
    NSData *plistData = [NSData bs_dataNamed:plist];
    NSError *error = nil;
    NSArray *array = (NSArray *)[NSPropertyListSerialization propertyListWithData:plistData options:NSPropertyListMutableContainersAndLeaves format:NULL error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return nil;
    }
    return array;
}

- (instancetype)bs_arrayByReversing {
    NSMutableArray *mutableSelf = self.mutableCopy;
    [mutableSelf bs_reverse];
    return mutableSelf.copy;
}

- (instancetype)bs_arrayByShuffling {
    NSMutableArray *mutableSelf = self.mutableCopy;
    [mutableSelf bs_shuffle];
    return mutableSelf.copy;
}

@end

@implementation NSMutableArray (BSCategory)

- (void)bs_reverse {
    NSUInteger count = self.count;
    int mid = floor(count / 2.0);
    for (NSUInteger i = 0; i < mid; i++) {
        [self exchangeObjectAtIndex:i withObjectAtIndex:(count - (i + 1))];
    }
}

- (void)bs_shuffle {
    for (NSUInteger i = self.count; i > 1; i--) {
        [self exchangeObjectAtIndex:(i - 1)
                  withObjectAtIndex:arc4random_uniform((u_int32_t)i)];
    }
}

@end

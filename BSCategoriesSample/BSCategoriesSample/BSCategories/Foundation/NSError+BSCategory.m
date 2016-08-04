//
//  NSError+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSError+BSCategory.h"

@implementation NSError (BSCategory)

- (BOOL)bs_printErrorDescriptionWithSelector:(nullable SEL)selector {
    
    NSString *selectorName = @"";
    if (selector) {
        selectorName = NSStringFromSelector(selector);
    }
    NSLog(@"\n||| %@ ||| from selector: --- %@ ---\n", self.localizedDescription, selectorName);
    return YES;
}

@end

//
//  UIResponder+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIResponder+BSCategory.h"

@implementation UIResponder (BSCategory)

- (void)bs_routerWithEventName:(NSString *)eventName userInfo:(nullable NSDictionary *)userInfo {
    
    [self.nextResponder bs_routerWithEventName:eventName userInfo:userInfo];
    
}

@end

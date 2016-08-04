//
//  UIViewController+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/22.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIViewController+BSCategory.h"

@implementation UIViewController (BSCategory)

+ (__kindof instancetype)bs_instantiateFromStoryboardName:(NSString *)storyboardName {
    return [[UIStoryboard storyboardWithName:storyboardName bundle:nil] instantiateViewControllerWithIdentifier:NSStringFromClass(self)];
}

@end

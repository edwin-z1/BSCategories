//
//  UIViewController+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/22.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (BSCategory)

#pragma mark - instantiation

+ (__kindof instancetype)bs_instantiateFromStoryboardName:(NSString *)storyboardName;

@end

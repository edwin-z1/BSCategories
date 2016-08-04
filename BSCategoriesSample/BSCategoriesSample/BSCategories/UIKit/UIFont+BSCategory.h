//
//  UIFont+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (BSCategory)

/// System user preferred font
+ (instancetype)bs_preferredHeadline;
+ (instancetype)bs_preferredSubheadline;
+ (instancetype)bs_preferredBoddy;
+ (instancetype)bs_preferredFootnote;
+ (instancetype)bs_preferredCaption1;
+ (instancetype)bs_preferredCaption2;

@end

//
//  UIView+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - instantiation

+ (instancetype)bs_instantiateFromNibFile;

#pragma mark - frame

@property (assign, nonatomic) CGPoint bs_origin;

@property (assign, nonatomic) CGSize bs_size;

@property (assign, nonatomic) CGFloat bs_x;

@property (assign, nonatomic) CGFloat bs_y;

@property (assign, nonatomic) CGFloat bs_centerX;

@property (assign, nonatomic) CGFloat bs_centerY;

@property (assign, nonatomic) CGFloat bs_width;

@property (assign, nonatomic) CGFloat bs_height;

- (CGFloat)bs_minX;

- (CGFloat)bs_midX;

- (CGFloat)bs_maxX;

- (CGFloat)bs_minY;

- (CGFloat)bs_midY;

- (CGFloat)bs_maxY;

#pragma mark - handling view controllers

- (nullable UIViewController *)bs_viewController;
- (nullable UINavigationController *)bs_navigationController;

#pragma mark - shadow

- (void)bs_setLayerShadowColor:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius opacity:(CGFloat)opacity;

NS_ASSUME_NONNULL_END

@end

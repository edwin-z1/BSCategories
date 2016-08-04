//
//  UIColor+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (BSCategory)

NS_ASSUME_NONNULL_BEGIN

+ (instancetype)bs_randomColor;
+ (instancetype)bs_randomColorfulColor;

+ (instancetype)bs_colorWithR:(CGFloat)red g:(CGFloat)green b:(CGFloat)blue;
+ (instancetype)bs_colorWithR:(CGFloat)red g:(CGFloat)green b:(CGFloat)blue a:(CGFloat)alpha;

/// Valid format: #RGB #RGBA #RRGGBB #RRGGBBAA 0xRGB ...
+ (instancetype)bs_colorWithHexString:(NSString *)hexStr;

/// Creates and returns a color object by add new color.
- (instancetype)bs_colorByAddingColor:(UIColor *)add blendMode:(CGBlendMode)blendMode;

NS_ASSUME_NONNULL_END

@end

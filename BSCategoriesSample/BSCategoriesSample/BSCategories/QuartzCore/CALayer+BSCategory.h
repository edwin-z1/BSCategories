//
//  CALayer+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformRotation;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformRotationX;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformRotationY;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformRotationZ;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformScale;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformScaleX;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformScaleY;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformScaleZ;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformTranslationX;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformTranslationY;
FOUNDATION_EXPORT NSString * const kCALayerKeyPathTransformTranslationZ;

@interface CALayer (BSCategory)

@property (assign, nonatomic) CGPoint bs_origin;
@property (assign, nonatomic) CGSize bs_size;

@property (assign, nonatomic) CGFloat bs_x;
@property (assign, nonatomic) CGFloat bs_y;
@property (assign, nonatomic) CGFloat bs_positionX;
@property (assign, nonatomic) CGFloat bs_positionY;

@property (assign, nonatomic) CGFloat bs_width;
@property (assign, nonatomic) CGFloat bs_height;

- (CGFloat)bs_minX;

- (CGFloat)bs_midX;

- (CGFloat)bs_maxX;

- (CGFloat)bs_minY;

- (CGFloat)bs_midY;

- (CGFloat)bs_maxY;

@end

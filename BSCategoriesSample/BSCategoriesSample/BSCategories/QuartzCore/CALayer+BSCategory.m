//
//  CALayer+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "CALayer+BSCategory.h"

NSString * const kCALayerKeyPathTransformRotation = @"tranform.rotation";
NSString * const kCALayerKeyPathTransformRotationX = @"tranform.rotation.x";
NSString * const kCALayerKeyPathTransformRotationY = @"tranform.rotation.y";
NSString * const kCALayerKeyPathTransformRotationZ = @"tranform.rotation.z";
NSString * const kCALayerKeyPathTransformScale = @"tranform.scale";
NSString * const kCALayerKeyPathTransformScaleX = @"tranform.scale.x";
NSString * const kCALayerKeyPathTransformScaleY = @"tranform.scale.y";
NSString * const kCALayerKeyPathTransformScaleZ = @"tranform.scale.z";
NSString * const kCALayerKeyPathTransformTranslationX = @"tranform.translation.x";
NSString * const kCALayerKeyPathTransformTranslationY = @"tranform.translation.y";
NSString * const kCALayerKeyPathTransformTranslationZ = @"tranform.translation.z";

@implementation CALayer (BSCategory)

- (void)setBs_origin:(CGPoint)bs_origin {
    self.frame = (CGRect){ .origin = bs_origin, .size = self.bs_size } ;
}

- (CGPoint)bs_origin {
    return self.frame.origin;
}

- (void)setBs_size:(CGSize)bs_size {
    self.frame = (CGRect){ .origin = self.bs_origin, .size = bs_size };
}

- (CGSize)bs_size {
    return self.frame.size;
}

- (void)setBs_x:(CGFloat)bs_x {
    self.bs_origin = (CGPoint){ .x = bs_x, .y = self.bs_y };
}

- (CGFloat)bs_x {
    return self.bs_origin.x;
}

- (void)setBs_y:(CGFloat)bs_y {
    self.bs_origin = (CGPoint){ .x = self.bs_x, .y = bs_y };
}

- (CGFloat)bs_y {
    return self.bs_origin.y;
};

- (void)setBs_positionX:(CGFloat)bs_positionX {
    self.position = (CGPoint){ .x = bs_positionX, .y = self.bs_positionY };
}

- (CGFloat)bs_positionX {
    return self.position.x;
}

- (void)setBs_positionY:(CGFloat)bs_positionY {
    self.position = (CGPoint){ .x = self.bs_positionX, .y = bs_positionY };
}

- (CGFloat)bs_positionY {
    return self.position.y;
}

- (void)setBs_width:(CGFloat)bs_width {
    self.bs_size = (CGSize){ .width = bs_width, .height = self.bs_height };
}

- (CGFloat)bs_width {
    return self.bs_size.width;
}

- (void)setBs_height:(CGFloat)bs_height {
    self.bs_size = (CGSize){ .width = self.bs_width, .height = bs_height };
}

- (CGFloat)bs_height {
    return self.bs_size.height;
}

- (CGFloat)bs_minX {
    return CGRectGetMinX(self.frame);
}

- (CGFloat)bs_midX {
    return CGRectGetMidX(self.frame);
}

- (CGFloat)bs_maxX {
    return CGRectGetMaxX(self.frame);
}

- (CGFloat)bs_minY {
    return CGRectGetMinY(self.frame);
}

- (CGFloat)bs_midY {
    return CGRectGetMidY(self.frame);
}

- (CGFloat)bs_maxY {
    return CGRectGetMaxY(self.frame);
}

@end

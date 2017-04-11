//
//  UIView+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIView+BSCategory.h"
#import "NSObject+BSCategory.h"

@implementation UIView (BSCategory)

#pragma mark - instantiation

+ (instancetype)bs_instantiateFromNibFile {
    UINib *nib = [UINib nibWithNibName:NSStringFromClass(self) bundle:[NSBundle mainBundle]];
    return (UIView *)[nib instantiateWithOwner:self options:nil].firstObject;
}

#pragma mark - frame

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

- (void)setBs_centerX:(CGFloat)bs_centerX {
    self.center = (CGPoint){ .x = bs_centerX, .y = self.bs_centerY };
}

- (CGFloat)bs_centerX {
    return self.center.x;
}

- (void)setBs_centerY:(CGFloat)bs_centerY {
    self.center = (CGPoint){ .x = self.bs_centerX, .y = bs_centerY };
}

- (CGFloat)bs_centerY {
    return self.center.y;
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

#pragma mark - handling view controllers

- (nullable UIViewController *)bs_viewController {
    for (UIView *view = self; 1 ; view = view.superview) {
        if ([self checkIfViewIsNil:view selector:_cmd]) {
            return nil;
        }
        UIResponder *nextResponder = [view nextResponder];
        if ([nextResponder isKindOfClass:[UIViewController class]]) {
            return (UIViewController *)nextResponder;
        }
    }
    return nil;
}

- (nullable UINavigationController *)bs_navigationController {
    for (UIView *view = self; 1 ; view = view.superview) {
        if ([self checkIfViewIsNil:view selector:_cmd]) {
            return nil;
        }
        UIResponder *nextResponder = [view nextResponder];
        if ([nextResponder isKindOfClass:[UINavigationController class]]) {
            return (UINavigationController *)nextResponder;
        }
    }
    return nil;
}

- (BOOL)checkIfViewIsNil:(UIView *)view selector:(SEL)selector {
    if (!view) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(selector)] reason:@"Can't find superview, please check the view's hierarchy" userInfo: nil];
        @throw exception;
        return YES;
    } else {
        return NO;
    }
}

#pragma mark - shadow

- (void)bs_setLayerShadowColor:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius opacity:(CGFloat)opacity {
    self.layer.shadowColor = color.CGColor;
    self.layer.shadowOffset = offset;
    self.layer.shadowRadius = radius;
    self.layer.shadowOpacity = opacity;
    self.layer.shouldRasterize = YES;
    self.layer.rasterizationScale = [UIScreen mainScreen].scale;
}

#pragma mark - line layer

- (void)bs_addLineOnEdge:(BSViewEdge)edge isDotted:(BOOL)isDotted {
    
    [self bs_addLineOnEdge:edge lineWidth:1 insets:UIEdgeInsetsZero isDotted:isDotted];
}

- (void)bs_addLineOnEdge:(BSViewEdge)edge lineWidth:(CGFloat)lineWidth insets:(UIEdgeInsets)insets isDotted:(BOOL)isDotted {
    
    CGPoint startPoint = CGPointZero;
    CGPoint endPoint = CGPointZero;
    
    CGPoint leftTop = CGPointMake(0 + insets.left, insets.top);
    CGPoint rightTop = CGPointMake(self.bs_width - self.bs_origin.x - insets.right, insets.top);
    CGPoint leftBottom = CGPointMake(0 + insets.left, self.bs_height - self.bs_origin.y - insets.bottom);
    CGPoint rightBottom = CGPointMake(self.bs_width - self.bs_origin.x - insets.right, self.bs_height - self.bs_origin.y - insets.bottom);
    
    NSString *key = nil;
    if (edge == BSViewEdgeTop) {
        startPoint = leftTop;
        endPoint = rightTop;
        key = @"top";
        
    } else if (edge == BSViewEdgeLeft) {
        startPoint = leftTop;
        endPoint = leftBottom;
        key = @"left";
        
    } else if (edge == BSViewEdgeRight) {
        startPoint = rightTop;
        endPoint = rightBottom;
        key = @"right";
        
    } else if (edge == BSViewEdgeBottom){
        startPoint = leftBottom;
        endPoint = rightBottom;
        key = @"bottom";
        
    }
    
    CAShapeLayer *layer = [self edgeToLayerDictionary][key];
    if (layer) {
        [layer removeFromSuperlayer];
    }
    
    UIBezierPath *path = [UIBezierPath bezierPath];
    [path moveToPoint:startPoint];
    [path addLineToPoint:endPoint];
    
    CAShapeLayer *shapeLayer = [CAShapeLayer layer];
    shapeLayer.path = path.CGPath;
    shapeLayer.lineWidth = lineWidth;
    shapeLayer.strokeColor = [UIColor lightGrayColor].CGColor;
    shapeLayer.fillColor = [UIColor lightGrayColor].CGColor;
    if (isDotted) {
        shapeLayer.lineDashPattern = @[@2];
    }
    [self.layer addSublayer:shapeLayer];
    
    [self edgeToLayerDictionary][key] = shapeLayer;
}

- (NSMutableDictionary *)edgeToLayerDictionary {
    NSMutableDictionary *dictionary = [self bs_getAssociatedValueForKey:_cmd];
    if (!dictionary) {
        dictionary = [NSMutableDictionary new];
        [self bs_setAssociateRetainValue:dictionary forKey:_cmd];
    }
    return dictionary;
}
@end

//
//  UIImage+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/22.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - generating

+ (instancetype)bs_imageWithSize:(CGSize)size drawBlock:(void (^)(CGContextRef context))drawBlock;

/// Returns single emoji, such as @"😄". It creates a square image from apple emoji, image's scale is equal to current screen's scale. The original emoji image in `AppleColorEmoji` font is in size 160*160 px.
+ (instancetype)bs_imageWithEmoji:(NSString *)emoji width:(CGFloat)width;

/// Returns image with color, size is 1x1.
+ (instancetype)bs_imageWithColor:(UIColor *)color;
+ (instancetype)bs_imageWithColor:(UIColor *)color size:(CGSize)size;

/// Returns an image from a PDF data, size: pass CGSizeZero will use the original size.
+ (nullable instancetype)bs_imageWithPDFData:(NSData *)data;
+ (nullable instancetype)bs_imageWithPDFData:(NSData *)data size:(CGSize)size;

/// Returns an image from a PDF file, size: pass CGSizeZero will use the original size.
+ (nullable instancetype)bs_imageWithPDFPath:(NSString *)path;
+ (nullable instancetype)bs_imageWithPDFPath:(NSString *)path size:(CGSize)size;

/// Returns A new image created from GIF, you can access the images via property '.images'.
+ (instancetype)bs_imageWithGIFData:(NSData *)data;
+ (instancetype)bs_imageGIFNamed:(NSString *)name;

#pragma mark - apply affects

- (instancetype)bs_imageByApplyingAlpha:(CGFloat)alpha;

- (instancetype)bs_imageByApplyingLightEffect;

- (instancetype)bs_imageByApplyingExtraLightEffect;

- (instancetype)bs_imageByApplyingDarkEffect;

- (instancetype)bs_imageByApplyingTintEffectWithColor:(UIColor *)tintColor;

- (instancetype)bs_imageByApplyingBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(nullable UIImage *)maskImage;

#pragma mark - modify

- (instancetype)bs_imageByOrientationUp;

- (instancetype)bs_imageByResizeToSize:(CGSize)size;

/// Returns a new image which is cropped from this image's inner rect
- (instancetype)bs_imageByCropToRect:(CGRect)rect;

/// Returns a new image which is edge inset from this image.
- (instancetype)bs_imageByInsets:(UIEdgeInsets)insets;

/// Returns a new image with a given corner size.
- (instancetype)bs_imageByCornerRadius:(CGFloat)radius;

- (instancetype)bs_imageByCornerRadius:(CGFloat)radius borderWidth:(CGFloat)borderWidth borderColor:(nullable UIColor *)borderColor;

/**
 Rounds a new image with a given corner size.
 
 @param radius       The radius of each corner oval. Values larger than half the
 rectangle's width or height are clamped appropriately to
 half the width or height.
 
 @param corners      A bitmask value that identifies the corners that you want
 rounded. You can use this parameter to round only a subset
 of the corners of the rectangle.
 
 @param borderWidth  The inset border line width. Values larger than half the rectangle's
 width or height are clamped appropriately to half the width
 or height.
 
 @param borderColor  The border stroke color. nil means clear color.
 
 @param borderLineJoin The border line join.
 */
- (instancetype)bs_imageByCornerRadius:(CGFloat)radius corners:(UIRectCorner)corners borderWidth:(CGFloat)borderWidth borderColor:(nullable UIColor *)borderColor borderLineJoin:(CGLineJoin)borderLineJoin;

/// Returns a new rotated image (relative to the center). ⟲
- (nullable instancetype)bs_imageByRotateDegree:(CGFloat)degree;

/// Returns a new image rotated counterclockwise by a quarter‑turn (90°). ⤺ The width and height will be exchanged.
- (nullable instancetype)bs_imageByRotateLeft90;

/// Returns a new image rotated clockwise by a quarter‑turn (90°). ⤼ The width and height will be exchanged.
- (nullable instancetype)bs_imageByRotateRight90;

/// Returns a new image rotated 180° . ↻
- (nullable instancetype)bs_imageByRotate180;

/// Returns a vertically flipped image. ⥯
- (nullable instancetype)bs_imageByFlipVertical;

/// Returns a horizontally flipped image. ⇋
- (nullable instancetype)bs_imageByFlipHorizontal;

NS_ASSUME_NONNULL_END

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {
    float  leadOutOpacity;
}

+ (id)doubleOpacityStopWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3;
+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3;
- (BOOL)isDoubleStop;
- (float)leadInOpacity;
- (float)leadOutOpacity;

@end

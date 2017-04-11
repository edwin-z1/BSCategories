/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXTransformedViewContentZoomAnimationContext : NSObject <PXZoomAnimationContext> {
    <PXZoomAnimationContext> * _context;
    float  _fromAlpha;
    PXNonuniformTransform * _fromTransform;
    float  _toAlpha;
    PXNonuniformTransform * _toTransform;
    UIView * _transformedView;
}

@property (nonatomic, readonly) double animationDuration;
@property (nonatomic, readonly) int animationType;
@property (nonatomic, readonly) <PXZoomAnimationContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float fromAlpha;
@property (nonatomic, readonly) PXRegionOfInterest *fromRegionOfInterest;
@property (nonatomic, readonly) PXNonuniformTransform *fromTransform;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL keepsSourceRegionOfInterestContent;
@property (getter=isMatchingRegionsOfInterest, nonatomic, readonly) BOOL matchingRegionsOfInterest;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float toAlpha;
@property (nonatomic, readonly) PXRegionOfInterest *toRegionOfInterest;
@property (nonatomic, readonly) PXNonuniformTransform *toTransform;
@property (nonatomic, readonly) UIView *transformedView;

- (void).cxx_destruct;
- (double)animationDuration;
- (int)animationType;
- (id)context;
- (void)didEndAnimation:(int)arg1;
- (float)fromAlpha;
- (id)fromRegionOfInterest;
- (id)fromTransform;
- (id)initWithTransformedView:(id)arg1 context:(id)arg2;
- (BOOL)isMatchingRegionsOfInterest;
- (BOOL)keepsSourceRegionOfInterestContent;
- (void)registerCleanupHandler:(id /* block */)arg1;
- (float)toAlpha;
- (id)toRegionOfInterest;
- (id)toTransform;
- (id)transformedView;
- (int)willBeginAnimation;

@end

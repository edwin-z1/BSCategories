/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetsSceneSettings : PXSettings {
    BOOL  _enableImagePreheating;
    double  _transitionDuration;
}

@property (nonatomic) BOOL enableImagePreheating;
@property (nonatomic) double transitionDuration;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (BOOL)enableImagePreheating;
- (void)setDefaultValues;
- (void)setEnableImagePreheating:(BOOL)arg1;
- (void)setTransitionDuration:(double)arg1;
- (double)transitionDuration;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUISettingModule : CCUIButtonModule {
    BOOL  _needsStateUpdateOnNextPresentation;
}

@property (nonatomic) BOOL needsStateUpdateOnNextPresentation;
@property (nonatomic, readonly) UIColor *selectedStateColor;

+ (id)statusOffString;
+ (id)statusOnString;

- (BOOL)_isStateOverridden;
- (BOOL)needsStateUpdateOnNextPresentation;
- (id)selectedStateColor;
- (void)setNeedsStateUpdateOnNextPresentation:(BOOL)arg1;
- (id)statusUpdate;
- (id)unavailableText;
- (void)warmup;

@end

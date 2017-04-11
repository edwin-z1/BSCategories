/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCContentSizeLayoutConstraint : NSLayoutConstraint {
    float  _additionalConstant;
    BOOL  _autoUpdatingConstantShrinks;
    id  _autoitem;
    id /* block */  _constantLoadingBlock;
    float  _defaultConstant;
    BOOL  _isConstantUpdatingConstraint;
    id  _preferredContentSizeDidChangeObserver;
    NSString * _textStyle;
    float  _textStyleDefaultBodyLeading;
}

@property (nonatomic) float additionalConstant;
@property (nonatomic) BOOL autoUpdatingConstantShrinks;
@property (nonatomic, copy) id /* block */ constantLoadingBlock;
@property (nonatomic) float defaultConstant;
@property (nonatomic, copy) NSString *textStyle;

+ (id)_constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(int)arg3 relatedBy:(int)arg4 toItem:(id)arg5 attribute:(int)arg6 multiplier:(float)arg7 defaultConstant:(float)arg8 additionalConstant:(float)arg9 initialize:(BOOL)arg10;
+ (float)_maximumWidthOfStrings:(id)arg1 withFont:(id)arg2;
+ (id)baselineConstraintForAutoitem:(id)arg1 relation:(int)arg2 toItem:(id)arg3 attribute:(int)arg4 defaultConstant:(float)arg5;
+ (id)baselineConstraintForView:(id)arg1 attribute:(int)arg2 relation:(int)arg3 toAutoitem:(id)arg4 defaultConstant:(float)arg5;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(float)arg2 constantLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 additionalConstant:(float)arg2 constantWidthSizingStringsLoadingBlock:(id /* block */)arg3;
+ (id)constraintForAutoitem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 defaultConstant:(float)arg7;
+ (id)constraintForAutoitem:(id)arg1 constrainedItem:(id)arg2 attribute:(int)arg3 relatedBy:(int)arg4 toItem:(id)arg5 attribute:(int)arg6 multiplier:(float)arg7 defaultConstant:(float)arg8;

- (void).cxx_destruct;
- (float)_defaultConstantByFixingUpDefaultConstant:(float)arg1;
- (void)_forceUpdatePreferredContentSize;
- (void)_reloadPreferredContentSize:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (float)additionalConstant;
- (BOOL)autoUpdatingConstantShrinks;
- (id /* block */)constantLoadingBlock;
- (void)dealloc;
- (float)defaultConstant;
- (void)setAdditionalConstant:(float)arg1;
- (void)setAutoUpdatingConstantShrinks:(BOOL)arg1;
- (void)setConstantLoadingBlock:(id /* block */)arg1;
- (void)setDefaultConstant:(float)arg1;
- (void)setTextStyle:(id)arg1;
- (id)textStyle;

@end

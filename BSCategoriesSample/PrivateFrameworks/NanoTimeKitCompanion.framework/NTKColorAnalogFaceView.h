/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKColorAnalogFaceView : NTKSpriteKitAnalogFaceView {
    UIColor * _complicationForegroundColor;
    UIColor * _complicationPlatterColor;
}

@property (nonatomic, readonly) NTKColorAnalogScene *analogScene;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (float)_backgroundAlphaForEditMode:(int)arg1;
- (id)_colorComplicationViewForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_configureReusableTimeView:(id)arg1;
- (float)_edgeGapForState:(int)arg1;
- (void)_enumerateColorComplicationSlotsWithBlock:(id /* block */)arg1;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (float)_handAlphaForEditMode:(int)arg1;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (float)_keylinePaddingForState:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (float)_lisaGapForState:(int)arg1;
- (void)_loadLayoutRules;
- (void)_loadScene;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_monogramKeylinePadding;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_monogramReferenceFrameForState:(int)arg1;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (BOOL)_supportsUnadornedSnapshot;

@end

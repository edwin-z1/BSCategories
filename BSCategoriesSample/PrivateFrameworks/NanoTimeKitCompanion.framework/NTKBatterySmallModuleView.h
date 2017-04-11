/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBatterySmallModuleView : NTKComplicationModuleView <NTKBatteryComplicationDisplay> {
    BOOL  _didDrawOnce;
    float  _level;
    NTKColoringLabel * _levelLabel;
    int  _state;
    NTKColoringImageView * _stateRing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureContentSubviews;
- (void)_enumerateForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id /* block */)arg1;
- (void)_layoutContentView;
- (id)_ringForLevel:(float)arg1;
- (void)_updateLevelLabelColor;
- (void)applyFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
- (void)applyTransitionFraction:(float)arg1 fromFaceColor:(unsigned int)arg2 toFaceColor:(unsigned int)arg3 units:(unsigned int)arg4 brightenedUnits:(unsigned int)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIsXL:(BOOL)arg1;
- (void)setLevel:(float)arg1;
- (void)setState:(int)arg1;

@end

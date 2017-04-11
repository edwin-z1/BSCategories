/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTitleSubtitleUILabel : UIView <PXChangeObserver> {
    CALayer * __contentLayer;
    PXTitleSubtitleCALayerPromise * __layerPromise;
    BOOL  _diagnosticsEnabled;
    BOOL  _needsUpdateLayerPromise;
    BOOL  _rendersTextAsynchronously;
    PXTitleSubtitleLabelSpec * _spec;
    NSString * _subtitleText;
    NSString * _titleText;
    int  _typesettingMode;
}

@property (setter=_setContentLayer:, nonatomic, retain) CALayer *_contentLayer;
@property (setter=_setLayerPromise:, nonatomic, retain) PXTitleSubtitleCALayerPromise *_layerPromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL diagnosticsEnabled;
@property (nonatomic, readonly) NSArray *diagnosticsRenderedLines;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) float lastBaseline;
@property (nonatomic) BOOL rendersTextAsynchronously;
@property (nonatomic, retain) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic, copy) NSString *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) int typesettingMode;

- (void).cxx_destruct;
- (void)_PXTitleSubtitleUILabelCommonInitialization;
- (id)_contentLayer;
- (void)_handleChangeFromBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateLayerPromise;
- (id)_layerPromise;
- (void)_setContentLayer:(id)arg1;
- (void)_setLayerPromise:(id)arg1;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (BOOL)diagnosticsEnabled;
- (id)diagnosticsRenderedLines;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lastBaseline;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned int)arg2 context:(void*)arg3;
- (BOOL)rendersTextAsynchronously;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRendersTextAsynchronously:(BOOL)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTypesettingMode:(int)arg1;
- (id)spec;
- (id)subtitleText;
- (id)titleText;
- (int)typesettingMode;

@end

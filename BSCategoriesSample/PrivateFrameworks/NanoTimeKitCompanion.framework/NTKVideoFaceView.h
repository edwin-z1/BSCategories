/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoFaceView : NTKAVListingFaceBaseView {
    NTKUtilityComplicationFactory * _complicationFactory;
    unsigned int  _isComplicationColorApplied;
    unsigned int  _tapToPlayGestureEnabled;
    unsigned int  _theme;
    NTKComplicationDisplayWrapperView * _touchWrapper;
    unsigned int  _useDefaultListing;
}

+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_addSubviewInOrder:(id)arg1;
- (void)_applyComplicationContentSpecificAttributesWithColor:(id)arg1 animated:(BOOL)arg2;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_cleanupAfterEditing;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)_configureComplicationFactory;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (id)_defaultListing;
- (void)_handleTapToPlayVideoGesture;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (id)_nextListing;
- (id)_onDeckPosterImageView;
- (id)_overlayColor;
- (void)_performPreloadVideoTask;
- (id)_posterImageView;
- (id)_posterImageViewWithTheme:(unsigned int)arg1;
- (void)_prepareForEditing;
- (float)_rightSideMarginForDigitalTimeHeroPosition;
- (void)_selectDefaultListing;
- (BOOL)_shouldDelayBeforePlayingNextVideo;
- (float)_timeTravelYAdjustment;
- (void)_unloadSnapshotContentViews;
- (void)_updatePaused;
- (int)_utilitySlotForSlot:(id)arg1;
- (id)_viewForEditOption:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;

@end

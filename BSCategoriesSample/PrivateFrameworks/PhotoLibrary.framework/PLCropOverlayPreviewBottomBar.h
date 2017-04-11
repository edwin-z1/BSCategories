/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCropOverlayPreviewBottomBar : UIView {
    int  _backgroundStyle;
    UIButton * _cancelButton;
    UIButton * _doneButton;
    UIButton * _playbackButton;
}

@property (nonatomic) int backgroundStyle;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *doneButton;
@property (nonatomic, readonly) UIButton *playbackButton;

- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
- (void)_updateBackgroundStyle;
- (int)backgroundStyle;
- (id)cancelButton;
- (void)dealloc;
- (id)doneButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)playbackButton;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;

@end

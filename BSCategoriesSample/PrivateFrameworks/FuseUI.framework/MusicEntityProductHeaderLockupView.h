/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityProductHeaderLockupView : MusicEntityAbstractLockupView <UITextViewDelegate> {
    MPUTextButton * _addSongsButton;
    UIView * _artworkEditingOverlayView;
    _UIBackdropView * _backdropView;
    UIView * _bottomHairlineView;
    float  _cachedTallestButtonHeight;
    UIButton * _contextualActionsButton;
    <MusicEntityProductHeaderLockupViewDelegate> * _delegate;
    float  _downloadProgress;
    MusicDownloadProgressButton * _downloadProgressButton;
    int  _downloadProgressType;
    MPUTextButton * _editButton;
    NSString * _editableText;
    UIView * _editableTextBottomHairlineView;
    UILabel * _editableTextHeaderLabel;
    UITextView * _editableTextPlaceholderView;
    UITextView * _editableTextView;
    BOOL  _editableTitleShouldBecomeFirstResponder;
    BOOL  _editing;
    UIButton * _likeDislikeButton;
    int  _likeDislikeButtonState;
    MusicEntityViewProductHeaderLockupContentDescriptor * _productHeaderLockupContentDescriptor;
    UIActivityIndicatorView * _refreshActivityIndicatorView;
    UIButton * _refreshButton;
    UIButton * _shareButton;
    BOOL  _shouldIgnoreArtworkImageChanges;
    BOOL  _shouldUpdateTallestButtonHeightCache;
}

@property (nonatomic, readonly) UIButton *contextualActionsButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityProductHeaderLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float downloadProgress;
@property (nonatomic, readonly) MusicDownloadProgressButton *downloadProgressButton;
@property (nonatomic) int downloadProgressType;
@property (nonatomic, readonly) NSString *editableText;
@property (nonatomic) BOOL editableTitleShouldBecomeFirstResponder;
@property (getter=isEditing, nonatomic) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic) int likeDislikeButtonState;
@property (nonatomic, retain) MusicEntityViewProductHeaderLockupContentDescriptor *productHeaderLockupContentDescriptor;
@property (nonatomic, readonly) UIButton *shareButton;
@property (readonly) Class superclass;

+ (float)_buttonHeight;
+ (float)maximumRowHeightForHorizontalLockupContentDescriptor:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_addSongsButtonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forActionControl:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forActionView:(id)arg2;
- (void)_artworkViewImageDidChange;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
- (void)_downloadProgressButtonTapped:(id)arg1;
- (void)_editButtonTapped:(id)arg1;
- (id)_genericActionButtonWithImage:(id)arg1;
- (id)_genericActionButtonWithImageName:(id)arg1;
- (id)_genericActionButtonWithText:(id)arg1;
- (void)_layoutButtonsWithAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 insetContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(BOOL)arg1 editingViewsAlpha:(float)arg2;
- (void)_layoutSubviewsForCompactHorizontalSizeClass;
- (void)_layoutSubviewsForRegularHorizontalSizeClass;
- (void)_likeDislikeButtonTapped:(id)arg1;
- (id)_newTextView;
- (void)_refreshButtonTapped:(id)arg1;
- (id)_refreshImage;
- (void)_setFrameOfActionButton:(id)arg1 basedOnAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 customHeight:(float)arg3 maximumHeightForCentering:(float)arg4;
- (void)_setFrameOfActionControl:(id)arg1 basedOnAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 maximumHeightForCentering:(float)arg3 buttonHeightForCentering:(float)arg4 buttonBaselineOffset:(float)arg5;
- (void)_shareButtonTapped:(id)arg1;
- (BOOL)_shouldEnableArtworkViewUserInteraction;
- (BOOL)_shouldShowPlayButton;
- (void)_updateColorsOfGenericActionControl:(id)arg1;
- (void)_updateColorsOfGenericActionView:(id)arg1;
- (void)_updateEditableTextPlaceholderViewVisibility;
- (void)_updateLikeDislikeButtonStateAppearance;
- (void)_updateTextView:(id)arg1 forTextDescriptor:(id)arg2 textColor:(id)arg3;
- (id)contextualActionsButton;
- (void)dealloc;
- (id)delegate;
- (float)downloadProgress;
- (id)downloadProgressButton;
- (int)downloadProgressType;
- (id)editableText;
- (BOOL)editableTitleShouldBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEditing;
- (void)layoutSubviews;
- (int)likeDislikeButtonState;
- (void)music_inheritedLayoutInsetsDidChange;
- (id)productHeaderLockupContentDescriptor;
- (void)setDelegate:(id)arg1;
- (void)setDownloadProgress:(float)arg1;
- (void)setDownloadProgressType:(int)arg1;
- (void)setEditableTitleShouldBecomeFirstResponder:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEntityValueProvider:(id)arg1;
- (void)setLikeDislikeButtonState:(int)arg1;
- (void)setProductHeaderLockupContentDescriptor:(id)arg1;
- (id)shareButton;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

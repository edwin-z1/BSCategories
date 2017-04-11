/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleFavoritingShelfView : UIVisualEffectView {
    UILabel * _bodyLabel;
    NSLayoutConstraint * _bodyToTitleConstraint;
    UIView * _bottomSeparator;
    UIImageView * _dropzone;
    UIImage * _dropzoneImageHighlight;
    UIImage * _dropzoneImageNormal;
    BOOL  _highlightedForDrop;
    NSMutableArray * _standardConstraints;
    UIView * _textContainerView;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *bodyLabel;
@property (nonatomic, retain) NSLayoutConstraint *bodyToTitleConstraint;
@property (nonatomic, retain) UIView *bottomSeparator;
@property (nonatomic, retain) UIImageView *dropzone;
@property (nonatomic, retain) UIImage *dropzoneImageHighlight;
@property (nonatomic, retain) UIImage *dropzoneImageNormal;
@property (nonatomic) BOOL highlightedForDrop;
@property (nonatomic, retain) NSMutableArray *standardConstraints;
@property (nonatomic, retain) UIView *textContainerView;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (float)_dynamicBaselineForTextStyle:(id)arg1 originalValue:(float)arg2;
- (float)_dynamicBodyToTitleBaselineValue;
- (void)animateViewToDropZone:(id)arg1 completion:(id /* block */)arg2;
- (id)bodyLabel;
- (id)bodyToTitleConstraint;
- (id)bottomSeparator;
- (void)commonInit;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)dealloc;
- (id)dropzone;
- (id)dropzoneImageHighlight;
- (id)dropzoneImageNormal;
- (BOOL)highlightedForDrop;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })preferredContentSizeForWidth:(float)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setBodyToTitleConstraint:(id)arg1;
- (void)setBottomSeparator:(id)arg1;
- (void)setDropzone:(id)arg1;
- (void)setDropzoneImageHighlight:(id)arg1;
- (void)setDropzoneImageNormal:(id)arg1;
- (void)setHighlightedForDrop:(BOOL)arg1;
- (void)setStandardConstraints:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)standardConstraints;
- (id)textContainerView;
- (id)titleLabel;

@end

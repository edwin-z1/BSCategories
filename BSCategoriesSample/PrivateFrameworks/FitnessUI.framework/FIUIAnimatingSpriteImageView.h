/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIAnimatingSpriteImageView : UIView {
    CALayer * _imageLayer;
    int  _spriteColumnCount;
    int  _spriteFrameCount;
    UIImage * _spriteImage;
}

@property (nonatomic) int spriteColumnCount;
@property (nonatomic) int spriteFrameCount;
@property (nonatomic, retain) UIImage *spriteImage;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_spriteFrameSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAnimating;
- (void)layoutSubviews;
- (void)setSpriteColumnCount:(int)arg1;
- (void)setSpriteFrameCount:(int)arg1;
- (void)setSpriteImage:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)spriteColumnCount;
- (int)spriteFrameCount;
- (id)spriteImage;
- (void)startAnimating;
- (void)stopAnimating;

@end

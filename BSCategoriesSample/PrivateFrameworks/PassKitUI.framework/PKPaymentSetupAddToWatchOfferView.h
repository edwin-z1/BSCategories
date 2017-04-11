/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAddToWatchOfferView : UIView {
    int  _context;
    UILabel * _instructionLabel;
    UIButton * _openAppButton;
    UIActivityIndicatorView * _openAppSpinner;
    PKPaymentPass * _pass;
    UIImageView * _passImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIImageView * _watchImageView;
}

@property (nonatomic, readonly) int context;
@property (nonatomic, readonly, retain) UILabel *instructionLabel;
@property (nonatomic, readonly, retain) UIButton *openAppButton;
@property (nonatomic, readonly, retain) UIActivityIndicatorView *openAppSpinner;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;
@property (nonatomic, readonly, retain) UIImageView *passImageView;
@property (nonatomic, readonly, retain) UILabel *subtitleLabel;
@property (nonatomic, readonly, retain) UILabel *titleLabel;
@property (nonatomic, readonly, retain) UIImageView *watchImageView;

- (void).cxx_destruct;
- (float)_instructionFontSize;
- (float)_instructionYCoordinate;
- (struct CGSize { float x1; float x2; })_passImageSize;
- (float)_passImageYCoordinate;
- (id)_watchImage;
- (id)_watchImageName;
- (int)context;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 context:(int)arg2;
- (id)instructionLabel;
- (void)layoutSubviews;
- (id)openAppButton;
- (id)openAppSpinner;
- (id)pass;
- (id)passImageView;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)watchImageView;

@end

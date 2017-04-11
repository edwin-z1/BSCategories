/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUITodayCirclePulseView : UIView {
    HKUITodayCirclePulseBackground * _background;
    UIView * _backgroundContainer;
    float  _circleDiameter;
    CALayer * _dayLabel;
}

@property (nonatomic) float circleDiameter;

- (void).cxx_destruct;
- (void)_layoutSubviews;
- (float)circleDiameter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)pulse:(id /* block */)arg1;
- (void)setCircleDiameter:(float)arg1;
- (void)setDayLabelContent:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface UpNextWidget.SmallEventView : UIView {
    void calendarColor;
    void colorBarView;
    void label;
    void startDate;
    void title;
}

@property (nonatomic, retain) UIColor *calendarColor;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, copy) NSString *title;

- (id /* block */).cxx_destruct;
- (id)calendarColor;
- (float)firstBaselineOffsetFromTop;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)lastBaselineOffsetFromBottom;
- (void)layoutSubviews;
- (void)setCalendarColor:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)startDate;
- (id)title;

@end

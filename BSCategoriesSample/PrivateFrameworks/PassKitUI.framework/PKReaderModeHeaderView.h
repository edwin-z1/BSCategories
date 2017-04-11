/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKReaderModeHeaderView : PKTableHeaderView {
    int  _context;
    NSString * _displayName;
    unsigned int  _state;
}

@property (nonatomic) unsigned int state;

- (void).cxx_destruct;
- (void)_configureForCurrentState;
- (id)initWithState:(unsigned int)arg1 context:(int)arg2 productDisplayName:(id)arg3;
- (void)layoutSubviews;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;

@end

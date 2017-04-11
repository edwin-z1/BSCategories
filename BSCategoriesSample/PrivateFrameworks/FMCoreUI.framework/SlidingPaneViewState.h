/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface SlidingPaneViewState : NSObject {
    unsigned int  _edge;
    NSLayoutConstraint * _paneHorizontalPositionConstraint;
    NSLayoutConstraint * _paneVerticalPositionConstraint;
    ISPaneFrameView * _paneView;
    UIViewController * _paneViewController;
    BOOL  _shouldNotifyOfPaneSizeChanges;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) unsigned int edge;
@property (nonatomic, retain) NSLayoutConstraint *paneHorizontalPositionConstraint;
@property (nonatomic, retain) NSLayoutConstraint *paneVerticalPositionConstraint;
@property (nonatomic, retain) ISPaneFrameView *paneView;
@property (nonatomic, retain) UIViewController *paneViewController;
@property (nonatomic) BOOL shouldNotifyOfPaneSizeChanges;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)edge;
- (id)initWithViewController:(id)arg1 edge:(unsigned int)arg2;
- (id)paneHorizontalPositionConstraint;
- (id)paneVerticalPositionConstraint;
- (id)paneView;
- (id)paneViewController;
- (void)setEdge:(unsigned int)arg1;
- (void)setPaneHorizontalPositionConstraint:(id)arg1;
- (void)setPaneVerticalPositionConstraint:(id)arg1;
- (void)setPaneView:(id)arg1;
- (void)setPaneViewController:(id)arg1;
- (void)setShouldNotifyOfPaneSizeChanges:(BOOL)arg1;
- (void)setVisualEffectView:(id)arg1;
- (BOOL)shouldNotifyOfPaneSizeChanges;
- (id)visualEffectView;

@end

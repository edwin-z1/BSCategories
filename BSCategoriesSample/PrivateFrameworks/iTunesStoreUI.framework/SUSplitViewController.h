/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUSplitViewController : SUViewController {
    NSURL * _displayedURL;
    UIViewController * _firstViewController;
    NSString * _mainTitle;
    SUGradient * _placeholderGradient;
    SUPlaceholderViewController * _placeholderViewController;
    UIViewController * _secondViewController;
    SUShadow * _splitShadow;
    SUSplitView * _splitView;
    SUStructuredPage * _structuredPage;
    BOOL  _usesSharedPlaceholder;
    BOOL  _viewIsReady;
}

@property (nonatomic, retain) NSURL *displayedURL;
@property (nonatomic, retain) UIViewController *firstViewController;
@property (nonatomic) int layoutType;
@property (nonatomic, retain) NSString *mainTitle;
@property (nonatomic) float minimumPaneSize;
@property (nonatomic, retain) UIViewController *secondViewController;
@property (nonatomic) float splitPosition;
@property (nonatomic, copy) SUShadow *splitShadow;
@property (nonatomic) BOOL usesSharedPlaceholder;
@property (getter=isVertical, nonatomic) BOOL vertical;
@property (nonatomic) BOOL viewIsReady;

+ (BOOL)isValidSplitPositionValue:(id)arg1;
+ (BOOL)isValidSplitTypeString:(id)arg1;

- (void)_loadingDidChangeNotification:(id)arg1;
- (void)_navigationItemDidChangeNotification:(id)arg1;
- (id)_newGradientWithValue:(id)arg1;
- (id)_newViewControllerFromDictionary:(id)arg1;
- (void)_reloadLoadingState;
- (void)_reloadTitle;
- (void)_reloadView;
- (void)_reloadViewController:(id)arg1 fromDictionary:(id)arg2;
- (void)_reloadWithStorePageDictionary:(id)arg1;
- (void)_setPlaceholderVisible:(BOOL)arg1;
- (void)_setStructuredPage:(id)arg1;
- (void)_setViewController:(id*)arg1 toValue:(id)arg2;
- (id)_splitView;
- (void)addChildViewController:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(int)arg1;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)displayedURL;
- (id)firstViewController;
- (id)init;
- (BOOL)isSkLoaded;
- (BOOL)isVertical;
- (int)layoutType;
- (void)loadView;
- (id)mainTitle;
- (float)minimumPaneSize;
- (id)newRotationController;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)secondViewController;
- (void)setDisplayedURL:(id)arg1;
- (void)setFirstViewController:(id)arg1;
- (void)setLayoutType:(int)arg1;
- (void)setMainTitle:(id)arg1;
- (void)setMinimumPaneSize:(float)arg1;
- (void)setSecondViewController:(id)arg1;
- (void)setSkLoading:(BOOL)arg1;
- (void)setSplitPosition:(float)arg1;
- (void)setSplitPositionAndLayoutTypeFromValue:(id)arg1;
- (void)setSplitShadow:(id)arg1;
- (void)setSplitTypeString:(id)arg1;
- (void)setUsesSharedPlaceholder:(BOOL)arg1;
- (void)setVertical:(BOOL)arg1;
- (void)setViewIsReady:(BOOL)arg1;
- (BOOL)shouldExcludeFromNavigationHistory;
- (float)splitPosition;
- (id)splitPositionString;
- (id)splitShadow;
- (id)splitTypeString;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (id)storePageProtocol;
- (BOOL)usesSharedPlaceholder;
- (BOOL)viewIsReady;

@end

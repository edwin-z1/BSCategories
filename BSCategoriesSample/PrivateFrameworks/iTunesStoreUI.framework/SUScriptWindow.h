/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptWindow : SUScriptObject {
    SUScriptViewController * _backViewController;
    BOOL  _canSwipeToDismiss;
    SUScriptWindowContext * _context;
    SUScriptViewController * _frontViewController;
    id  _height;
    SUScriptCanvasFunction * _maskFunction;
    id  _shadowOpacity;
    id  _shadowRadius;
    SUScriptFunction * _shouldDismissFunction;
    id  _width;
}

@property (retain) SUScriptViewController *backViewController;
@property (copy) id canSwipeToDismiss;
@property (readonly) SUScriptWindowContext *context;
@property (retain) SUScriptViewController *frontViewController;
@property (retain) NSNumber *height;
@property (retain) WebScriptObject *maskFunction;
@property (retain) NSNumber *shadowOpacity;
@property (retain) NSNumber *shadowRadius;
@property (retain) WebScriptObject *shouldDismissFunction;
@property (readonly) NSString *style;
@property (retain) NSNumber *width;
@property (readonly) SUScriptViewController *windowParentViewController;

+ (void)dismissWindowsWithOptions:(id)arg1;
+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_backgroundViewController:(BOOL)arg1;
- (id)_className;
- (id)_copySafeTransitionOptionsFromOptions:(id)arg1;
- (id)_newOverlayTransitionWithOptions:(id)arg1;
- (void)_overlayDidDismissNotification:(id)arg1;
- (void)_overlayDidFlipNotification:(id)arg1;
- (void)_overlayDidShowNotification:(id)arg1;
- (struct CGSize { float x1; float x2; })_overlaySize;
- (id)_overlayViewController:(BOOL)arg1;
- (void)_registerForOverlayNotifications;
- (id)attributeKeys;
- (id)backViewController;
- (id)canSwipeToDismiss;
- (id)context;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (void)flip:(id)arg1;
- (id)frontViewController;
- (id)height;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)maskFunction;
- (id)scriptAttributeKeys;
- (void)setBackViewController:(id)arg1;
- (void)setCanSwipeToDismiss:(id)arg1;
- (void)setFrontViewController:(id)arg1;
- (void)setHeight:(id)arg1;
- (void)setMaskFunction:(id)arg1;
- (void)setShadowOpacity:(id)arg1;
- (void)setShadowRadius:(id)arg1;
- (void)setShouldDismissFunction:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)shadowOpacity;
- (id)shadowRadius;
- (id)shouldDismissFunction;
- (void)show:(id)arg1;
- (id)style;
- (id)width;
- (id)windowParentViewController;

@end

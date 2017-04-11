/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptCalloutView : SUScriptObject {
    BOOL  _isVisible;
    NSString * _subtitle;
    NSString * _title;
}

@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)_menuDidHideNotification:(id)arg1;
- (void)_reloadUntructedString;
- (void)_resetCalloutBar;
- (void)_setupCalloutBar;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (id)scriptAttributeKeys;
- (void)setSubtitle:(id)arg1;
- (void)setTargetX:(float)arg1 y:(float)arg2 width:(float)arg3 height:(float)arg4;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (id)subtitle;
- (id)title;

@end

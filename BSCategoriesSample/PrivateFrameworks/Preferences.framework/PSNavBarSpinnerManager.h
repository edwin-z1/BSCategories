/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSNavBarSpinnerManager : NSObject {
    NSMutableDictionary * _navigationItems;
    NSMutableDictionary * _savedLeftItems;
    NSMutableDictionary * _savedRightItems;
}

+ (id)sharedSpinnerManager;

- (void).cxx_destruct;
- (id)init;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2;
- (void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 hideBackButton:(BOOL)arg3;
- (void)stopAnimatingForIdentifier:(id)arg1;

@end

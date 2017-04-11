/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIGeneralController : PSListController <CRCarPlayPreferencesDelegate, DevicePINControllerDelegate, PSUIHomeButtonCustomizeControllerDelegate> {
    CRCarPlayPreferences * _carPreferences;
    PSUITVOutManager * _tvOutManager;
    PSSpecifier * _tvOutSpecifier;
    NSTimer * _usageTimer;
}

@property (nonatomic, retain) CRCarPlayPreferences *carPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)EDGEEnabled:(id)arg1;
- (BOOL)_hasCarPlayContent;
- (void)_setUseSwitchForOrientationLockWithSpecifier:(id)arg1;
- (id)carPreferences;
- (void)dealloc;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)enableEdge:(id)arg1;
- (void)handleCarPlayAllowedDidChange;
- (void)handleTVOutChange;
- (void)handleURL:(id)arg1;
- (void)homeButtonCustomizeControllerDidFinish:(id)arg1;
- (id)init;
- (void)loadHomeButtonSettings:(id)arg1;
- (id)parentalControlsEnabled:(id)arg1;
- (void)profileNotification:(id)arg1;
- (void)setCarPreferences:(id)arg1;
- (BOOL)shouldDeferPushForSpecifierID:(id)arg1;
- (id)specifiers;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;

@end

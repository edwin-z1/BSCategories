/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAboutViewController : UIViewController <UIScrollViewDelegate> {
    PKPaymentSetupAboutView * _aboutView;
    NSString * _bodyText;
    void * _navigationController;
    BOOL  _navigationControllerHidesShadow;
    BOOL  _requiresPrivacy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_setupNavigationItemWithTitle:(id)arg1 isPresented:(BOOL)arg2;
- (void)_showPrivacyView:(id)arg1;
- (void)dealloc;
- (id)initForPrivacyPresented:(BOOL)arg1;
- (id)initWithAboutText:(id)arg1 isPresented:(BOOL)arg2;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;

@end

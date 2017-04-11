/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentVerificationMethodsViewController : PKPaymentSetupFieldsViewController {
    PKPaymentSetupVerificationMethodTableController * _methodTableController;
    NSString * _stepIdentifier;
    PKPaymentVerificationController * _verificationController;
}

@property (nonatomic, copy) NSString *stepIdentifier;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_configure;
- (void)_loadVerificationOptions;
- (id)_newVerificationRequest;
- (id)_requestErrorAlertController:(id)arg1;
- (id)_setupAssistantVerificationAlert;
- (void)cancel:(id)arg1;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithVerificationController:(id)arg1;
- (id)initWithVerificationController:(id)arg1 fieldsModel:(id)arg2;
- (id)initWithVerificationController:(id)arg1 verificationChannels:(id)arg2;
- (void)setStepIdentifier:(id)arg1;
- (id)stepIdentifier;
- (void)terminateFlow;
- (id)verificationController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleFieldIdentifiers;

@end

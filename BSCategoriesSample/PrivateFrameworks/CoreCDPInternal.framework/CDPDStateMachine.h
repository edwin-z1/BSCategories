/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDStateMachine : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    BOOL  _attemptedCDPEnable;
    CDPDCircleController * _circleController;
    CDPContext * _context;
    CDPDPCSController * _pcsController;
    CDPDSecureBackupController * _secureBackupController;
    <CDPStateUIProviderInternal> * _uiProvider;
}

@property (nonatomic) BOOL attemptedCDPEnable;
@property (nonatomic, retain) CDPDCircleController *circleController;
@property (nonatomic, retain) CDPContext *context;
@property (nonatomic, retain) CDPDPCSController *pcsController;
@property (nonatomic, retain) CDPDSecureBackupController *secureBackupController;
@property (nonatomic, retain) <CDPStateUIProviderInternal> *uiProvider;

- (void).cxx_destruct;
- (void)_attemptBackupRecoveryByPromptingForRemoteSecretWithLocalSecret:(id)arg1 localSecretType:(unsigned int)arg2 useCachedSecret:(BOOL)arg3 hasPeersForRemoteApproval:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)_attemptBackupRecoveryWithLocalSecret:(id)arg1 type:(unsigned int)arg2 useCachedSecret:(BOOL)arg3 hasPeersForRemoteApproval:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)_attemptCDPEnable:(id /* block */)arg1;
- (void)_authenticatedRepairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_authenticatedShouldPerformRepairWithCompletion:(id /* block */)arg1;
- (void)_confirmCDPEligibilityWithCompletion:(id /* block */)arg1;
- (void)_disableCloudDataProtectionWithCompletion:(id /* block */)arg1;
- (void)_enableKVSForAccount:(id)arg1 store:(id)arg2 completion:(id /* block */)arg3;
- (void)_enableSecureBackupWithCompletion:(id /* block */)arg1;
- (void)_enrollOrDisableCDPAfterEnabledStateVerified:(id /* block */)arg1;
- (void)_handleBackupRecoveryWithPeersForRemoteApproval:(BOOL)arg1 circleStatus:(int)arg2 completion:(id /* block */)arg3;
- (void)_handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)_handleJoinCircleEvent:(id /* block */)arg1;
- (void)_handlePreflightError:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleiCDPStatusCheckError:(id)arg1 completion:(id /* block */)arg2;
- (void)_performInteractivelyAuthenticatedRepair:(id /* block */)arg1;
- (id)_predicateForRecordUpgradeCheck;
- (void)_preflightAccountStateWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_recoverSecureBackupWithHasPeersForRemoteApproval:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_recoverSecureBackupWithRemotePeers:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_refreshWithContext:(id)arg1;
- (void)_requestPostLockoutAccountReset:(id /* block */)arg1;
- (void)_resetAccountCDPStateWithCompletion:(id /* block */)arg1;
- (BOOL)attemptedCDPEnable;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id /* block */)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)dealloc;
- (void)getStingrayDisableEligibilityWithCompletion:(id /* block */)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 uiProvider:(id)arg2;
- (id)pcsController;
- (void)preflightStingrayDisableWithCompletion:(id /* block */)arg1;
- (void)promotForLocalSecretWithCompletion:(id /* block */)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (id)secureBackupController;
- (void)setAttemptedCDPEnable:(BOOL)arg1;
- (void)setCircleController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setPcsController:(id)arg1;
- (void)setSecureBackupController:(id)arg1;
- (void)setUiProvider:(id)arg1;
- (BOOL)shouldAllowCDPEnrollment;
- (void)shouldPerformRepairWithCompletion:(id /* block */)arg1;
- (BOOL)synchronizeCircleViewsForSecureBackupController:(id)arg1;
- (id)uiProvider;

@end

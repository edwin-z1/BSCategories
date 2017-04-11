/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSSystemServiceClient : SBSServiceFacilityClient {
    BOOL  _buttonEventServiceIsWaitingForServerMessages;
}

+ (id)serviceFacilityIdentifier;

- (void)_handleButtonEventConsumePressMessage:(id)arg1;
- (void)acquireAssertionOfType:(int)arg1 forReason:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fetchHapticTypeForButtonKind:(int)arg1 completion:(id /* block */)arg2;
- (void)fetchUnlockCredentialSetWithCompletion:(id /* block */)arg1;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (void)setButtonEventServiceIsWaitingForServerMessages:(BOOL)arg1;
- (void)setEventMask:(unsigned int)arg1 forButtonKind:(int)arg2 priority:(int)arg3;
- (void)setHapticType:(int)arg1 forButtonKind:(int)arg2;

@end

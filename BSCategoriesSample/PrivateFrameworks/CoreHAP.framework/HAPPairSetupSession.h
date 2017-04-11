/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairSetupSession : NSObject <HMFTimerDelegate> {
    HMFTimer * _backoffTimer;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HAPPairSetupSessionDelegate> * _delegate;
    int  _options;
    struct PairingSessionPrivate { } * _pairingSession;
    int  _role;
    unsigned int  _state;
}

@property (nonatomic, retain) HMFTimer *backoffTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPPairSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int options;
@property (nonatomic, readonly) struct PairingSessionPrivate { }*pairingSession;
@property (nonatomic, readonly) int role;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;

+ (void)initialize;
+ (BOOL)isValidSetupCode:(id)arg1;

- (void).cxx_destruct;
- (void)_handleBackoffExpiration;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1;
- (void)_handlePairSetupExchangeComplete;
- (BOOL)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_invalidate;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (id)backoffTimer;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (BOOL)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id*)arg2;
- (void)handleSetupCodeRequest;
- (id)init;
- (id)initWithRole:(int)arg1 options:(int)arg2 delegate:(id)arg3;
- (int)options;
- (struct PairingSessionPrivate { }*)pairingSession;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (int)role;
- (void)setBackoffTimer:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (id)shortDescription;
- (void)start;
- (unsigned int)state;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end

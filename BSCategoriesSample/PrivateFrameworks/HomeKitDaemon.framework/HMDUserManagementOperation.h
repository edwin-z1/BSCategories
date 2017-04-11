/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDUserManagementOperation : NSObject <HMFTimerDelegate, NSSecureCoding> {
    HMDAccessory * _accessory;
    BOOL  _backingOff;
    double  _backoffInterval;
    HMFTimer * _backoffTimer;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDUserManagementOperationDelegate> * _delegate;
    NSMutableArray * _dependencies;
    BOOL  _executing;
    NSDate * _expirationDate;
    HMFTimer * _expirationTimer;
    NSUUID * _identifier;
    BOOL  _lastOperationFailed;
    HMDUserManagementOperationManager * _operationManager;
    unsigned int  _operationType;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    unsigned int  _state;
    HMDUser * _user;
}

@property (nonatomic, retain) HMDAccessory *accessory;
@property (nonatomic, readonly) HMDAccessoryInvitation *accessoryInvitation;
@property (nonatomic, readonly) NSDictionary *accessoryInvitationInformation;
@property (getter=isBackingOff, nonatomic) BOOL backingOff;
@property (nonatomic, readonly) double backoffInterval;
@property (nonatomic, retain) HMFTimer *backoffTimer;
@property (getter=isCancelled, nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMDUserManagementOperationDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic) BOOL executing;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) HMFTimer *expirationTimer;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (getter=isFinished, nonatomic, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) BOOL lastOperationFailed;
@property (nonatomic, retain) HMDUserManagementOperationManager *operationManager;
@property (nonatomic, readonly) unsigned int operationType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReady, nonatomic, readonly) BOOL ready;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMDUser *user;

+ (id)addUserManagementOperationForUser:(id)arg1 accessory:(id)arg2;
+ (id)removeUserManagementOperationForUser:(id)arg1 accessory:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)_accessoryInvitationState;
- (void)_addPairingToAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_endBackoffTimer;
- (BOOL)_isFinished;
- (void)_removePairingFromAccessory:(id)arg1 identifier:(id)arg2 publicKey:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_setupExpirationTimer;
- (void)_startBackoffTimer;
- (id)accessory;
- (id)accessoryInvitation;
- (id)accessoryInvitationInformation;
- (void)addDependency:(id)arg1;
- (double)backoffInterval;
- (id)backoffTimer;
- (void)cancel;
- (id)clientQueue;
- (id)debugDescription;
- (id)delegate;
- (id)dependencies;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)expirationDate;
- (id)expirationTimer;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationType:(unsigned int)arg1 user:(id)arg2 accessory:(id)arg3 expiration:(id)arg4;
- (BOOL)isBackingOff;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (BOOL)isExpired;
- (BOOL)isFinished;
- (BOOL)isReady;
- (BOOL)isValid;
- (BOOL)lastOperationFailed;
- (BOOL)mergeWithOperation:(id)arg1;
- (double)nextBackoffInterval;
- (id)operationManager;
- (unsigned int)operationType;
- (id)propertyQueue;
- (void)setAccessory:(id)arg1;
- (void)setBackingOff:(BOOL)arg1;
- (void)setBackoffTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setLastOperationFailed:(BOOL)arg1;
- (void)setOperationManager:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (id)shortDescription;
- (unsigned int)state;
- (void)timerDidFire:(id)arg1;
- (id)user;

@end

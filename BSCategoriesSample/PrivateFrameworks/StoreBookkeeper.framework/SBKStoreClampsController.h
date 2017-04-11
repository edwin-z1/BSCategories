/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKStoreClampsController : NSObject <NSCoding> {
    double  _accountIdentifierCheckTimestamp;
    double  _authenticationNeededTimestamp;
    double  _backOffUntil;
    double  _networkingBlockedUntil;
    double  _nextUserCancelBackOffInterval;
    NSData * _pendingUserDefaultArchivedData;
    NSObject<OS_dispatch_queue> * _queue;
    NSDictionary * _transactionClamps;
    double  _userAcceptedSyncTimestamp;
    double  _userCancelledSignInBackOffUntil;
}

@property double accountIdentifierCheckTimestamp;
@property double authenticationNeededTimestamp;
@property double backOffUntil;
@property double networkingBlockedUntil;
@property double nextUserCancelBackOffInterval;
@property (retain) NSData *pendingUserDefaultArchivedData;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSDictionary *transactionClamps;
@property double userAcceptedSyncTimestamp;
@property double userCancelledSignInBackOffUntil;

+ (id)sharedClampsController;

- (void).cxx_destruct;
- (BOOL)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnType:(id)arg1 error:(id*)arg2;
- (BOOL)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id*)arg2;
- (id)_keyForTransaction:(id)arg1;
- (double)_rightNow;
- (void)accessTransactionClampsWithBlock:(id /* block */)arg1;
- (double)accountIdentifierCheckTimestamp;
- (double)authenticationNeededTimestamp;
- (void)backOffForTimeInterval:(double)arg1;
- (double)backOffUntil;
- (BOOL)canScheduleTransaction:(id)arg1 error:(id*)arg2;
- (void)clearAccountIdentifierCheckTimestamp;
- (void)clearAuthenticationRequest;
- (void)clearBackOff;
- (void)clearNetworkingBlocked;
- (void)clearTimestampForTransaction:(id)arg1;
- (void)clearUserAcceptedSyncTimestamp;
- (void)clearUserCancelledSignIn;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id*)arg2;
- (BOOL)hasUserRecentlyAcceptedSync;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNetworkingBlocked;
- (double)networkingBlockedUntil;
- (double)nextUserCancelBackOffInterval;
- (id)pendingUserDefaultArchivedData;
- (id)queue;
- (void)reset;
- (void)saveToUserDefaults;
- (void)setAccountIdentifierCheckTimestamp;
- (void)setAccountIdentifierCheckTimestamp:(double)arg1;
- (void)setAuthenticationNeededTimestamp:(double)arg1;
- (void)setAuthenticationRequest;
- (void)setBackOffUntil:(double)arg1;
- (void)setNetworkingBlocked;
- (void)setNetworkingBlockedUntil:(double)arg1;
- (void)setNextUserCancelBackOffInterval:(double)arg1;
- (void)setPendingUserDefaultArchivedData:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimestampForTransaction:(id)arg1;
- (void)setTransactionClamps:(id)arg1;
- (void)setUserAcceptedSyncTimestamp;
- (void)setUserAcceptedSyncTimestamp:(double)arg1;
- (void)setUserCancelledSignIn;
- (void)setUserCancelledSignInBackOffUntil:(double)arg1;
- (id)transactionClamps;
- (double)userAcceptedSyncTimestamp;
- (double)userCancelledSignInBackOffUntil;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDExtendedDatabaseTransaction : NSObject {
    NSObject<OS_dispatch_source> * _automaticRollbackTimer;
    NSObject<OS_dispatch_semaphore> * _completionSemaphore;
    double  _continuationTimeout;
    NSObject<OS_dispatch_queue> * _dataQueue;
    <HDHealthDatabase> * _healthDatabase;
    NSError * _lastError;
    id /* block */  _pendingWork;
    BOOL  _pendingWorkDidSucceed;
    NSObject<OS_dispatch_semaphore> * _pendingWorkSemaphore;
    unsigned int  _status;
    NSUUID * _transactionIdentifier;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    double  _transactionTimeout;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *automaticRollbackTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (nonatomic, readonly) double continuationTimeout;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dataQueue;
@property (nonatomic, readonly) <HDHealthDatabase> *healthDatabase;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, copy) id /* block */ pendingWork;
@property (nonatomic) BOOL pendingWorkDidSucceed;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore;
@property (nonatomic) unsigned int status;
@property (nonatomic, readonly, copy) NSUUID *transactionIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic, readonly) double transactionTimeout;

- (void).cxx_destruct;
- (void)_enableAutomaticRollbackTimer;
- (void)_transaction_runTransactionWithOptions:(unsigned int)arg1;
- (id)automaticRollbackTimer;
- (BOOL)commitWithError:(id*)arg1;
- (id)completionSemaphore;
- (double)continuationTimeout;
- (id)dataQueue;
- (void)dealloc;
- (id)healthDatabase;
- (id)initInDatabase:(id)arg1 options:(unsigned int)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id*)arg5;
- (id)lastError;
- (id /* block */)pendingWork;
- (BOOL)pendingWorkDidSucceed;
- (id)pendingWorkSemaphore;
- (BOOL)performInTransactionWithError:(id*)arg1 block:(id /* block */)arg2;
- (BOOL)rollbackWithError:(id*)arg1;
- (void)setAutomaticRollbackTimer:(id)arg1;
- (void)setCompletionSemaphore:(id)arg1;
- (void)setDataQueue:(id)arg1;
- (void)setLastError:(id)arg1;
- (void)setPendingWork:(id /* block */)arg1;
- (void)setPendingWorkDidSucceed:(BOOL)arg1;
- (void)setPendingWorkSemaphore:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTransactionQueue:(id)arg1;
- (unsigned int)status;
- (id)transactionIdentifier;
- (id)transactionQueue;
- (double)transactionTimeout;

@end

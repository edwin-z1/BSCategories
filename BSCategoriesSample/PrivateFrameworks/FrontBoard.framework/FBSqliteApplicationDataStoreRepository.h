/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSqliteApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _dbQueue;
    unsigned int  _dbQueue_batchDepth;
    FBSqliteDatabaseConnection * _dbQueue_dbConnection;
    int  _dbQueue_firstUnlockToken;
    <FBApplicationDataStoreRepositoryDelegate> * _delegate;
    NSURL * _storeURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FBApplicationDataStoreRepositoryReadingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_generateParameterizedQuery:(id)arg1 forKeyList:(id)arg2 outBindings:(id*)arg3;
+ (id)_objectForResultRow:(id)arg1 index:(unsigned int)arg2;
+ (BOOL)_objectRequiresSerialization:(id)arg1;

- (id)_dbQueue_applicationIdentifiersWithState;
- (BOOL)_dbQueue_containsKey:(id)arg1 forApplication:(id)arg2;
- (void)_dbQueue_createTables;
- (BOOL)_dbQueue_databaseIntegrityCheck;
- (int)_dbQueue_databaseVersion;
- (BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(id /* block */)arg3;
- (BOOL)_dbQueue_executeStatement:(id)arg1 bindings:(id)arg2 resultRowHandler:(id /* block */)arg3 error:(out id*)arg4;
- (id)_dbQueue_keysForApplication:(id)arg1;
- (void)_dbQueue_load;
- (BOOL)_dbQueue_loadDatabase;
- (void)_dbQueue_notifyDelegateOfChangeForKeys:(id)arg1 application:(id)arg2;
- (void)_dbQueue_notifyDelegateOfLateLoad;
- (void)_dbQueue_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg1;
- (id)_dbQueue_objectForKey:(id)arg1 forApplication:(id)arg2;
- (id)_dbQueue_objectsForKeys:(id)arg1;
- (id)_dbQueue_openDatabase;
- (void)_dbQueue_performWithSavepoint:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)_dbQueue_setAsideDamagedDatabase;
- (BOOL)_isEligibleForSaving:(id)arg1;
- (BOOL)_setAsideFileAtURL:(id)arg1;
- (id)applicationIdentifiersWithState;
- (void)beginBatchedUpdate;
- (void)close;
- (BOOL)containsKey:(id)arg1 forApplication:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endBatchedUpdate;
- (void)flushSynchronously;
- (id)initWithStorePath:(id)arg1;
- (id)keysForApplication:(id)arg1;
- (id)objectForKey:(id)arg1 forApplication:(id)arg2;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id /* block */)arg3;
- (void)objectForKeys:(id)arg1 forAllApplicationsWithResult:(id /* block */)arg2;
- (void)removeAllObjectsForApplication:(id)arg1;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2;
- (void)removeObjectsForKeys:(id)arg1 forApplication:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3;
- (id)urlByAppendingString:(id)arg1 toURL:(id)arg2;

@end

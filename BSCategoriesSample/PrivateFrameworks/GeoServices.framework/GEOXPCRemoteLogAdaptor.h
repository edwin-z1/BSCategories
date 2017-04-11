/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <GEOPBSessionRequesterDelegate> {
    NSString * _adaptorIdentifier;
    NSString * _debugRequestName;
    NSString * _logMessageCacheFilePath;
    GEOLogMessageCacheManager * _logMessageCacheManager;
    BOOL  _logMessageCollectionRequestPending;
    GEORequester * _logMessageCollectionRequester;
    NSLock * _logMessageCollectionRequesterLock;
    NSObject<OS_dispatch_queue> * _logMessageSendQueue;
    NSURL * _remoteURL;
    NSLock * _xpcActivityInfoLock;
    NSString * _xpcActivityName;
}

@property (readonly) NSString *adaptorIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *debugRequestName;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSURL *remoteURL;
@property (readonly) Class superclass;
@property (nonatomic) long long xpcActivityTriggerCount;

- (void)_beginSendingLogMessageChunks;
- (void)_cleanupLogMessageCollectionRequester;
- (void)_deviceLocking;
- (void)_deviceUnlocked;
- (void)_initializeAdaptor;
- (BOOL)_isLogMessageCollectionRequesterPending;
- (void)_purgeAndSendLogMessages;
- (void)_purgeExpiredLogMessagesFromCache;
- (void)_purgeMapsSuggestionsCacheFile;
- (void)_queueNextLogMessagesChunkForSending;
- (void)_registerXPCActivityTimer;
- (void)_requesterDidCompleteHandler:(id)arg1;
- (void)_requesterStartSendRequest:(id)arg1;
- (void)_sendLogMessageRequest:(id)arg1;
- (void)_sendNextLogMessageChunk;
- (void)_setupLogMessageCache;
- (void)_setupQueueAndNotifications;
- (void)_setupXPCActivity;
- (long long)_sizeOfLogMessageRequest:(id)arg1;
- (void)_unregisterXPCActivityTimer;
- (BOOL)_useInMemoryLogMessageCache;
- (id)adaptorIdentifier;
- (void)dealloc;
- (id)debugRequestName;
- (void)flushLogs;
- (void)incrementXpcActivityTriggerCount;
- (id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4;
- (BOOL)isLogFrameworkAdaptor;
- (void)queueLogMessage:(id)arg1;
- (id)remoteURL;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setDebugRequestName:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setXpcActivityTriggerCount:(long long)arg1;
- (long long)xpcActivityTriggerCount;

@end

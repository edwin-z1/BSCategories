/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSiriBackgroundConnection : NSObject <SiriCoreStreamProviderDelegate> {
    unsigned int  _aceHeaderTimerFireCount;
    NSObject<OS_dispatch_source> * _aceHeaderTimerSource;
    NSMutableData * _bufferedGeneralOutputData;
    NSMutableData * _bufferedInputData;
    NSMutableData * _bufferedProviderHeaderOutputData;
    SiriCoreSiriConnectionInfo * _connectionInfo;
    int  _connectionMethod;
    unsigned int  _currentBarrierIndex;
    double  _currentOpenTime;
    unsigned int  _currentPingIndex;
    double  _currentStartTime;
    <SiriCoreSiriBackgroundConnectionDelegate> * _delegate;
    BOOL  _deviceIsInWalkaboutExperimentGroup;
    NSMutableDictionary * _errorsForConnectionMethods;
    double  _firstByteReadTime;
    double  _firstStartTime;
    BOOL  _hasFoundTrust;
    BOOL  _hasReportedError;
    struct __CFHTTPMessage { } * _httpResponseHeader;
    SiriCoreDataDecompressor * _inputDecompressor;
    BOOL  _isCanceled;
    BOOL  _isOpened;
    unsigned int  _metricsCount;
    NSMutableArray * _outgoingCommandsWithSendCompletions;
    SiriCoreDataCompressor * _outputCompressor;
    NSMutableDictionary * _outstandingBarriers;
    Class  _peerProviderClass;
    NSString * _peerType;
    NSString * _peerVersion;
    SiriCorePingInfo * _pingInfo;
    NSObject<OS_dispatch_source> * _pingTimerSource;
    NSString * _productTypePrefix;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned char  _readBuffer;
    struct __CFReadStream { } * _readStream;
    NSMutableData * _safetyNetBuffer;
    BOOL  _siriConnectionUsesPeerManagedSync;
    unsigned int  _startCount;
    <SiriCoreStreamProvider> * _streamProvider;
    BOOL  _usesProxyConnection;
    struct __CFWriteStream { } * _writeStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriCoreSiriBackgroundConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) Class peerProviderClass;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic) BOOL siriConnectionUsesPeerManagedSync;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesProxyConnection;

- (void).cxx_destruct;
- (void)_aceHeaderTimeoutFired:(id)arg1 afterTimeout:(double)arg2;
- (void)_acknowledgePing:(unsigned int)arg1;
- (id)_activeBufferedOutputData;
- (void)_addOutgoingCommandForSendCompletion:(id)arg1;
- (id)_bestErrorBetweenError:(id)arg1 peerError:(id)arg2;
- (BOOL)_canFallBackFromError:(id)arg1;
- (void)_cancelForExtendedValidationFailureWithTrustInfo:(id)arg1;
- (void)_cancelOutstandingBarriers;
- (void)_closeConnection;
- (void)_closeConnectionAndPrepareForReconnect:(BOOL)arg1;
- (id)_connectionMethodDescription;
- (void)_connectionMetricsWithCompletion:(id /* block */)arg1;
- (id)_connectionType;
- (BOOL)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned int*)arg2 error:(id*)arg3;
- (BOOL)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned int*)arg2 error:(id*)arg3;
- (BOOL)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned int*)arg2 error:(id*)arg3;
- (void)_didEncounterError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1;
- (void)_fallBackToNextConnectionMethodWithError:(id)arg1 orElse:(id /* block */)arg2;
- (void)_flushOutgoingCommandsAndDispatchSendCompletionWithResult:(int)arg1 error:(id)arg2;
- (void)_handleAceEnd;
- (void)_handleAceNop;
- (void)_handleAceObject:(id)arg1;
- (void)_handleAcePing:(unsigned int)arg1;
- (void)_handleAcePong:(unsigned int)arg1;
- (void)_handleBarrierReply:(unsigned int)arg1;
- (void)_handlePacket:(struct { unsigned char x1; unsigned int x2; }*)arg1;
- (BOOL)_hasBufferedDataOrOutstandingPings;
- (BOOL)_hasReadACEHeader;
- (BOOL)_hasReadHTTPHeader;
- (id)_headerDataForURL:(id)arg1 aceHost:(id)arg2 languageCode:(id)arg3 syncAssistantId:(id)arg4;
- (void)_initializeAndSendBufferedGeneralOutputData;
- (int)_nextConnectionMethod;
- (void)_pingTimerFired;
- (id)_readDataFromReadStream:(struct __CFReadStream { }*)arg1 hasMore:(BOOL*)arg2;
- (void)_readStreamEndEncountered;
- (void)_readStreamErrorOccurred;
- (void)_readStreamHasBytesAvailable;
- (void)_resumePingTimer;
- (void)_scheduleAceHeaderTimeoutTimerWithInterval:(double)arg1;
- (void)_sendAcePingWithId:(unsigned int)arg1;
- (void)_sendAcePongWithId:(unsigned int)arg1;
- (void)_sendData:(id)arg1 bufferedOutputData:(id)arg2;
- (void)_sendGeneralData:(id)arg1;
- (void)_sendProviderHeader;
- (BOOL)_shouldDeferAcePingTimer;
- (BOOL)_shouldTrySameConnectionMethodForMethod:(int)arg1 error:(id)arg2;
- (void)_startWithConnectionInfo:(id)arg1 allowFallbackToNewConnectionMethod:(BOOL)arg2;
- (BOOL)_tcpInfoIndicatesPoorLinkQuality;
- (BOOL)_tryParsingHTTPHeaderData:(id)arg1 partialMessage:(struct __CFHTTPMessage { }*)arg2 statusCode:(int*)arg3 bytesRead:(unsigned int*)arg4 error:(id*)arg5;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned int*)arg2 error:(id*)arg3;
- (BOOL)_tryReadingHTTPHeaderData:(id)arg1 withMessage:(struct __CFHTTPMessage { }*)arg2 bytesRead:(unsigned int*)arg3 error:(id*)arg4;
- (BOOL)_tryReadingParsedDataFromBytes:(const void*)arg1 length:(unsigned int)arg2 packet:(struct { unsigned char x1; unsigned int x2; }*)arg3 object:(id*)arg4 bytesParsed:(unsigned int*)arg5 error:(id*)arg6;
- (void)_tryToWriteBufferedOutputData;
- (id)_userAgent;
- (BOOL)_usingFlorence;
- (BOOL)_usingNetwork;
- (BOOL)_usingPOP;
- (BOOL)_usingPOPOnPeer;
- (BOOL)_usingPeer;
- (void)_validateTrustForStream:(id)arg1;
- (void)_validateTrustInfo:(id)arg1;
- (BOOL)_wifiIsAvailable;
- (BOOL)_wifiMayBeBetterThanCurrentStream;
- (void)_writeStreamDidOpen;
- (void)_writeStreamEndEncountered;
- (void)_writeStreamErrorOccurred;
- (void)_writeStreamHasSpaceAvailable;
- (id)analysisInfo;
- (void)barrier:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (BOOL)deviceIsInWalkaboutExperimentGroup;
- (id)getConnectionMethodUsed;
- (void)getConnectionMetrics:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (Class)peerProviderClass;
- (id)peerType;
- (id)peerVersion;
- (id)productTypePrefix;
- (void)sendCommand:(id)arg1 errorHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(BOOL)arg1;
- (void)setPeerProviderClass:(Class)arg1;
- (void)setPeerType:(id)arg1;
- (void)setPeerVersion:(id)arg1;
- (void)setProductTypePrefix:(id)arg1;
- (void)setSendPings:(BOOL)arg1;
- (void)setSiriConnectionUsesPeerManagedSync:(BOOL)arg1;
- (void)setUsesProxyConnection:(BOOL)arg1;
- (BOOL)siriConnectionUsesPeerManagedSync;
- (void)startHeartBeat;
- (void)startWithConnectionInfo:(id)arg1;
- (void)stopHeartBeat;
- (void)streamProvider:(id)arg1 receivedError:(id)arg2;
- (BOOL)usesProxyConnection;

@end

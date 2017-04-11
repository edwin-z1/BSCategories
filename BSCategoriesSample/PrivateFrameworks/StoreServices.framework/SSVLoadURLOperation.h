/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVLoadURLOperation : NSOperation <SSURLSessionManagerDelegate> {
    AKAppleIDSession * _authKitSession;
    NSMutableData * _dataBuffer;
    SSVURLDataConsumer * _dataConsumer;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _iTunesStoreRequest;
    NSData * _inputData;
    int  _machineDataRetryCount;
    int  _machineDataStyle;
    SSMetricsPageEvent * _metricsPageEvent;
    id /* block */  _outputBlock;
    id /* block */  _prepareRequestBlock;
    NSMutableSet * _protocolRedirectURLs;
    BOOL  _recordsMetrics;
    NSURL * _redirectURL;
    NSString * _referrerApplicationName;
    NSString * _referrerURLString;
    NSHTTPURLResponse * _response;
    NSRunLoop * _runLoop;
    SSVFairPlaySAPSession * _sapSession;
    SSVSAPSignaturePolicy * _sapSignaturePolicy;
    BOOL  _shouldRetry;
    BOOL  _stopped;
    NSString * _storeFrontSuffix;
    SSURLBag * _urlBag;
    SSVURLBagInterpreter * _urlBagInterpreter;
    NSURLRequest * _urlRequest;
}

@property (getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (readonly) NSURL *URL;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *URLCacheID;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) NSHTTPURLResponse *URLResponse;
@property (readonly) NSCachedURLResponse *cachedURLResponse;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ expiredOutputBlock;
@property (readonly) unsigned int hash;
@property int machineDataStyle;
@property (readonly) SSMetricsPageEvent *metricsPageEvent;
@property (copy) id /* block */ outputBlock;
@property (copy) id /* block */ prepareRequestBlock;
@property BOOL recordsMetrics;
@property (copy) NSString *referrerApplicationName;
@property (copy) NSString *referrerURLString;
@property (nonatomic, readonly) BOOL shouldDisableCellular;
@property (nonatomic, readonly) BOOL shouldRequireCellular;
@property (nonatomic, readonly) BOOL shouldSetCookies;
@property (nonatomic, readonly) NSData *sourceAppAuditTokenData;
@property (nonatomic, readonly) NSString *sourceAppBundleID;
@property (copy) NSString *storeFrontSuffix;
@property (readonly) Class superclass;

+ (id)_sessionManager;

- (void).cxx_destruct;
- (id)SAPSession;
- (id)SAPSignaturePolicy;
- (id)URL;
- (id)URLRequest;
- (id)URLResponse;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_addMachineDataHeadersToRequest:(id)arg1 withAccountIdentifier:(id)arg2;
- (void)_addSAPSignatureToRequest:(id)arg1;
- (void)_applyResponseToMetrics:(id)arg1;
- (void)_configureWithURLBagInterpreter:(id)arg1;
- (void)_createAuthKitSession;
- (id)_dataForCachedResponse:(struct _CFCachedURLResponse { }*)arg1;
- (void)_finishWithData:(id)arg1;
- (void)_finishWithOutput:(id)arg1 error:(id)arg2;
- (id)_initSSVLoadURLOperation;
- (void)_keepAliveTimer:(id)arg1;
- (void)_loadURLBagInterpreter;
- (id)_newURLRequestWithRedirectURL:(id)arg1;
- (id)_outputForData:(id)arg1 error:(id*)arg2;
- (void)_releaseOutputBlocks;
- (void)_runOnce;
- (long)_runRunLoopUntilStopped;
- (BOOL)_shouldRetryAfterMachineDataRequest:(id)arg1;
- (void)_stopIfCancelled;
- (void)_stopRunLoop;
- (id)cachedURLResponse;
- (void)cancel;
- (void)configureWithURLBag:(id)arg1;
- (void)configureWithURLBagDictionary:(id)arg1;
- (id)dataConsumer;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (id /* block */)expiredOutputBlock;
- (id)init;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURLRequestProperties:(id)arg1;
- (BOOL)isITunesStoreRequest;
- (int)machineDataStyle;
- (void)main;
- (id)metricsPageEvent;
- (id /* block */)outputBlock;
- (id /* block */)prepareRequestBlock;
- (BOOL)recordsMetrics;
- (id)referrerApplicationName;
- (id)referrerURLString;
- (void)setDataConsumer:(id)arg1;
- (void)setExpiredOutputBlock:(id /* block */)arg1;
- (void)setITunesStoreRequest:(BOOL)arg1;
- (void)setMachineDataStyle:(int)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setPrepareRequestBlock:(id /* block */)arg1;
- (void)setRecordsMetrics:(BOOL)arg1;
- (void)setReferrerApplicationName:(id)arg1;
- (void)setReferrerURLString:(id)arg1;
- (void)setSAPSession:(id)arg1;
- (void)setSAPSignaturePolicy:(id)arg1;
- (void)setStoreFrontSuffix:(id)arg1;
- (id)storeFrontSuffix;

@end

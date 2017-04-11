/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICHTMLConverterClient : NSObject {
    NSXPCConnection * _connectionToService;
    unsigned int  _requestCount;
    NSObject<OS_dispatch_queue> * _requestCountQueue;
}

@property (nonatomic) unsigned int requestCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *requestCountQueue;

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 timeoutDate:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dealloc;
- (id)init;
- (unsigned int)requestCount;
- (id)requestCountQueue;
- (void)resumeConnectionIfNeeded;
- (void)setRequestCount:(unsigned int)arg1;
- (void)setRequestCountQueue:(id)arg1;
- (void)suspendConnectionIfNeeded;

@end

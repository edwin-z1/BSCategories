/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _downloadObserversMap;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 options:(unsigned int)arg4 isInternalObserver:(BOOL)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (void)notifyDownloadObserversForDigestString:(id)arg1 withStatus:(int)arg2 info:(id)arg3 wait:(BOOL)arg4;

@end

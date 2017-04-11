/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _SYStreamGuts : NSObject {
    <NSStreamDelegate> * _delegate;
    NSError * _error;
    id /* block */  _handler;
    unsigned int  _port;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runloopSource;
    unsigned int  _status;
}

- (void).cxx_destruct;
- (void)createRunloopSourceForStream:(id)arg1;
- (void)dealloc;
- (void)postStreamEvent:(unsigned int)arg1 forStream:(id)arg2;
- (void)setEventHandler:(id /* block */)arg1 queue:(id)arg2;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> * _q;
    bool  _r;
}

@property (getter=isSuspended, nonatomic, readonly) BOOL suspended;

- (void).cxx_destruct;
- (void)async:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 attributes:(id)arg2 target:(id)arg3;
- (BOOL)isSuspended;
- (void)resume;
- (void)suspend;
- (void)sync:(id /* block */)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimer : NSObject {
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    SEL  _selector;
    id  _target;
    double  _timeInterval;
    id  _timer;
    BOOL  _useCurrentRunLoop;
    NSDictionary * _userInfo;
    BOOL  _wakeDevice;
}

@property (nonatomic, readonly, retain) NSDate *fireDate;
@property (nonatomic, readonly, retain) id userInfo;

- (id)_initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 queue:(id)arg8;
- (void)_reschedulePCPersistentTimer;
- (void)dealloc;
- (id)fireDate;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 queue:(id)arg7;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7;
- (void)invalidate;
- (void)setFireTimeInterval:(double)arg1;
- (id)userInfo;

@end

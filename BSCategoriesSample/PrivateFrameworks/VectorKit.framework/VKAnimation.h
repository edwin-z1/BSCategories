/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnimation : NSObject {
    id /* block */  _completionHandler;
    NSString * _name;
    int  _priority;
    <VKAnimationRunner> * _runner;
    BOOL  _runsForever;
    int  _state;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) BOOL running;
@property (nonatomic) BOOL runsForever;
@property (nonatomic, readonly) BOOL timed;

- (id /* block */)completionHandler;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)initWithName:(id)arg1;
- (id)initWithPriority:(int)arg1;
- (id)initWithPriority:(int)arg1 name:(id)arg2;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (int)priority;
- (void)resume;
- (BOOL)running;
- (BOOL)runsForever;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setRunsForever:(BOOL)arg1;
- (void)startWithRunner:(id)arg1;
- (void)stop;
- (void)stopAnimation:(BOOL)arg1;
- (BOOL)timed;
- (void)transferToRunner:(id)arg1;

@end

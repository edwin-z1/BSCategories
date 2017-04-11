/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PowerlogCore : NSObject {
    PLAccountingOperator * _accounting;
    PLCoreAgent * _agents;
    NSObject<OS_dispatch_source> * _fVMPressureSource;
    NSDate * _launchDate;
    PLCoreService * _services;
    PLCoreStorage * _storage;
}

@property (readonly) PLAccountingOperator *accounting;
@property (readonly) PLCoreAgent *agents;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreService *services;
@property (readonly) PLCoreStorage *storage;

+ (BOOL)allowRun;
+ (BOOL)isDebugEnabled;
+ (void)setupCore;
+ (id)sharedCore;
+ (BOOL)sharedCoreStarted;

- (void).cxx_destruct;
- (id)accounting;
- (id)agents;
- (void)dealloc;
- (void)didRecieveMemoryPressureWarning;
- (id)init;
- (id)launchDate;
- (id)services;
- (void)startCore;
- (void)stopCore;
- (id)storage;

@end

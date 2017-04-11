/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationInfo : NSObject {
    NSMutableDictionary * _activeProcesses;
    NSString * _bundleIdentifier;
    NSString * _companionAppBundleIdentifier;
    BOOL  _spiClient;
    NSString * _teamIdentifier;
}

@property (nonatomic, readonly) NSMutableDictionary *activeProcesses;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *companionAppBundleIdentifier;
@property (getter=isFrontMostApp, nonatomic, readonly) BOOL frontMostApp;
@property (getter=isSPIClient, nonatomic, readonly) BOOL spiClient;
@property (nonatomic, readonly, copy) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)activeProcesses;
- (id)bundleIdentifier;
- (id)companionAppBundleIdentifier;
- (id)description;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 companionAppBundleIdentifier:(id)arg3 spiClient:(BOOL)arg4;
- (BOOL)isFrontMostApp;
- (BOOL)isSPIClient;
- (id)teamIdentifier;

@end

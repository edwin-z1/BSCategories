/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBBundleInfo : NSObject {
    BSCFBundle * _bundle;
    NSString * _bundleIdentifier;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    NSString * _displayName;
    NSDictionary * _extendedInfo;
    LSApplicationProxy * _proxy;
    unsigned int  _sequenceNumber;
}

@property (getter=_bundle, nonatomic, readonly, retain) BSCFBundle *bundle;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleType;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, retain) NSUUID *cacheGUID;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSDictionary *extendedInfo;
@property (getter=_proxy, nonatomic, readonly, retain) LSApplicationProxy *proxy;
@property (nonatomic) unsigned int sequenceNumber;

- (id)_bundle;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleURL:(id)arg1;
- (id)_proxy;
- (void)_purgeBundle;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (void)dealloc;
- (id)displayName;
- (id)extendedInfo;
- (id)extendedInfoValueForKey:(id)arg1;
- (unsigned int)sequenceNumber;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleType:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCacheGUID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExtendedInfo:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;

@end

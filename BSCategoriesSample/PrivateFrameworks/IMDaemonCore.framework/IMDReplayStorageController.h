/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDReplayStorageController : NSObject {
    NSString * _filePath;
    IDSKVStore * _store;
}

@property (nonatomic, readonly, retain) NSString *filePath;
@property (nonatomic, retain) IDSKVStore *store;

- (id)copyNextBatchWithSize:(unsigned int)arg1 iterationContext:(id*)arg2;
- (void)dealloc;
- (void)deleteReplayDB;
- (id)filePath;
- (id)initWithFilePath:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (BOOL)storeDictionary:(id)arg1 error:(id*)arg2;

@end

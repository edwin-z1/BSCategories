/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFDADeferredNewMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {
    NSString * _displayName;
    NSString * _parentFolderID;
    NSString * _temporaryFolderID;
}

- (void)applyToFolderMap:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)folderChangeResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1 parentFolderID:(id)arg2 temporaryFolderID:(id)arg3;
- (BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2;

@end

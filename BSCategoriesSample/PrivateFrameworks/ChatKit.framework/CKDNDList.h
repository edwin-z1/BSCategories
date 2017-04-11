/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDNDList : NSObject {
    NPSManager * _syncManager;
}

@property (nonatomic, retain) NPSManager *syncManager;

+ (id)sharedList;

- (void).cxx_destruct;
- (void)_handleDNDListChanged;
- (id)currentList;
- (void)dealloc;
- (id)globalIdentifierForChat:(id)arg1;
- (id)init;
- (BOOL)isMutedChat:(id)arg1;
- (BOOL)isMutedChatIdentifier:(id)arg1;
- (void)muteChat:(id)arg1 untilDate:(id)arg2;
- (void)performMigrationIfNecessary;
- (void)setSyncManager:(id)arg1;
- (id)syncManager;
- (id)unmuteDateForChat:(id)arg1;
- (id)unmuteDateForIdentifier:(id)arg1;

@end

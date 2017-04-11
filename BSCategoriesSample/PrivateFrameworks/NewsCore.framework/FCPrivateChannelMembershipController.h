/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateChannelMembershipController : FCPrivateZoneController {
    NSMutableSet * _membershipReferences;
    NSDictionary * _membershipsByChannelID;
}

@property (nonatomic, retain) NSMutableSet *membershipReferences;
@property (nonatomic, retain) NSDictionary *membershipsByChannelID;

+ (int)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)localStoreFilename;
+ (unsigned int)localStoreVersion;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (BOOL)requiresPushNotificationSupport;

- (void).cxx_destruct;
- (void)addItem:(id)arg1 toStore:(BOOL)arg2;
- (void)addObserver:(id)arg1;
- (void)changedMembershipsFrom:(id)arg1 toMemberships:(id)arg2;
- (void)checkArticleID:(id)arg1 inFeedDescriptors:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)checkNextArticleID:(id)arg1 inFeedDescriptors:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)dealloc;
- (id)feedDescriptorForDraftFeedForChannelID:(id)arg1;
- (void)fetchMembershipsWithIDs:(id)arg1 queue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (BOOL)hasMemberships;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 recordZone:(id)arg3 storeDirectory:(id)arg4;
- (void)isAllowedToSeeArticleID:(id)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)isAllowedToSeeDraftsForChannelID:(id)arg1;
- (BOOL)isMemberOfChannelID:(id)arg1;
- (void)loadLocalCachesFromStore;
- (id)membershipReferences;
- (id)membershipsByChannelID;
- (id)referenceToMembershipForMembershipID:(id)arg1;
- (void)refreshPublicMemberships;
- (void)removeItemWithItemID:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setMembershipReferences:(id)arg1;
- (void)setMembershipsByChannelID:(id)arg1;

@end

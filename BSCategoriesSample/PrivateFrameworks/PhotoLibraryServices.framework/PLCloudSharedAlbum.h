/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol> {
    BOOL  _deleteFromDBOnly;
}

@property (nonatomic, readonly) unsigned int approximateCount;
@property (nonatomic, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned int assetsCount;
@property (nonatomic) unsigned int batchSize;
@property (nonatomic, readonly) BOOL canContributeToCloudSharedAlbum;
@property (nonatomic, readonly) BOOL canShowAvalancheStacks;
@property (nonatomic, readonly) BOOL canShowComments;
@property (nonatomic, readonly, retain) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (nonatomic) short cloudAlbumSubtype;
@property (nonatomic, retain) NSDate *cloudCreationDate;
@property (nonatomic, readonly, retain) NSDate *cloudFirstRecentBatchDate;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, retain) NSDate *cloudLastContributionDate;
@property (nonatomic, retain) NSDate *cloudLastInterestingChangeDate;
@property (nonatomic, retain) NSDictionary *cloudMetadata;
@property (nonatomic, retain) NSNumber *cloudMultipleContributorsEnabled;
@property (nonatomic, retain) NSNumber *cloudMultipleContributorsEnabledLocal;
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (nonatomic, retain) NSString *cloudOwnerEmail;
@property (nonatomic, retain) NSNumber *cloudOwnerEmailKey;
@property (nonatomic, retain) NSString *cloudOwnerFirstName;
@property (nonatomic, retain) NSString *cloudOwnerFullName;
@property (nonatomic, retain) NSString *cloudOwnerHashedPersonID;
@property (nonatomic, retain) NSString *cloudOwnerLastName;
@property (nonatomic, retain) NSString *cloudPersonID;
@property (nonatomic, retain) NSNumber *cloudPublicURLEnabled;
@property (nonatomic, retain) NSNumber *cloudPublicURLEnabledLocal;
@property (nonatomic, retain) NSNumber *cloudRelationshipState;
@property (nonatomic, retain) NSNumber *cloudRelationshipStateLocal;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (readonly) int cloudRelationshipStateValue;
@property (nonatomic, retain) NSDate *cloudSubscriptionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, readonly, retain) NSURL *groupURL;
@property (nonatomic, retain) NSNumber *hasUnseenContent;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *importSessionID;
@property (nonatomic, retain) NSOrderedSet *invitationRecords;
@property (nonatomic, readonly) BOOL isCameraAlbum;
@property (nonatomic, readonly) BOOL isCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) BOOL isFamilyCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) BOOL isInTrash;
@property (nonatomic, readonly) BOOL isLibrary;
@property (nonatomic, readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property (nonatomic, retain) NSNumber *isOwned;
@property (nonatomic, readonly) BOOL isOwnedCloudSharedAlbum;
@property (nonatomic, readonly) BOOL isPanoramasAlbum;
@property (nonatomic, readonly) BOOL isPendingPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isPhotoStreamAlbum;
@property (nonatomic, readonly) BOOL isRecentlyAddedAlbum;
@property (nonatomic, readonly) BOOL isStandInAlbum;
@property (nonatomic, readonly) BOOL isUserLibraryAlbum;
@property (nonatomic, readonly) BOOL isWallpaperAlbum;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly, retain) NSNumber *kind;
@property (nonatomic, readonly) int kindValue;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, retain) NSString *localizedSharedWithLabel;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, retain) NSMutableOrderedSet *mutableAssets;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic, readonly) unsigned int photosCount;
@property (nonatomic, readonly, retain) UIImage *posterImage;
@property (nonatomic, retain) NSString *publicURL;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) BOOL shouldDeleteWhenEmpty;
@property (nonatomic, retain) NSDictionary *slideshowSettings;
@property (nonatomic, readonly, copy) id /* block */ sortingComparator;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, retain) NSNumber *unseenAssetsCount;
@property unsigned int unseenAssetsCountIntegerValue;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned int videosCount;

+ (id)allCloudSharedAlbumsInLibrary:(id)arg1;
+ (id)cloudOwnerDisplayNameWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 includingEmail:(BOOL)arg5 allowsEmail:(BOOL)arg6;
+ (id)cloudSharedAlbumWithGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)localizedSharedByLabelWithFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 emailKey:(id)arg4 isOwned:(BOOL)arg5 allowsEmail:(BOOL)arg6;

- (id)_expectedKeyAssets:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (id)albumDirectoryPath;
- (void)awakeFromInsert;
- (BOOL)canContributeToCloudSharedAlbum;
- (id)cloudAlbumSubscriberRecords;
- (id)cloudFirstRecentBatchDate;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)cloudOwnerEmail;
- (int)cloudRelationshipStateLocalValue;
- (int)cloudRelationshipStateValue;
- (void)delete;
- (void)deleteFromDatabaseOnly;
- (void)getUnseenStartMarkerIndex:(unsigned int*)arg1 count:(unsigned int*)arg2 showsProgress:(BOOL*)arg3;
- (BOOL)hasUnseenContentBoolValue;
- (BOOL)isFamilyCloudSharedAlbum;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (id)localizedSharedWithLabel;
- (void)persistRecoveryMetadata;
- (void)prepareForDeletion;
- (void)publishBatchOfOriginalAssets:(id)arg1 withBatchCommentText:(id)arg2 assetsSharingInfos:(id)arg3 andTrimmedVideoPathInfo:(id)arg4 isNewAlbum:(BOOL)arg5;
- (void)setCloudOwnerEmail:(id)arg1;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setUnseenAssetsCountIntegerValue:(unsigned int)arg1;
- (id /* block */)sortingComparator;
- (unsigned int)unseenAssetsCountIntegerValue;
- (void)updateCloudLastContributionDateWithDate:(id)arg1;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)willSave;

@end

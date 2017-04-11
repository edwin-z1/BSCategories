/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedAlbumMetadata : NSObject {
    BOOL  _allowsOverwite;
    NSMutableOrderedSet * _assetUUIDs;
    NSString * _cloudGUID;
    NSString * _customKeyAssetUUID;
    BOOL  _customSortAscending;
    int  _customSortKey;
    PLGenericAlbum * _genericAlbum;
    BOOL  _inTrash;
    BOOL  _isFolder;
    NSNumber * _kind;
    NSURL * _metadataURL;
    BOOL  _pinned;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic) BOOL allowsOverwite;
@property (nonatomic, retain) NSMutableOrderedSet *assetUUIDs;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, retain) NSString *customKeyAssetUUID;
@property (nonatomic) BOOL customSortAscending;
@property (nonatomic) int customSortKey;
@property (nonatomic, retain) PLGenericAlbum *genericAlbum;
@property (getter=isInTrash, nonatomic) BOOL inTrash;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, retain) NSNumber *kind;
@property (nonatomic, retain) NSURL *metadataURL;
@property (getter=isPinned, nonatomic) BOOL pinned;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;

+ (BOOL)_isAlbumMetadataExtension:(id)arg1;
+ (BOOL)_isFolderMetadataExtension:(id)arg1;
+ (BOOL)isAlbumMetadataPath:(id)arg1;
+ (BOOL)isFolderMetadataPath:(id)arg1;
+ (BOOL)isValidPath:(id)arg1;

- (void)_readMetadata;
- (void)_saveMetadata;
- (BOOL)allowsOverwite;
- (id)assetUUIDs;
- (id)cloudGUID;
- (id)customKeyAssetUUID;
- (BOOL)customSortAscending;
- (int)customSortKey;
- (void)dealloc;
- (id)description;
- (id)extensionForKind:(id)arg1;
- (id)genericAlbum;
- (id)init;
- (id)initWithPLGenericAlbum:(id)arg1;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (BOOL)isFolder;
- (BOOL)isInTrash;
- (BOOL)isPinned;
- (id)kind;
- (id)metadataURL;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)setAllowsOverwite:(BOOL)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCustomKeyAssetUUID:(id)arg1;
- (void)setCustomSortAscending:(BOOL)arg1;
- (void)setCustomSortKey:(int)arg1;
- (void)setGenericAlbum:(id)arg1;
- (void)setInTrash:(BOOL)arg1;
- (void)setKind:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setPinned:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(BOOL)arg2;
- (id)uuid;

@end

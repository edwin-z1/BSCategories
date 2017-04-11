/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLQuickActionManager : NSObject <PLCameraPreviewWellImageChangeObserver> {
    Class  __SBSApplicationShortcutCustomImageIconClass;
    Class  __SBSApplicationShortcutItemClass;
    Class  __SBSApplicationShortcutServiceClass;
    SBSApplicationShortcutService * __appShortcutService;
    NSData * __cachedMostRecentPhotoData;
    BOOL  __mostRecentPhotoIsInvalid;
}

@property (setter=_setSBSApplicationShortcutCustomImageIconClass:, nonatomic, retain) Class _SBSApplicationShortcutCustomImageIconClass;
@property (setter=_setSBSApplicationShortcutItemClass:, nonatomic, retain) Class _SBSApplicationShortcutItemClass;
@property (setter=_setSBSApplicationShortcutServiceClass:, nonatomic, retain) Class _SBSApplicationShortcutServiceClass;
@property (setter=_setAppShortcutService:, nonatomic, retain) SBSApplicationShortcutService *_appShortcutService;
@property (setter=_setCachedMostRecentPhotoData:, nonatomic, retain) NSData *_cachedMostRecentPhotoData;
@property (setter=_setMostRecentPhotoIsInvalid:, nonatomic) BOOL _mostRecentPhotoIsInvalid;

+ (id)sharedManager;

- (Class)_SBSApplicationShortcutCustomImageIconClass;
- (Class)_SBSApplicationShortcutItemClass;
- (Class)_SBSApplicationShortcutServiceClass;
- (id)_appShortcutService;
- (id)_buildFavoritesQuickAction;
- (id)_buildMostRecentPhotoQuickAction;
- (id)_buildOneYearAgoQuickAction;
- (id)_buildSearchQuickAction;
- (id)_cachedMostRecentPhotoData;
- (BOOL)_mostRecentPhotoIsInvalid;
- (void)_setAppShortcutService:(id)arg1;
- (void)_setCachedMostRecentPhotoData:(id)arg1;
- (void)_setMostRecentPhotoIsInvalid:(BOOL)arg1;
- (void)_setSBSApplicationShortcutCustomImageIconClass:(Class)arg1;
- (void)_setSBSApplicationShortcutItemClass:(Class)arg1;
- (void)_setSBSApplicationShortcutServiceClass:(Class)arg1;
- (id)_shortcutImageNamed:(id)arg1;
- (BOOL)_userHasPhotos;
- (BOOL)_userHasPhotosFromLastYear;
- (void)buildQuickActionItems;
- (void)cameraPreviewWellImageDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)rebuildQuickActionForLocaleChanges:(id)arg1;

@end

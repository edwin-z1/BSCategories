/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBAppManager : NSObject {
    NSMutableDictionary * _containersByID;
    MBSettingsContext * _settingsContext;
    NSMutableDictionary * _systemDataContainersByID;
    NSMutableDictionary * _systemSharedContainersByID;
}

+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)arg1;

- (id)_copyAppsWithPlists:(id)arg1 error:(id*)arg2;
- (id)_copySafeHarborsWithError:(id*)arg1;
- (id)_copySystemContainersWithError:(id*)arg1;
- (id)_copySystemContainersWithPlists:(id)arg1 error:(id*)arg2;
- (id)_copyUserAppsWithError:(id*)arg1;
- (id)_subdomainNamesForAppDomainNames:(id)arg1;
- (id)allApps;
- (id)allContainers;
- (id)allDisabledDomainNames;
- (id)allRestrictedDomainNames;
- (id)allSystemContainers;
- (id)appWithIdentifier:(id)arg1;
- (id)containerWithIdentifier:(id)arg1;
- (id)createSafeHarborForContainer:(id)arg1 error:(id*)arg2;
- (id)createSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)initWithSettingsContext:(id)arg1;
- (BOOL)isDomainNameEnabled:(id)arg1;
- (BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 usingIntermediateRestoreDir:(BOOL)arg2 withError:(id*)arg3;
- (BOOL)moveAppDataToSafeHarborForContainer:(id)arg1 withError:(id*)arg2;
- (void)removeAllDisabledDomainNames;
- (void)removeOldSafeHarbors;
- (void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (id)systemDataContainerWithIdentifier:(id)arg1;
- (id)systemSharedContainerWithIdentifier:(id)arg1;

@end

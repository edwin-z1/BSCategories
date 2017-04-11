/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFavoritesController : NSObject <TUCallProviderManagerDelegate> {
    TUCallProviderManager * _callProviderManager;
    CNContactStore * _contactStore;
    <TPFavoritesControllerDelegate> * _delegate;
    CNFavorites * _favorites;
    NSArray * _favoritesEntries;
    NSMutableDictionary * _transportNameCache;
}

@property (nonatomic, retain) TUCallProviderManager *callProviderManager;
@property (nonatomic, retain) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TPFavoritesControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNFavorites *favorites;
@property (nonatomic, copy) NSArray *favoritesEntries;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSMutableDictionary *transportNameCache;

- (void).cxx_destruct;
- (unsigned int)absoluteIndexForIndex:(unsigned int)arg1;
- (id)addEntry:(id)arg1;
- (id)callProviderManager;
- (BOOL)canAddEntry;
- (id)contactForFavoritesEntry:(id)arg1 keyDescriptors:(id)arg2;
- (id)contactStore;
- (void)dealloc;
- (id)delegate;
- (id)dialRequestForCallProvider:(id)arg1;
- (id)dialRequestForFavoritesEntry:(id)arg1;
- (id)favorites;
- (id)favoritesEntries;
- (void)handleContactStoreDidChangeNotification:(id)arg1;
- (void)handleFavoritesChangedNotification:(id)arg1;
- (void)handleFavoritesEntryChangedNotification:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (void)moveEntryAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (void)providersChangedForProviderManager:(id)arg1;
- (void)removeEntriesAtIndexes:(id)arg1;
- (void)save;
- (void)setCallProviderManager:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFavorites:(id)arg1;
- (void)setFavoritesEntries:(id)arg1;
- (id)transportNameCache;
- (id)transportNameForFavoritesEntry:(id)arg1;

@end

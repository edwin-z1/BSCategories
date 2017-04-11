/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCGridItemManager : HFItemManager {
    HFItemProvider<HUCCFavoriteItemProvider> * _favoriteItemProvider;
    unsigned int  _itemType;
    unsigned int  _maximumNumberOfItems;
}

@property (nonatomic, retain) HFItemProvider<HUCCFavoriteItemProvider> *favoriteItemProvider;
@property (nonatomic, readonly) unsigned int itemType;
@property (nonatomic) unsigned int maximumNumberOfItems;

- (void).cxx_destruct;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_createItemProvidersWithHome:(id)arg1;
- (id)_itemForSorting;
- (id)_itemProviders;
- (id)favoriteItemProvider;
- (id)initWithDelegate:(id)arg1 itemType:(unsigned int)arg2;
- (unsigned int)itemType;
- (unsigned int)maximumNumberOfItems;
- (void)reloadForMaximumNumberOfItemsChange;
- (void)setFavoriteItemProvider:(id)arg1;
- (void)setMaximumNumberOfItems:(unsigned int)arg1;

@end

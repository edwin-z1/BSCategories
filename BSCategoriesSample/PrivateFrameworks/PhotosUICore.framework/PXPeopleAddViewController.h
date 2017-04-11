/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAddViewController : UICollectionViewController <PXPeopleDataSourceDelegate, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> {
    UIBarButtonItem * _addItem;
    UIBarButtonItem * _cancelItem;
    PXPeoplePersonDataSource * _dataSource;
    UIBarButtonItem * _mergeItem;
    struct CGSize { 
        float width; 
        float height; 
    }  _nonPriorityItemSize;
    int  _previousHorizontalSizeClass;
    struct CGSize { 
        float width; 
        float height; 
    }  _priorityItemSize;
}

@property (nonatomic, retain) UIBarButtonItem *addItem;
@property (nonatomic, retain) UIBarButtonItem *cancelItem;
@property (retain) PXPeoplePersonDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIBarButtonItem *mergeItem;
@property struct CGSize { float x1; float x2; } nonPriorityItemSize;
@property int previousHorizontalSizeClass;
@property struct CGSize { float x1; float x2; } priorityItemSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionBarItems;
- (void)_addAction:(id)arg1;
- (id)_bestTargetIndexGivenMergeIndexes:(id)arg1;
- (void)_calculateItemSize;
- (void)_cancelAction:(id)arg1;
- (id)_flowLayout;
- (id)_leftBarItems;
- (void)_mergeAction:(id)arg1;
- (int)_personTypeForIndexPath:(id)arg1;
- (void)_updateBarButtonItemsIfNeeded;
- (void)_updateNavBarForIndexes:(id)arg1;
- (void)_verifyPersonItems:(id)arg1;
- (BOOL)_wantsCenteringLayout;
- (id)addItem;
- (void)addSelectionToHomeScreen;
- (id)cancelItem;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)commonInit;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (void)mergeAndAddSelectionToHomeScreenWithCompletion:(id /* block */)arg1;
- (id)mergeItem;
- (struct CGSize { float x1; float x2; })nonPriorityItemSize;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (int)previousHorizontalSizeClass;
- (struct CGSize { float x1; float x2; })priorityItemSize;
- (void)setAddItem:(id)arg1;
- (void)setCancelItem:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMergeItem:(id)arg1;
- (void)setNonPriorityItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPreviousHorizontalSizeClass:(int)arg1;
- (void)setPriorityItemSize:(struct CGSize { float x1; float x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

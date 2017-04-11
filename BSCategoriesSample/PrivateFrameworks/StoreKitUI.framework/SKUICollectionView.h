/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICollectionView : UICollectionView {
    BOOL  _delegateWantsWillLayoutSubviews;
    BOOL  _externalShowsHorizontalScrollIndicator;
    BOOL  _externalShowsVerticalScrollIndicator;
    SKUIIndexBarControl * _indexBarControl;
    float  _overrideBoundsWidth;
    UICollectionViewLayout * _pendingCollectionViewLayout;
    UIRefreshControl * _refreshControl;
}

@property (nonatomic, retain) SKUIIndexBarControl *indexBarControl;
@property (nonatomic) float overrideBoundsWidth;
@property (nonatomic, retain) UIRefreshControl *refreshControl;

- (void).cxx_destruct;
- (void)_updateIndexBarControlFrame;
- (void)_updateShowsScrollIndicators;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (id)collectionViewLayout;
- (id)indexBarControl;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 collectionViewLayout:(id)arg2;
- (void)layoutSubviews;
- (float)overrideBoundsWidth;
- (id)refreshControl;
- (void)setCollectionViewLayout:(id)arg1 animated:(BOOL)arg2;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIndexBarControl:(id)arg1;
- (void)setOverrideBoundsWidth:(float)arg1;
- (void)setRefreshControl:(id)arg1;
- (void)setShowsHorizontalScrollIndicator:(BOOL)arg1;
- (void)setShowsVerticalScrollIndicator:(BOOL)arg1;

@end

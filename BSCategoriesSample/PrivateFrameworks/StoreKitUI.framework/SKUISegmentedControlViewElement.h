/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISegmentedControlViewElement : SKUIViewElement {
    int  _maximumNumberOfVisibleItems;
    NSString * _moreListTitle;
}

@property (nonatomic, readonly) SKUIDividerViewElement *bottomDivider;
@property (nonatomic, readonly) int initialSelectedItemIndex;
@property (nonatomic, readonly) int maximumNumberOfVisibleItems;
@property (nonatomic, readonly) NSString *moreListTitle;
@property (nonatomic, readonly) NSArray *segmentItemTitles;

- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(id /* block */)arg1;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)bottomDivider;
- (void)dispatchEventOfType:(unsigned int)arg1 forItemAtIndex:(int)arg2;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (int)initialSelectedItemIndex;
- (int)maximumNumberOfVisibleItems;
- (id)moreListTitle;
- (int)pageComponentType;
- (id)segmentItemTitles;

@end

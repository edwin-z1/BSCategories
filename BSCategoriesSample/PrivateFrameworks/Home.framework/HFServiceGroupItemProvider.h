/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceGroupItemProvider : HFItemProvider {
    id /* block */  _filter;
    <HFCharacteristicValueSource> * _overrideValueSource;
    NSMutableSet * _serviceGroupItems;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) <HFCharacteristicValueSource> *overrideValueSource;
@property (nonatomic, retain) NSMutableSet *serviceGroupItems;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)overrideValueSource;
- (id)reloadItems;
- (id)serviceGroupItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setOverrideValueSource:(id)arg1;
- (void)setServiceGroupItems:(id)arg1;
- (void)setValueSource:(id)arg1;
- (id)valueSource;

@end

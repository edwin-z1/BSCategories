/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSFastEnumeration, NSSecureCoding> {
    NRMutableDeviceCollection * _deviceCollection;
    BOOL  _dirty;
    NSMutableArray * _history;
    NSMutableDictionary * _historyStateCache;
    NSMutableArray * _historyStateCacheIndex;
    NSMutableArray * _historyStateCacheMRU;
    NSMutableOrderedSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _startIndex;
}

@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) NRMutableDeviceCollection *deviceCollection;
@property (nonatomic, readonly) BOOL dirty;
@property (nonatomic, retain) NSMutableArray *history;
@property (nonatomic, retain) NSMutableDictionary *historyStateCache;
@property (nonatomic, retain) NSMutableArray *historyStateCacheIndex;
@property (nonatomic, retain) NSMutableArray *historyStateCacheMRU;
@property (nonatomic, readonly) unsigned long long nextIndex;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long startIndex;
@property (nonatomic, readonly) unsigned long switchIndex;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned int)arg2;
- (id)_mostRecentStateBefore:(id)arg1;
- (void)_truncateHistory;
- (void)_updateHistoryCachesWithIndex:(id)arg1;
- (id)addObserverQueue:(id)arg1 withBlock:(id /* block */)arg2;
- (id)applyDiff:(id)arg1;
- (void)child:(id)arg1 didApplyDiff:(id)arg2;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (id)deviceCollection;
- (id)deviceIDAtSwitchIndex:(unsigned long)arg1 date:(id*)arg2;
- (BOOL)dirty;
- (void)encodeWithCoder:(id)arg1;
- (id)history;
- (id)historyEntryAtIndex:(unsigned long long)arg1;
- (id)historyStateCache;
- (id)historyStateCacheIndex;
- (id)historyStateCacheMRU;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToHistory:(id)arg1;
- (unsigned long long)nextIndex;
- (void)notifyObserversWithEntry:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)pruneStateCacheItems:(unsigned int)arg1;
- (void)purgeWorkingSet;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)setHistory:(id)arg1;
- (void)setHistoryStateCache:(id)arg1;
- (void)setHistoryStateCacheIndex:(id)arg1;
- (void)setHistoryStateCacheMRU:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartIndex:(unsigned long long)arg1;
- (unsigned long long)startIndex;
- (id)stateAtIndex:(unsigned long long)arg1;
- (id)switchDeviceIDFromDiff:(id)arg1;
- (unsigned long)switchIndex;

@end

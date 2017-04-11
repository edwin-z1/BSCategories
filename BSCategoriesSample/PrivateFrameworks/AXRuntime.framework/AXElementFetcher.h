/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXElementFetcher : NSObject {
    unsigned int  _activeFetchEvents;
    struct __AXObserver { } * _axRuntimeNotificationObserver;
    NSArray * _currentApps;
    <AXElementFetcherDelegate> * _delegate;
    BOOL  _didSendFakeScreenChangeOnLastFetch;
    NSObject<OS_dispatch_queue> * _elementAccessQueue;
    NSArray * _elementCache;
    NSObject<OS_dispatch_queue> * _elementFetchQueue;
    AXElementGroupPruner * _elementGroupPruner;
    int  _elementGroupingHeuristics;
    BOOL  _enabled;
    NSObject<OS_dispatch_source> * _eventCoalesceTimer;
    BOOL  _eventManagementEnabled;
    NSMapTable * _fetchObservers;
    BOOL  _fetchingElements;
    NSObject<OS_dispatch_queue> * _filterAccessQueue;
    BOOL  _groupingEnabled;
    AXElementGroup * _keyboardGroupCache;
    NSMutableDictionary * _postFetchFilters;
    AXElementGroup * _rootGroupCache;
    unsigned int  _scheduledFetchEvent;
    BOOL  _shouldIncludeNonScannerElements;
    AXVisualElementGrouper * _visualElementGrouper;
}

@property (nonatomic) unsigned int activeFetchEvents;
@property (nonatomic, readonly) NSArray *availableElements;
@property (nonatomic, retain) NSArray *currentApps;
@property (nonatomic) <AXElementFetcherDelegate> *delegate;
@property (nonatomic) BOOL didSendFakeScreenChangeOnLastFetch;
@property (nonatomic, retain) NSArray *elementCache;
@property (nonatomic, readonly) AXElementGroupPruner *elementGroupPruner;
@property (nonatomic) int elementGroupingHeuristics;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (getter=isEventManagementEnabled, nonatomic) BOOL eventManagementEnabled;
@property (nonatomic, retain) NSMapTable *fetchObservers;
@property (getter=isFetchingElements, nonatomic) BOOL fetchingElements;
@property (nonatomic, readonly) AXElementGroup *firstKeyboardRow;
@property (getter=isGroupingEnabled, nonatomic) BOOL groupingEnabled;
@property (nonatomic, readonly) AXElementGroup *keyboardGroup;
@property (nonatomic, retain) AXElementGroup *keyboardGroupCache;
@property (nonatomic, readonly) AXElementGroup *lastKeyboardRow;
@property (nonatomic, readonly) AXElement *nativeFocusElement;
@property (nonatomic, retain) NSMutableDictionary *postFetchFilters;
@property (nonatomic, readonly) AXElementGroup *rootGroup;
@property (nonatomic, retain) AXElementGroup *rootGroupCache;
@property (nonatomic) BOOL shouldIncludeNonScannerElements;
@property (nonatomic, retain) AXVisualElementGrouper *visualElementGrouper;
@property (nonatomic, readonly) BOOL willFetchElements;

+ (id)springBoardElement;
+ (id)systemWideElement;

- (id)_axNotificationsForManagedEvents;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned int)arg1;
- (double)_delayForFetchEvent:(unsigned int)arg1;
- (BOOL)_fetchElements:(BOOL)arg1;
- (BOOL)_fetchEventCanBeManaged:(unsigned int)arg1;
- (void)_fetchEventOccurred:(unsigned int)arg1;
- (BOOL)_fetchGroups:(BOOL)arg1;
- (id)_fetchUnprocessedAppGroups;
- (id)_fetchUnprocessedElements;
- (id)_filterElements:(id)arg1 withFilter:(id /* block */)arg2;
- (id)_filterGroup:(id)arg1 withFilter:(id /* block */)arg2;
- (id)_findElementsMatchingBlock:(id /* block */)arg1 internalRequest:(BOOL)arg2;
- (id)_findGroupableMatchingBlock:(id /* block */)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(int)arg2 scanningBehaviorTraits:(int)arg3 label:(id)arg4 currentPid:(int)arg5;
- (void)_handleApplicationWasActivated:(id)arg1;
- (void)_handleMediaDidBegin:(struct __CFData { }*)arg1;
- (void)_handleNativeFocusItemDidChange:(struct __CFData { }*)arg1;
- (void)_handleUpdateElementVisuals:(struct __CFData { }*)arg1;
- (void)_notifyObserversApplicationWasActivated:(id)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned int)arg1 foundNewElements:(BOOL)arg2;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned int)arg1;
- (void)_notifyObserversMediaDidBegin:(struct __CFData { }*)arg1;
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned int)arg1;
- (int)_priorityForFetchEvent:(unsigned int)arg1;
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id*)arg2;
- (void)_scheduleFetchEvent:(unsigned int)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(BOOL)arg3;
- (BOOL)_shouldConsiderCacheAsInvalid;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(BOOL)arg2 didWrap:(BOOL*)arg3;
- (void)_tearDownEventCoalesceTimer;
- (BOOL)_updateCurrentApps;
- (unsigned int)activeFetchEvents;
- (void)addFetchEvents:(unsigned int)arg1;
- (void)addPostFetchFilter:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)availableElements;
- (id)closestElementToElement:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)currentApps;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (BOOL)didSendFakeScreenChangeOnLastFetch;
- (void)disableEventManagement;
- (id)elementCache;
- (id)elementGroupPruner;
- (int)elementGroupingHeuristics;
- (void)enableEventManagement;
- (void)fetchEventOccurred:(unsigned int)arg1;
- (id)fetchObservers;
- (id)findElementMatchingBlock:(id /* block */)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)findElementsMatchingBlock:(id /* block */)arg1;
- (id)findGroupableMatchingBlock:(id /* block */)arg1;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)firstElement;
- (id)firstKeyboardRow;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned int)arg2 enableEventManagement:(BOOL)arg3 enableGrouping:(BOOL)arg4 shouldIncludeNonScannerElements:(BOOL)arg5 beginEnabled:(BOOL)arg6;
- (BOOL)isEnabled;
- (BOOL)isEventManagementEnabled;
- (BOOL)isFetchingElements;
- (BOOL)isGroupingEnabled;
- (id)keyboardGroup;
- (id)keyboardGroupCache;
- (id)lastElement;
- (id)lastKeyboardRow;
- (id)nativeFocusElement;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2;
- (id)postFetchFilters;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(BOOL*)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(BOOL*)arg2;
- (void)refresh;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
- (void)removeAllPostFetchFilters;
- (void)removeFetchEvents:(unsigned int)arg1;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (id)rootGroup;
- (id)rootGroupCache;
- (void)setActiveFetchEvents:(unsigned int)arg1;
- (void)setCurrentApps:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendFakeScreenChangeOnLastFetch:(BOOL)arg1;
- (void)setElementCache:(id)arg1;
- (void)setElementGroupingHeuristics:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setEventManagementEnabled:(BOOL)arg1;
- (void)setFetchObservers:(id)arg1;
- (void)setFetchingElements:(BOOL)arg1;
- (void)setGroupingEnabled:(BOOL)arg1;
- (void)setKeyboardGroupCache:(id)arg1;
- (void)setPostFetchFilters:(id)arg1;
- (void)setRootGroupCache:(id)arg1;
- (void)setShouldIncludeNonScannerElements:(BOOL)arg1;
- (void)setVisualElementGrouper:(id)arg1;
- (BOOL)shouldIncludeNonScannerElements;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (id)visualElementGrouper;
- (BOOL)willFetchElements;

@end

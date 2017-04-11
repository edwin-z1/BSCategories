/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDAttribute : NSObject {
    unsigned short  _admissionMask;
    NSObject<OS_dispatch_queue> * _deferredRequestsQ;
    NSString * _fullName;
    unsigned long long  _integerId;
    NSString * _name;
    CDSession * _session;
    CDSession * _sessionStrong;
    CDSession * _sessionWeak;
    int  _type;
    NSMutableArray * activeReports;
    NSMutableDictionary * admissionCache;
    NSObject<OS_dispatch_queue> * admissionCacheQueue;
    int  conditionChangeToken;
    NSMutableDictionary * costCache;
    NSMutableDictionary * dateCache;
    BOOL  delayedUpdatePending;
    int  focalAppToken;
    NSDate * lastUpdate;
    int  localFocalInfoToken;
    int  resourceCallToken;
    NSMutableArray * resourceCallbackList;
    NSObject<OS_dispatch_queue> * resourceCallbackQueue;
    NSMutableArray * revocationCallbackList;
    int  revocationToken;
    int  systemConditionChangeToken;
    NSMutableDictionary * tokenCache;
}

@property (readonly) NSObject<OS_dispatch_queue> *deferredRequestsQ;
@property (readonly) NSString *fullName;
@property (readonly) unsigned long long integerId;
@property (readonly) NSString *name;
@property (readonly) CDSession *sessionStrong;
@property (readonly) CDSession *sessionWeak;
@property (readonly) int type;

- (void).cxx_destruct;
- (id)_initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 weak:(BOOL)arg5 error:(id*)arg6;
- (BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3;
- (BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4;
- (BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3;
- (BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4;
- (BOOL)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (void)addAdmissionValidity:(id)arg1 validity:(long long)arg2;
- (BOOL)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(int)arg4 options:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
- (BOOL)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(int)arg4 options:(id)arg5 error:(id*)arg6 handler:(id /* block */)arg7;
- (BOOL)admissionCheckOfValue:(id)arg1 type:(int)arg2 options:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (void)admissionCheckOfValueAsync:(id)arg1 type:(int)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(id /* block */)arg5;
- (BOOL)associateToBudget:(id)arg1 error:(id*)arg2;
- (BOOL)attributeIsClientWriteable;
- (BOOL)backgroundLaunchStartedWithValue:(id)arg1 error:(id*)arg2;
- (BOOL)backgroundLaunchStoppedWithValue:(id)arg1 error:(id*)arg2;
- (void)callListOfCallbacks:(id)arg1 oneshotCall:(BOOL)arg2 callList:(id)arg3;
- (double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)deferredRequestsQ;
- (id)description;
- (BOOL)destroyWithError:(id*)arg1;
- (id)distinctValuesForHistoryWindow:(id)arg1 error:(id*)arg2;
- (id)fullName;
- (id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id*)arg3;
- (id)histogramForHistoryWindow:(id)arg1 error:(id*)arg2;
- (id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5;
- (id)initWithMySession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (id)initWithSession:(id)arg1 name:(id)arg2 type:(int)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (unsigned long long)integerId;
- (long long)isAdmissionValid:(id)arg1;
- (BOOL)isBypassClientForValue:(id)arg1;
- (void)meteringInsertCachedToken:(id)arg1 meteringToken:(unsigned long long)arg2;
- (unsigned int)meteringIsActive:(id)arg1;
- (id)meteringLookupCachedToken:(id)arg1;
- (unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id*)arg4;
- (BOOL)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5;
- (BOOL)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5;
- (id)name;
- (BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3;
- (BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4;
- (BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 deferredRequest:(BOOL)arg6 error:(id*)arg7;
- (BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 error:(id*)arg6;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7;
- (id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5;
- (id)peerForecastXPCObjectToDictionary:(id)arg1 attributeValue:(id)arg2 error:(id*)arg3;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4;
- (id)repeatedStatistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;
- (id)repeatedStatisticXPCObjectToArray:(id)arg1 error:(id*)arg2;
- (BOOL)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(int)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
- (BOOL)requestStatisticFromDevice:(id)arg1 statistic:(int)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 handler:(id /* block */)arg5;
- (BOOL)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(int)arg4 error:(id*)arg5 handler:(id /* block */)arg6;
- (BOOL)reset:(int)arg1 error:(id*)arg2;
- (BOOL)resetAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2;
- (id)session;
- (id)sessionStrong;
- (id)sessionWeak;
- (BOOL)setAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2;
- (BOOL)setAdmissionRevocationBlockWithError:(id*)arg1 handler:(id /* block */)arg2;
- (BOOL)setCategory:(int)arg1 error:(id*)arg2;
- (BOOL)setResourceAvailabilityBlockWithError:(id*)arg1 handler:(id /* block */)arg2;
- (BOOL)setResourceDispatch:(id*)arg1;
- (BOOL)setRevocationDispatch;
- (BOOL)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4;
- (id)statistic:(int)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;
- (void)stuffDictionary:(id*)arg1 forStatisticType:(int)arg2 matchingStatisticType:(int)arg3 xpcKey:(const char *)arg4 incomingXpcObject:(id)arg5;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(int)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7;
- (id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(int)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5;
- (id)temporalForecastXPCObjectToArray:(id)arg1 attributeValue:(id)arg2 forecastType:(int)arg3 error:(id*)arg4;
- (int)type;
- (id)updateCostOnDownload:(id)arg1 meteringToken:(unsigned long long)arg2 date:(id)arg3;
- (void)updateDuetWithCost;

@end

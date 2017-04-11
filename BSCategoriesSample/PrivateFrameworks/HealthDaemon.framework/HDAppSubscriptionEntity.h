/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAppSubscriptionEntity : HDHealthEntity

+ (BOOL)_getSubscriptionsWithArray:(id)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)_predicateForBundleID:(id)arg1 dataCode:(int)arg2;
+ (id)_predicateForBundleIdentifier:(id)arg1;
+ (id)_predicateForDataCode:(int)arg1;
+ (BOOL)addSubscriptionWithBundleID:(id)arg1 dataCode:(int)arg2 updateFrequency:(unsigned long long)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)allSubscriptionsForBundleID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)allSubscriptionsForType:(int)arg1 healthDaemon:(id)arg2 error:(id*)arg3;
+ (id)columnsDefinition;
+ (id)databaseTable;
+ (int)protectionClass;
+ (BOOL)removeSubscriptionsWithBundleID:(id)arg1 dataCode:(int)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (BOOL)setLastAnchor:(id)arg1 lastAckTime:(id)arg2 forBundleID:(id)arg3 dataCode:(int)arg4 healthDaemon:(id)arg5 error:(id*)arg6;
+ (BOOL)setLaunchTimeHysteresis:(id)arg1 forBundleID:(id)arg2 dataCode:(int)arg3 healthDaemon:(id)arg4 error:(id*)arg5;
+ (id)subscriptionForBundleID:(id)arg1 dataCode:(int)arg2 healthDaemon:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end

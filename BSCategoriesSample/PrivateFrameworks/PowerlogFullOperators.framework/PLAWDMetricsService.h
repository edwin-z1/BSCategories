/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface PLAWDMetricsService : PLService {
    AWDServerConnection * _awdServerConn;
    NSMutableDictionary * _classDictionary;
    NSMutableSet * _currRunningMetrics;
    NSMutableSet * _updateRunningMetrics;
}

@property (retain) AWDServerConnection *awdServerConn;
@property (retain) NSMutableDictionary *classDictionary;
@property (retain) NSMutableSet *currRunningMetrics;
@property (retain) NSMutableSet *updateRunningMetrics;

+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (void)auxClassWrapper:(id)arg1 withAction:(int)arg2;
- (id)awdServerConn;
- (id)classDictionary;
- (BOOL)connectToAWDServer;
- (id)currRunningMetrics;
- (id)init;
- (BOOL)initAWDInterface;
- (void)initOperatorDependancies;
- (void)setAwdServerConn:(id)arg1;
- (void)setClassDictionary:(id)arg1;
- (void)setCurrRunningMetrics:(id)arg1;
- (void)setUpdateRunningMetrics:(id)arg1;
- (void)threadFunc;
- (id)updateRunningMetrics;

@end

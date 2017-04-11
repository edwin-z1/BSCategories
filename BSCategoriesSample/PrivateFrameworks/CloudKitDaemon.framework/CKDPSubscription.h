/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscription : PBCodable <NSCopying> {
    int  _evaluationType;
    NSMutableArray * _filters;
    BOOL  _fireOnce;
    struct { 
        unsigned int evaluationType : 1; 
        unsigned int owner : 1; 
        unsigned int fireOnce : 1; 
    }  _has;
    CKDPIdentifier * _identifier;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _mutationTriggers;
    CKDPSubscriptionNotification * _notification;
    int  _owner;
    NSMutableArray * _recordTypes;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic) int evaluationType;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic) BOOL fireOnce;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) BOOL hasFireOnce;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasNotification;
@property (nonatomic) BOOL hasOwner;
@property (nonatomic, readonly) BOOL hasZoneIdentifier;
@property (nonatomic, retain) CKDPIdentifier *identifier;
@property (nonatomic, readonly) int*mutationTriggers;
@property (nonatomic, readonly) unsigned int mutationTriggersCount;
@property (nonatomic, retain) CKDPSubscriptionNotification *notification;
@property (nonatomic) int owner;
@property (nonatomic, retain) NSMutableArray *recordTypes;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (Class)filtersType;
+ (Class)recordTypesType;

- (void).cxx_destruct;
- (int)StringAsEvaluationType:(id)arg1;
- (int)StringAsMutationTriggers:(id)arg1;
- (int)StringAsOwner:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addMutationTriggers:(int)arg1;
- (void)addRecordTypes:(id)arg1;
- (void)clearFilters;
- (void)clearMutationTriggers;
- (void)clearRecordTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)evaluationType;
- (id)evaluationTypeAsString:(int)arg1;
- (id)filters;
- (id)filtersAtIndex:(unsigned int)arg1;
- (unsigned int)filtersCount;
- (BOOL)fireOnce;
- (BOOL)hasEvaluationType;
- (BOOL)hasFireOnce;
- (BOOL)hasIdentifier;
- (BOOL)hasNotification;
- (BOOL)hasOwner;
- (BOOL)hasZoneIdentifier;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)mutationTriggers;
- (id)mutationTriggersAsString:(int)arg1;
- (int)mutationTriggersAtIndex:(unsigned int)arg1;
- (unsigned int)mutationTriggersCount;
- (id)notification;
- (int)owner;
- (id)ownerAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordTypes;
- (id)recordTypesAtIndex:(unsigned int)arg1;
- (unsigned int)recordTypesCount;
- (void)setEvaluationType:(int)arg1;
- (void)setFilters:(id)arg1;
- (void)setFireOnce:(BOOL)arg1;
- (void)setHasEvaluationType:(BOOL)arg1;
- (void)setHasFireOnce:(BOOL)arg1;
- (void)setHasOwner:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMutationTriggers:(int*)arg1 count:(unsigned int)arg2;
- (void)setNotification:(id)arg1;
- (void)setOwner:(int)arg1;
- (void)setRecordTypes:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end

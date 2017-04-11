/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying> {
    double  _confidence;
    NSData * _geoData;
    struct { 
        unsigned int confidence : 1; 
        unsigned int nextEntryTime : 1; 
        unsigned int modeOfTransportation : 1; 
        unsigned int sourceType : 1; 
    }  _has;
    HDCodableRoutineLocation * _locationOfInterest;
    int  _modeOfTransportation;
    double  _nextEntryTime;
    int  _sourceType;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSData *geoData;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic, readonly) BOOL hasGeoData;
@property (nonatomic, readonly) BOOL hasLocationOfInterest;
@property (nonatomic) BOOL hasModeOfTransportation;
@property (nonatomic) BOOL hasNextEntryTime;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic, retain) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) int sourceType;

- (void).cxx_destruct;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoData;
- (BOOL)hasConfidence;
- (BOOL)hasGeoData;
- (BOOL)hasLocationOfInterest;
- (BOOL)hasModeOfTransportation;
- (BOOL)hasNextEntryTime;
- (BOOL)hasSourceType;
- (unsigned int)hash;
- (id)initWithPredictedLocationOfInterest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locationOfInterest;
- (void)mergeFrom:(id)arg1;
- (int)modeOfTransportation;
- (double)nextEntryTime;
- (BOOL)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setGeoData:(id)arg1;
- (void)setHasConfidence:(BOOL)arg1;
- (void)setHasModeOfTransportation:(BOOL)arg1;
- (void)setHasNextEntryTime:(BOOL)arg1;
- (void)setHasSourceType:(BOOL)arg1;
- (void)setLocationOfInterest:(id)arg1;
- (void)setModeOfTransportation:(int)arg1;
- (void)setNextEntryTime:(double)arg1;
- (void)setSourceType:(int)arg1;
- (int)sourceType;
- (void)writeTo:(id)arg1;

@end

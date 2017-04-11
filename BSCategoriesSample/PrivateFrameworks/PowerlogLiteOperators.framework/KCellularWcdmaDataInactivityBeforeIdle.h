/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularWcdmaDataInactivityBeforeIdle : PBCodable <NSCopying> {
    unsigned int  _dataInactivityDurMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int dataInactivityDurMs : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int dataInactivityDurMs;
@property (nonatomic) BOOL hasDataInactivityDurMs;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataInactivityDurMs;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDataInactivityDurMs;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDataInactivityDurMs:(unsigned int)arg1;
- (void)setHasDataInactivityDurMs:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

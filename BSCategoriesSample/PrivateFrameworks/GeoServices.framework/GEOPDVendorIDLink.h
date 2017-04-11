/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {
    NSString * _externalItemId;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _reservationTypes;
    NSString * _vendorId;
}

@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, readonly) BOOL hasExternalItemId;
@property (nonatomic, readonly) BOOL hasVendorId;
@property (nonatomic, readonly) int*reservationTypes;
@property (nonatomic, readonly) unsigned int reservationTypesCount;
@property (nonatomic, retain) NSString *vendorId;

- (int)StringAsReservationTypes:(id)arg1;
- (void)addReservationType:(int)arg1;
- (void)clearReservationTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (BOOL)hasExternalItemId;
- (BOOL)hasVendorId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)reservationTypeAtIndex:(unsigned int)arg1;
- (int*)reservationTypes;
- (id)reservationTypesAsString:(int)arg1;
- (unsigned int)reservationTypesCount;
- (void)setExternalItemId:(id)arg1;
- (void)setReservationTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setVendorId:(id)arg1;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end

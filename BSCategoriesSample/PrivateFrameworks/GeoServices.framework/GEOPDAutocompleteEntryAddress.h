/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteEntryAddress : PBCodable <NSCopying> {
    GEOLatLng * _center;
    struct { 
        unsigned int opaqueGeoId : 1; 
    }  _has;
    unsigned long long  _opaqueGeoId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) BOOL hasCenter;
@property (nonatomic) BOOL hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (id)center;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCenter;
- (BOOL)hasOpaqueGeoId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)opaqueGeoId;
- (BOOL)readFrom:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasOpaqueGeoId:(BOOL)arg1;
- (void)setOpaqueGeoId:(unsigned long long)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

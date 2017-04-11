/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStaleResourceEntry : PBCodable <NSCopying> {
    int  _ageInSeconds;
    NSString * _canonicalName;
    NSString * _desiredName;
    struct { 
        unsigned int ageInSeconds : 1; 
    }  _has;
    NSString * _storedName;
}

@property (nonatomic) int ageInSeconds;
@property (nonatomic, retain) NSString *canonicalName;
@property (nonatomic, retain) NSString *desiredName;
@property (nonatomic) BOOL hasAgeInSeconds;
@property (nonatomic, readonly) BOOL hasCanonicalName;
@property (nonatomic, readonly) BOOL hasDesiredName;
@property (nonatomic, readonly) BOOL hasStoredName;
@property (nonatomic, retain) NSString *storedName;

- (int)ageInSeconds;
- (id)canonicalName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)desiredName;
- (id)dictionaryRepresentation;
- (BOOL)hasAgeInSeconds;
- (BOOL)hasCanonicalName;
- (BOOL)hasDesiredName;
- (BOOL)hasStoredName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAgeInSeconds:(int)arg1;
- (void)setCanonicalName:(id)arg1;
- (void)setDesiredName:(id)arg1;
- (void)setHasAgeInSeconds:(BOOL)arg1;
- (void)setStoredName:(id)arg1;
- (id)storedName;
- (void)writeTo:(id)arg1;

@end

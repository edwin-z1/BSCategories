/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSTouchMessage : PBCodable <NSCopying> {
    int  _direction;
    struct { 
        unsigned int direction : 1; 
        unsigned int repeatCount : 1; 
        unsigned int sessionIdentifier : 1; 
    }  _has;
    unsigned int  _repeatCount;
    int  _sessionIdentifier;
}

@property (nonatomic) int direction;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) BOOL hasRepeatCount;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) unsigned int repeatCount;
@property (nonatomic) int sessionIdentifier;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (BOOL)hasDirection;
- (BOOL)hasRepeatCount;
- (BOOL)hasSessionIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)repeatCount;
- (int)sessionIdentifier;
- (void)setDirection:(int)arg1;
- (void)setHasDirection:(BOOL)arg1;
- (void)setHasRepeatCount:(BOOL)arg1;
- (void)setHasSessionIdentifier:(BOOL)arg1;
- (void)setRepeatCount:(unsigned int)arg1;
- (void)setSessionIdentifier:(int)arg1;
- (void)writeTo:(id)arg1;

@end

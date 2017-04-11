/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSecureElementSetNewAuthRandomResponse : PBCodable <NSCopying> {
    NSData * _challengeResponse;
    NSData * _cryptogram;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    BOOL  _pending;
    BOOL  _success;
}

@property (nonatomic, retain) NSData *challengeResponse;
@property (nonatomic, retain) NSData *cryptogram;
@property (nonatomic, readonly) BOOL hasChallengeResponse;
@property (nonatomic, readonly) BOOL hasCryptogram;
@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL success;

- (void).cxx_destruct;
- (id)challengeResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cryptogram;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasChallengeResponse;
- (BOOL)hasCryptogram;
- (BOOL)hasPending;
- (BOOL)hasSuccess;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)pending;
- (BOOL)readFrom:(id)arg1;
- (void)setChallengeResponse:(id)arg1;
- (void)setCryptogram:(id)arg1;
- (void)setHasPending:(BOOL)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setPending:(BOOL)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (void)writeTo:(id)arg1;

@end

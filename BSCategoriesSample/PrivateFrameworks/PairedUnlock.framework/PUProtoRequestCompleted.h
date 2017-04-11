/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PUProtoRequestCompleted : PBCodable <NSCopying> {
    NSData * _errorData;
    unsigned int  _messageID;
    BOOL  _success;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) BOOL hasErrorData;
@property (nonatomic) unsigned int messageID;
@property (nonatomic) BOOL success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (BOOL)hasErrorData;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageID;
- (BOOL)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setMessageID:(unsigned int)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)success;
- (void)writeTo:(id)arg1;

@end

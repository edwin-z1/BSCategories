/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveAncestorsResponseAncestor : PBCodable <NSCopying> {
    NSData * _parentChainPrivateKey;
    CKDPProtectionInfo * _parentChainProtectionInfo;
    CKDPRecordIdentifier * _parentIdentifier;
    CKDPProtectionInfo * _parentRecordProtectionInfo;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, readonly) BOOL hasParentChainPrivateKey;
@property (nonatomic, readonly) BOOL hasParentChainProtectionInfo;
@property (nonatomic, readonly) BOOL hasParentIdentifier;
@property (nonatomic, readonly) BOOL hasParentRecordProtectionInfo;
@property (nonatomic, readonly) BOOL hasRecordIdentifier;
@property (nonatomic, retain) NSData *parentChainPrivateKey;
@property (nonatomic, retain) CKDPProtectionInfo *parentChainProtectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *parentIdentifier;
@property (nonatomic, retain) CKDPProtectionInfo *parentRecordProtectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasParentChainPrivateKey;
- (BOOL)hasParentChainProtectionInfo;
- (BOOL)hasParentIdentifier;
- (BOOL)hasParentRecordProtectionInfo;
- (BOOL)hasRecordIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parentChainPrivateKey;
- (id)parentChainProtectionInfo;
- (id)parentIdentifier;
- (id)parentRecordProtectionInfo;
- (BOOL)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setParentChainPrivateKey:(id)arg1;
- (void)setParentChainProtectionInfo:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)setParentRecordProtectionInfo:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

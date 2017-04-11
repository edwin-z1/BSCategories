/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {
    NSString * _applicationBundleIdentifier;
    NSString * _applicationBundleVersion;
    struct { 
        unsigned int protocolVersion : 1; 
    }  _has;
    NSString * _localizedModelName;
    NSString * _name;
    unsigned long long  _protocolVersion;
    NSString * _systemBuildVersion;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, retain) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) NSString *applicationBundleVersion;
@property (nonatomic, readonly) BOOL hasApplicationBundleIdentifier;
@property (nonatomic, readonly) BOOL hasApplicationBundleVersion;
@property (nonatomic, readonly) BOOL hasLocalizedModelName;
@property (nonatomic, readonly) BOOL hasName;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic, readonly) BOOL hasSystemBuildVersion;
@property (nonatomic, readonly) BOOL hasUniqueIdentifier;
@property (nonatomic, retain) NSString *localizedModelName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long protocolVersion;
@property (nonatomic, retain) NSString *systemBuildVersion;
@property (nonatomic, retain) NSString *uniqueIdentifier;

- (id)applicationBundleIdentifier;
- (id)applicationBundleVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasApplicationBundleIdentifier;
- (BOOL)hasApplicationBundleVersion;
- (BOOL)hasLocalizedModelName;
- (BOOL)hasName;
- (BOOL)hasProtocolVersion;
- (BOOL)hasSystemBuildVersion;
- (BOOL)hasUniqueIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedModelName;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned long long)protocolVersion;
- (BOOL)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setApplicationBundleVersion:(id)arg1;
- (void)setHasProtocolVersion:(BOOL)arg1;
- (void)setLocalizedModelName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProtocolVersion:(unsigned long long)arg1;
- (void)setSystemBuildVersion:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)systemBuildVersion;
- (id)uniqueIdentifier;
- (void)writeTo:(id)arg1;

@end

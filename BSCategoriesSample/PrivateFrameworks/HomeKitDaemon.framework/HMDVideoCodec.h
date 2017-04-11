/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDVideoCodec : HMDNumberParser <NSCopying, NSSecureCoding> {
    int  _codecType;
}

@property (nonatomic, readonly) int codecType;

+ (id)arrayWithCodecTypes:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (int)codecType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCodec:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTLVData:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

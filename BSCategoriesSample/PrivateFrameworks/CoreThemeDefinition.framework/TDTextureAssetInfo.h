/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDTextureAssetInfo : NSObject <NSCopying> {
    NSURL * _fileURL;
    BOOL  _flipped;
    unsigned int  _mipLevel;
    int  _textureFace;
}

@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) BOOL flipped;
@property (nonatomic) unsigned int mipLevel;
@property (nonatomic, copy) NSURL *mipsURL;
@property (nonatomic) int textureFace;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fileURL;
- (BOOL)flipped;
- (unsigned int)mipLevel;
- (id)mipsURL;
- (void)setFileURL:(id)arg1;
- (void)setFlipped:(BOOL)arg1;
- (void)setMipLevel:(unsigned int)arg1;
- (void)setMipsURL:(id)arg1;
- (void)setTextureFace:(int)arg1;
- (int)textureFace;

@end

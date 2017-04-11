/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVideoListing : NSObject <NSCopying, NTKAVListing> {
    int  _clip;
    UIImage * _image;
    BOOL  _loops;
    NSString * _name;
    UIColor * _overlayColor;
    unsigned int  _tags;
    unsigned int  _theme;
    NSString * _transitionImageName;
    int  _variant;
    NTKVideo * _video;
    NSString * _videoName;
}

@property (nonatomic, readonly) int clip;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIColor *overlayColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int theme;
@property (nonatomic, readonly) int variant;
@property (nonatomic, readonly) NTKVideo *video;

- (void).cxx_destruct;
- (void)_setHasAssets;
- (int)clip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)discardAssets;
- (BOOL)hasTag:(unsigned int)arg1;
- (id)image;
- (id)initWithName:(id)arg1 videoName:(id)arg2 loops:(BOOL)arg3 transitionImageName:(id)arg4 overlayColor:(id)arg5 theme:(unsigned int)arg6 variant:(int)arg7 clip:(int)arg8 tags:(unsigned int)arg9;
- (id)overlayColor;
- (BOOL)snapshotDiffers:(id)arg1;
- (unsigned int)theme;
- (int)variant;
- (id)video;

@end

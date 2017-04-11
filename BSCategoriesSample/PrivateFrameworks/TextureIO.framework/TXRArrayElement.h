/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRArrayElement : NSObject <NSCopying> {
    NSMutableArray * _faces;
}

@property (readonly) NSArray *faces;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)faces;
- (id)initAsLevel:(unsigned int)arg1 element:(unsigned int)arg2 cubemap:(BOOL)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(void *)arg1 element:(void *)arg2 dimensions:(void *)arg3 pixelFormat:(void *)arg4 alphaInfo:(void *)arg5 cubemap:(void *)arg6 bufferAllocator:(void *)arg7; // needs 7 arg types, found 6: unsigned int, unsigned int, unsigned int, unsigned int, BOOL, id
- (void)setImage:(id)arg1 atFace:(unsigned int)arg2;

@end

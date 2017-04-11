/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCroppedWallpaperInfo : NSObject <NSCopying> {
    struct CGPoint { 
        float x; 
        float y; 
    }  _center;
    float  _scale;
    int  _source;
}

@property (nonatomic, readonly) struct CGPoint { float x1; float x2; } center;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) int source;

- (struct CGPoint { float x1; float x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSource:(int)arg1 center:(struct CGPoint { float x1; float x2; })arg2 scale:(float)arg3;
- (BOOL)isEqual:(id)arg1;
- (float)scale;
- (int)source;

@end

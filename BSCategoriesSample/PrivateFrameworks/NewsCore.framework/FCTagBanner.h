/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagBanner : NSObject {
    FCAssetHandle * _assetHandle;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _insets;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
}

@property (nonatomic, readonly) FCAssetHandle *assetHandle;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } size;

- (void).cxx_destruct;
- (id)assetHandle;
- (id)initWithAssetHandle:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 insets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (struct CGSize { float x1; float x2; })size;

@end

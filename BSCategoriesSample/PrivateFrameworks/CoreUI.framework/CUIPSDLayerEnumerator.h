/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEnumerator : NSEnumerator {
    unsigned int  _currentIndex;
    BOOL  _isImageFile;
    CUIPSDLayerGroupRef * _layerGroup;
}

+ (id)enumeratorWithPSDImage:(id)arg1;
+ (id)enumeratorWithPSDLayerGroup:(id)arg1;

- (id)allObjects;
- (void)dealloc;
- (id)initWithPSDImage:(id)arg1;
- (id)initWithPSDLayerGroup:(id)arg1;
- (id)nextObject;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRelatedSpec : PXFeatureSpec {
    struct CGSize { 
        float width; 
        float height; 
    }  _interEntrySpacing;
    int  _numberOfColumns;
}

@property (nonatomic, readonly) struct CGSize { float x1; float x2; } interEntrySpacing;
@property (nonatomic, readonly) int numberOfColumns;

- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { int x1; unsigned int x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })interEntrySpacing;
- (int)numberOfColumns;

@end

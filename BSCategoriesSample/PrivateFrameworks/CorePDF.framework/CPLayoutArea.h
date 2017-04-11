/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPLayoutArea : CPRegion {
    BOOL  isFirstLayout;
}

- (void)accept:(id)arg1;
- (void)addColumnBreaks;
- (id)description;
- (id)init;
- (BOOL)isBoxRegion;
- (BOOL)isFirstLayout;
- (BOOL)isGraphicalRegion;
- (BOOL)isImageRegion;
- (BOOL)isRowRegion;
- (BOOL)isShapeRegion;
- (BOOL)isSimilarTo:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutAreaBounds;
- (id)properties;
- (float)selectionBottom;
- (void)setIsFirstLayout:(BOOL)arg1;
- (void)setIsImageRegion:(BOOL)arg1;

@end

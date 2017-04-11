/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem {
    float  mChartBodyWidth;
    NSString * mEditedString;
    float  mMinHitSize;
}

@property (nonatomic) float chartBodyWidth;
@property (nonatomic, copy) NSString *editedString;
@property (nonatomic) float minHitSize;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { float x1; float x2; })calcMinSize;
- (struct CGSize { float x1; float x2; })calcMinSizeForModel:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (float)chartBodyWidth;
- (void)dealloc;
- (id)editedString;
- (id)initWithParent:(id)arg1;
- (float)minHitSize;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)p_titleParagraphStyle;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForRenderingRangePtr:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1 outElementSize:(struct CGSize { float x1; float x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (void)setChartBodyWidth:(float)arg1;
- (void)setEditedString:(id)arg1;
- (void)setMinHitSize:(float)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)titleText;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingOutElementSize:(struct CGSize { float x1; float x2; }*)arg1 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 outElementSize:(struct CGSize { float x1; float x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;

@end

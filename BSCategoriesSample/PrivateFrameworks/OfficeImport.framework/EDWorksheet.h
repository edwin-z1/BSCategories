/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDWorksheet : EDSheet {
    EDColumnInfoCollection * mColumnInfos;
    EDCollection * mConditionalFormattings;
    double  mDefaultColumnWidth;
    unsigned short  mDefaultRowHeight;
    bool  mFitToPage;
    EDCollection * mHyperlinks;
    EDReference * mImplicitCellArea;
    EDReference * mMaxCellReferencedInFormulas;
    unsigned long  mMaxColumnOutlineLevel;
    unsigned long  mMaxRowOutlineLevel;
    EDMergedCellCollection * mMergedCells;
    OITSUPointerKeyDictionary * mMergedCols;
    OITSUPointerKeyDictionary * mMergedRows;
    EDPane * mPane;
    EDCollection * mPivotTables;
    EDRowBlocks * mRowBlocks;
    EDCollection * mTables;
    EDWarnings * mWorksheetWarnings;
}

- (id)columnInfos;
- (id)conditionalFormattings;
- (double)defaultColumnWidth;
- (unsigned short)defaultRowHeight;
- (id)description;
- (bool)fitToPage;
- (bool)hasMergedCells;
- (BOOL)hasMergedCol;
- (BOOL)hasMergedRow;
- (id)hyperlinks;
- (id)implicitCellArea;
- (BOOL)isColMerged:(unsigned int)arg1;
- (BOOL)isRowMerged:(unsigned int)arg1;
- (id)maxCellReferencedInFormulas;
- (unsigned long)maxColumnOutlineLevel;
- (unsigned long)maxRowOutlineLevel;
- (id)mergedCells;
- (id)mergedColRef:(unsigned int)arg1;
- (id)mergedRowRef:(unsigned int)arg1;
- (id)pane;
- (id)pivotTables;
- (void)reduceMemoryIfPossible;
- (id)rowBlocks;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(unsigned short)arg1;
- (void)setFitToPage:(bool)arg1;
- (void)setImplicitCellArea:(id)arg1;
- (void)setMaxColumnOutlineLevel:(unsigned long)arg1;
- (void)setMaxRowOutlineLevel:(unsigned long)arg1;
- (void)setMergedColsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setMergedRowsRef:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)setPane:(id)arg1;
- (void)setup;
- (id)tables;
- (void)teardown;
- (void)updateMaxColumnOutlineLevelIfNeeded:(unsigned long)arg1;
- (void)updateMaxRowOutlineLevelIfNeeded:(unsigned long)arg1;
- (id)worksheetWarnings;

@end

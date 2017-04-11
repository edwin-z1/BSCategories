/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReferenceCollection : EDCollection {
    bool  mCoalesce;
}

+ (id)coalesceCollection;
+ (id)noCoalesceCollection;

- (unsigned int)addObject:(id)arg1;
- (void)coalesce;
- (void)coalesceProgressiveCellReferencesCollection;
- (bool)coalesceReferenceAtIndex1:(unsigned int)arg1 index2:(unsigned int)arg2;
- (unsigned int)countOfCellsBeingReferenced;
- (id)init;
- (id)initWihNoCoalesce;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)referenceToCellWithIndex:(unsigned int)arg1 byRow:(bool)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (id)reverseReferencesByRow:(bool)arg1;

@end

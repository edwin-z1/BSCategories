/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTDurationNode : TSTExpressionNode {
    BOOL  mBlank;
    struct TSTDurationWrapper { 
        double timeInterval; 
        struct { 
            unsigned int mUseAutomaticUnits : 1; 
            int mDurationUnitSmallest; 
            int mDurationUnitLargest; 
            int mDurationStyle; 
        } durationFormat; 
    }  mValue;
}

@property (getter=isBlank, nonatomic) BOOL blank;
@property (nonatomic) struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; } value;

- (void)buildASTNodeArray:(/* Warning: unhandled struct encoding: '{TSCEASTNodeArray=*II@}' */ struct TSCEASTNodeArray { char *x1; unsigned int x2; unsigned int x3; id x4; }*)arg1 hostCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2 symbolTable:(struct TSCESymbolTable { id x1; struct unordered_map<SFUtility::ObjcSharedPtr<NSString>, unsigned int, TSCE::NSStringHash, TSCE::NSStringEqual, std::__1::allocator<std::__1::pair<const SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct __hash_table<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, std::__1::__unordered_map_hasher<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringHash, true>, std::__1::__unordered_map_equal<SFUtility::ObjcSharedPtr<NSString>, std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, TSCE::NSStringEqual, true>, std::__1::allocator<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<SFUtility::ObjcSharedPtr<NSString>, unsigned int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; }*)arg3;
- (id)date;
- (id)description;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })durationWrapper;
- (id)exportString;
- (id)format;
- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;
- (id)initFromArchive:(const struct DurationNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 asBlank:(BOOL)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (id)initWithContext:(id)arg1 duration:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg2 firstIndex:(unsigned int)arg3 lastIndex:(unsigned int)arg4;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (BOOL)isBlank;
- (BOOL)isEqualToExpressionNode:(id)arg1;
- (struct TSTCSENodeData { unsigned int x1; unsigned int x2; })recordHashesForSubexpressions:(id)arg1;
- (void)saveToArchive:(struct DurationNodeArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ExpressionNodeArchive {} *x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setBlank:(BOOL)arg1;
- (void)setValue:(struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })arg1;
- (id)string;
- (int)tokenType;
- (struct TSTDurationWrapper { double x1; struct { unsigned int x_2_1_1 : 1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; })value;

@end

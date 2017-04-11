/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface TTMergeableAttributedString : TTMergeableUndoString

+ (int)attributeForWritingDirection:(int)arg1;
+ (id)attributesForRun:(const struct AttributeRun { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ParagraphStyle {} *x5; unsigned int x6; unsigned int x7; struct Font {} *x8; unsigned int x9; unsigned int x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; struct Color {} *x14; struct AttachmentInfo {} *x15; unsigned long long x16; }*)arg1;
+ (void)saveAttributes:(id)arg1 toArchive:(struct AttributeRun { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ParagraphStyle {} *x5; unsigned int x6; unsigned int x7; struct Font {} *x8; unsigned int x9; unsigned int x10; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x11; int x12; int x13; struct Color {} *x14; struct AttachmentInfo {} *x15; unsigned long long x16; }*)arg2;
+ (void)saveAttributesOfString:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
+ (id)whitelistedAttributesForModel;
+ (id)whitelistedAttributesForStyle;
+ (id)whitelistedTypingAttributes;
+ (int)writingDirectionForAttribute:(int)arg1;

- (id)attributesAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (BOOL)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(BOOL*)arg3;
- (BOOL)attributesEqual:(id)arg1 toRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 modelEqual:(BOOL*)arg3;
- (id)initWithArchive:(const struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1 andReplicaID:(id)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg2;
- (void)saveToArchive:(struct String { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x5; struct RepeatedPtrField<topotext::Substring> { void **x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; } x6; struct VectorTimestamp {} *x7; struct RepeatedPtrField<topotext::AttributeRun> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<topotext::Attachment> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; }*)arg1;
- (id)serialize;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setAttributes:(id)arg1 substring:(struct TopoSubstring { struct TopoIDRange { struct TopoID { id x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; } x1; struct TopoID { id x_2_1_1; } x2; unsigned int x3; bool x4; struct vector<TopoSubstring *, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_5_1_1; struct TopoSubstring {} **x_5_1_2; struct __compressed_pair<TopoSubstring **, std::__1::allocator<TopoSubstring *> > { struct TopoSubstring {} **x_3_2_1; } x_5_1_3; } x5; unsigned int x6; }*)arg2;

@end

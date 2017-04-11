/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDrawing : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _commandBounds;
    NSMutableOrderedSet * _commands;
    int  _orientation;
    NSDate * _orientationTimestamp;
    NSUUID * _replicaUUID;
    TTVectorMultiTimestamp * _timestamp;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _unrotatedBoundsInCommandSpace;
    struct CGSize { 
        float width; 
        float height; 
    }  _unrotatedSize;
    NSMutableOrderedSet * _visibleCommands;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) BOOL canChangeTransientOrientation;
@property (nonatomic, readonly) NSOrderedSet *commands;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } fullBounds;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic) int orientation;
@property (nonatomic, retain) NSDate *orientationTimestamp;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (nonatomic, retain) TTVectorMultiTimestamp *timestamp;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } unrotatedBoundsInCommandSpace;
@property (nonatomic) struct CGSize { float x1; float x2; } unrotatedSize;
@property (nonatomic, readonly) NSOrderedSet *visibleCommands;

+ (struct CGSize { float x1; float x2; })defaultPixelSize;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })defaultSizeOrientationTransform:(int)arg1;
+ (struct CGSize { float x1; float x2; })fullSize:(struct CGSize { float x1; float x2; })arg1 forOrientation:(int)arg2;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })orientationTransform:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (void)sortCommands:(id)arg1;

- (void).cxx_destruct;
- (void)addNewCommand:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calculateCommandBounds;
- (BOOL)canChangeTransientOrientation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })commandBounds;
- (struct ICDrawingCommandID { unsigned int x1; id x2; })commandIDForNewCommand;
- (id)commands;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullBounds;
- (struct CGSize { float x1; float x2; })fullSize;
- (int)imageOrientation;
- (id)init;
- (id)initWithArchive:(const struct Drawing { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; unsigned int x6; unsigned int x7; struct RepeatedPtrField<drawing::Command> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; double x9; struct Rectangle {} *x10; }*)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithCommands:(id)arg1 fromDrawing:(id)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithData:(id)arg1 version:(unsigned int)arg2 andReplicaID:(id)arg3;
- (id)initWithDrawing:(id)arg1;
- (id)initWithReplicaID:(id)arg1;
- (id)insertNewTestCommand;
- (void)invalidateBounds;
- (unsigned int)mergeWithDrawing:(id)arg1;
- (id)mutableCommands;
- (int)orientation;
- (id)orientationTimestamp;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })orientationTransform;
- (id)replicaUUID;
- (unsigned int)saveToArchive:(struct Drawing { int (**x1)(); struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { unsigned int x_1_5_1; unsigned int x_1_5_2; char *x_1_5_3; } x_1_4_1; struct __short { union { unsigned char x_1_6_1; BOOL x_1_6_2; } x_2_5_1; BOOL x_2_5_2[11]; } x_1_4_2; struct __raw { unsigned long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; unsigned int x3[1]; int x4; struct VectorTimestamp {} *x5; unsigned int x6; unsigned int x7; struct RepeatedPtrField<drawing::Command> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; double x9; struct Rectangle {} *x10; }*)arg1 withPathData:(BOOL)arg2;
- (id)serializeWithPathData:(BOOL)arg1;
- (id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned int*)arg2;
- (id)setCommand:(id)arg1 hidden:(BOOL)arg2;
- (void)setCommandIDForInsertion:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientationTimestamp:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (BOOL)setTransientOrientation:(int)arg1;
- (void)setUnrotatedBoundsInCommandSpace:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setUnrotatedSize:(struct CGSize { float x1; float x2; })arg1;
- (void)sortCommands;
- (void)takeOrientationFrom:(id)arg1;
- (id)timestamp;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unrotatedBoundsInCommandSpace;
- (struct CGSize { float x1; float x2; })unrotatedSize;
- (id)visibleCommandForInsertingCommand:(id)arg1;
- (id)visibleCommands;

@end

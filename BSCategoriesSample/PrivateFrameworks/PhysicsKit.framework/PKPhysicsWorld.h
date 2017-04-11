/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsWorld : NSObject <NSCoding> {
    double  _accumulatedDt;
    NSMutableArray * _bodies;
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    }  _contactListener;
    bool  _doSleep;
    struct b2Vec2 { 
        float x; 
        float y; 
    }  _gravity;
    NSMutableArray * _joints;
    NSMutableArray * _postStepBlocks;
    float  _speed;
    struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; } x3; } * _world;
    struct PKDebugDrawPacket { 
        struct vector<PKPoint, std::__1::allocator<PKPoint> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _linePoints; 
        struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { 
            struct { /* ? */ } *__begin_; 
            struct { /* ? */ } *__end_; 
            struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { 
                struct { /* ? */ } *__first_; 
            } __end_cap_; 
        } _colors; 
    }  drawPacket;
}

@property (nonatomic, retain) NSMutableArray *_bodies;
@property (nonatomic) bool _doSleep;
@property (nonatomic) struct b2Vec2 { float x1; float x2; } _gravity;
@property (nonatomic, readonly) struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; /* Warning: unhandled struct encoding: '{unordered_set<int' */ struct x_3_1_4; } x3; }*_world; /* unknown property attribute:  std::__1::allocator<QuadTree *> >=^^{QuadTree}}}}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{PKCAether={vector<std::__1::weak_ptr<PKCField>' */ struct *aether; /* unknown property attribute:  std::__1::allocator<std::__1::weak_ptr<PKCField> > >=^{weak_ptr<PKCField>}}}} */
@property (nonatomic) <PKPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) struct CGVector { float x1; float x2; } gravity;
@property (nonatomic) float speed;
@property (nonatomic) float velocityThreshold;

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (id)world;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__init__;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)_runBlockOutsideOfTimeStep:(id /* block */)arg1;
- (struct b2World { struct b2StackAllocator { BOOL x_1_1_1[102400]; int x_1_1_2; int x_1_1_3; int x_1_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; bool x_5_2_3; } x_1_1_5[32]; int x_1_1_6; } x1; int x2; struct b2ContactManager { struct b2ContactListener {} *x_3_1_1; int x_3_1_2; struct b2DynamicTree { int x_3_2_1; struct b2TreeNode {} *x_3_2_2; int x_3_2_3; int x_3_2_4; int x_3_2_5; unsigned int x_3_2_6; int x_3_2_7; } x_3_1_3; struct unordered_set<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct __hash_table<int, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<int> > { struct unique_ptr<std::__1::__hash_node<int, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<int, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > > { struct __hash_node<int, void *> {} **x_1_5_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<int, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<int, void *> *> > { unsigned long x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<int, void *> *>, std::__1::allocator<std::__1::__hash_node<int, void *> > > { struct __hash_node_base<std::__1::__hash_node<int, void *> *> { struct __hash_node<int, void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::hash<int> > { unsigned long x_3_4_1; } x_1_3_3; struct __compressed_pair<float, std::__1::equal_to<int> > { float x_4_4_1; } x_1_3_4; } x_4_2_1; } x_3_1_4; } x3; }*)_world;
- (void)addBody:(id)arg1;
- (void)addField:(id)arg1;
- (void)addJoint:(id)arg1;
- (struct PKCAether { struct vector<std::__1::weak_ptr<PKCField>, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_1_1_1; struct weak_ptr<PKCField> {} *x_1_1_2; struct __compressed_pair<std::__1::weak_ptr<PKCField> *, std::__1::allocator<std::__1::weak_ptr<PKCField> > > { struct weak_ptr<PKCField> {} *x_3_2_1; } x_1_1_3; } x1; }*)aether;
- (id)bodies;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)collisionDelegate;
- (id)contactDelegate;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)debugDraw:(float)arg1 matrix:(union _GLKMatrix4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg2 showsPhysics:(bool)arg3 showsOutlineInterior:(bool)arg4 showsFields:(bool)arg5;
- (const struct PKDebugDrawPacket { struct vector<PKPoint, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_1_1_1; struct { /* ? */ } *x_1_1_2; struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_3_2_1; } x_1_1_3; } x1; struct vector<PKDebugDrawPacket::color4, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<PKDebugDrawPacket::color4 *, std::__1::allocator<PKDebugDrawPacket::color4> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; }*)debugDrawPacket;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct CGVector { float x1; float x2; })evalForce:(unsigned int)arg1 point:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGVector { float x1; float x2; })gravity;
- (BOOL)hasBodies;
- (BOOL)hasFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)joints;
- (void)removeAllBodies;
- (void)removeAllFields;
- (void)removeAllJoints;
- (void)removeBody:(id)arg1;
- (void)removeField:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { float x1; float x2; })sampleFields:(struct CGPoint { float x1; float x2; })arg1;
- (id)sampleFields:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 categories:(unsigned int)arg2 dataSize:(struct CGSize { float x1; float x2; })arg3;
- (void)sampleFieldsAt;
- (void)setCollisionDelegate:(id)arg1;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct CGVector { float x1; float x2; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setVelocityThreshold:(float)arg1;
- (void)set_bodies:(id)arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (float)speed;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (float)velocityThreshold;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (BOOL)isKindOfClass:(Class)arg1;

@end

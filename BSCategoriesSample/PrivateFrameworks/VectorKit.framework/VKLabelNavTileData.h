/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavTileData : NSObject {
    BOOL  _foundTileEdgeJunctions;
    NSMapTable * _geoJunctionToJunctionMap;
    struct vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo> > { 
        struct LabelNavJunctionInfo {} *__begin_; 
        struct LabelNavJunctionInfo {} *__end_; 
        struct __compressed_pair<LabelNavJunctionInfo *, std::__1::allocator<LabelNavJunctionInfo> > { 
            struct LabelNavJunctionInfo {} *__first_; 
        } __end_cap_; 
    }  _junctionInfos;
    NSMutableArray * _oppositeCarriagewayJunctions;
    BOOL  _oppositeCarriagewayJunctionsValid;
    VKLabelTile * _tile;
    NSMutableArray * _tileEdgeJunctions;
}

@property (nonatomic, readonly, retain) NSMutableArray *oppositeCarriagewayJunctions;
@property (nonatomic) BOOL oppositeCarriagewayJunctionsValid;
@property (nonatomic, readonly, retain) VKLabelTile *tile;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
- (void)appendNavJunctionsInWorldRect:(const struct Box<double, 2> { struct Matrix<double, 2, 1> { double x_1_1_1[2]; } x1; struct Matrix<double, 2, 1> { double x_2_1_1[2]; } x2; }*)arg1 junctions:(id)arg2;
- (void)dealloc;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> >, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; }*)arg1 distanceThreshold:(double)arg2;
- (id)findTileEdgeJunctionAtCoordinate:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (id)initWithTile:(id)arg1;
- (void)initializeJunctionInfos;
- (id)junctionAtCoordinate:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (id)junctionForGeoJunction:(struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg1;
- (id)oppositeCarriagewayJunctions;
- (BOOL)oppositeCarriagewayJunctionsValid;
- (void)setOppositeCarriagewayJunctionsValid:(BOOL)arg1;
- (id)tile;

@end

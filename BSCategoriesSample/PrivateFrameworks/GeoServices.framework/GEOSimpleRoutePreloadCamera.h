/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSimpleRoutePreloadCamera : NSObject <GEORoutePreloadCamera> {
    unsigned int  _zoomLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)implicateTilesForCoordinate:(struct { double x1; double x2; })arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(BOOL)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;
- (id)initWithZoomLevel:(unsigned int)arg1;
- (unsigned int)zoomLevel;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightFactory_FlightStats : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (void)extractTimeForFlightStep:(id)arg1 fromTimes:(id)arg2 departure:(BOOL)arg3;
+ (id)extractTimeGate:(id)arg1 runwayTime:(id)arg2;
+ (void)loadFlightDataWithFlightNumber:(int)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(int)arg4 completionHandler:(id /* block */)arg5;
+ (void)loadFlightsWithNumber:(unsigned int)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(int)arg4 completionHandler:(id /* block */)arg5;
+ (int)statusFromString:(id)arg1;

- (id)parseFlightData:(id)arg1 withError:(id*)arg2;

@end

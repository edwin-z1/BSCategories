/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsResponseStationGroup : NSObject {
    NSDictionary * _responseDictionary;
}

@property (getter=isActive, nonatomic, readonly) BOOL active;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly, copy) NSArray *stationDictionaries;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (BOOL)isActive;
- (id)localizedTitle;
- (id)stationDictionaries;

@end

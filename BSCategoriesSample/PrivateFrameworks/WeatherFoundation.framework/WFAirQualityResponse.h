/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFAirQualityResponse : WFResponse <NSSecureCoding> {
    WFAirQualityConditions * _airQualityConditions;
    NSData * _rawAPIData;
    BOOL  _responseWasFromCache;
}

@property (retain) WFAirQualityConditions *airQualityConditions;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) BOOL responseWasFromCache;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airQualityConditions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rawAPIData;
- (BOOL)responseWasFromCache;
- (void)setAirQualityConditions:(id)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setResponseWasFromCache:(BOOL)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
    NSLock * _lock;
    SSMutableURLRequestProperties * _properties;
}

@property (retain) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (retain) NSString *HTTPMethod;
@property int URLBagType;
@property (retain) NSArray *URLs;
@property int allowedRetryCount;
@property (retain) NSString *appleClientApplication;
@property unsigned int cachePolicy;
@property (retain) NSDictionary *customHeaders;
@property long long expectedContentLength;
@property (readonly) NSURL *primaryURL;
@property (retain) NSDictionary *queryStringDictionary;
@property double timeoutInterval;

+ (id)requestWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPMethod;
- (int)URLBagType;
- (id)URLs;
- (id)_initCommon;
- (int)allowedRetryCount;
- (id)appleClientApplication;
- (unsigned int)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHeaders;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)primaryURL;
- (id)queryStringDictionary;
- (id)requestProperties;
- (void)setAllowedRetryCount:(int)arg1;
- (void)setAppleClientApplication:(id)arg1;
- (void)setCachePolicy:(unsigned int)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURLBagType:(int)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (double)timeoutInterval;

@end

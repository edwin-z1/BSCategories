/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARRequest : NSObject <NSSecureCoding> {
    unsigned long long  _clientQueryId;
    NSDictionary * _headerItems;
    NSString * _keyboardInputMode;
    NSString * _keyboardLocale;
    long long  _queryId;
    NSArray * _queryItems;
    float  _scale;
    unsigned int  _triggerEvent;
    BOOL  _verboseReply;
}

@property (nonatomic) unsigned long long clientQueryId;
@property (nonatomic, copy) NSDictionary *headerItems;
@property (nonatomic, copy) NSString *keyboardInputMode;
@property (nonatomic, copy) NSString *keyboardLocale;
@property (nonatomic) long long queryId;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic) float scale;
@property (nonatomic) unsigned int triggerEvent;
@property (nonatomic) BOOL verboseReply;

+ (id)cardRequestWithURL:(id)arg1;
+ (id)cardRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)flightRequestForId:(id)arg1;
+ (id)flightRequestForQuery:(id)arg1 timezone:(id)arg2 dateComponents:(id)arg3;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(int)arg4 appBundleId:(id)arg5;
+ (id)lookupRequestWithString:(id)arg1 queryContext:(id)arg2 domain:(id)arg3 lookupSelectionType:(int)arg4 appBundleId:(id)arg5 queryId:(unsigned long long)arg6;
+ (id)moreResultsRequestWithURL:(id)arg1;
+ (id)moreResultsRequestWithURL:(id)arg1 queryId:(unsigned long long)arg2;
+ (id)searchRequestWithString:(id)arg1;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned int)arg2;
+ (id)searchRequestWithString:(id)arg1 triggerEvent:(unsigned int)arg2 queryId:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)zeroKeywordRequest;
+ (id)zeroKeywordRequest:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)clientQueryId;
- (void)encodeWithCoder:(id)arg1;
- (id)headerItems;
- (id)initWithCoder:(id)arg1;
- (id)keyboardInputMode;
- (id)keyboardLocale;
- (long long)queryId;
- (id)queryItems;
- (Class)responseClass;
- (float)scale;
- (void)setClientQueryId:(unsigned long long)arg1;
- (void)setHeaderItems:(id)arg1;
- (void)setKeyboardInputMode:(id)arg1;
- (void)setKeyboardLocale:(id)arg1;
- (void)setQueryId:(long long)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (void)setVerboseReply:(BOOL)arg1;
- (unsigned int)triggerEvent;
- (BOOL)verboseReply;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteNetworkActivityPolicy : NSObject <CNAutocompleteNetworkActivityPolicy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)policyWithNoDelay;
+ (id)policyWithThrottlingDelayForString:(id)arg1;

- (double)delayBeforeBeginningNetworkActivity;
- (BOOL)shouldSearchServers;

@end

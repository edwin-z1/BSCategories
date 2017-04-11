/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhoneNumberResolverRemoteProxy : NSObject <GEOPhoneNumberResolving> {
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;

@end

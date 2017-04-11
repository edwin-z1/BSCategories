/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession> {
    NSArray * _availableServices;
    <RMSDiscoverySessionDelegate> * _delegate;
    BOOL  _discovering;
    int  _discoveryTypes;
    RMSIDSClient * _idsClient;
    BOOL  _networkAvailable;
    NSArray * _pairedNetworkNames;
    int  _retryRate;
    BOOL  _wifiAvailable;
}

@property (nonatomic, readonly) NSArray *availableServices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSDiscoverySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int discoveryTypes;
@property (readonly) unsigned int hash;
@property (getter=isNetworkAvailable, nonatomic, readonly) BOOL networkAvailable;
@property (nonatomic, retain) NSArray *pairedNetworkNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableServicesDidUpdateNotification:(id)arg1;
- (void)_companionAvailabilityDidChange:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_updateNetworkAvailability;
- (void)_wifiAvailabilityDidChange:(id)arg1;
- (id)availableServices;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (int)discoveryTypes;
- (void)endDiscovery;
- (void)heartbeatDidFail;
- (id)init;
- (BOOL)isNetworkAvailable;
- (id)pairedNetworkNames;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryTypes:(int)arg1;
- (void)setPairedNetworkNames:(id)arg1;

@end

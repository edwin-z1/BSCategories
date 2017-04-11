/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol> {
    NSDictionary * _accountConfig;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    NSMutableArray * _devices;
    BOOL  _devicesLoaded;
    BOOL  _isEnabled;
    NSMapTable * _registrationDelegateToInfo;
    NSString * _service;
    NSString * _serviceToken;
    NSMutableArray * _suppressedDevices;
    NSString * _uniqueID;
}

@property (setter=_setIsEnabled:, nonatomic) BOOL _isEnabled;
@property (nonatomic, retain) NSDictionary *accountInfo;
@property (nonatomic, readonly) int accountType;
@property (nonatomic, readonly, retain) NSArray *aliasStrings;
@property (nonatomic, readonly, retain) NSArray *aliases;
@property (nonatomic, readonly) BOOL canSend;
@property (nonatomic, readonly) NSDate *dateRegistered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSArray *devices;
@property (nonatomic, readonly, retain) NSString *displayName;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly) BOOL isUserDisabled;
@property (nonatomic, retain) NSString *loginID;
@property (nonatomic, readonly, retain) NSArray *nearbyDevices;
@property (nonatomic, readonly) NSDate *nextRegistrationDate;
@property (nonatomic, readonly, retain) NSString *primaryServiceName;
@property (nonatomic, readonly) NSString *profileID;
@property (nonatomic, readonly, retain) NSDictionary *profileInfo;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, readonly, retain) NSString *pushTopic;
@property (nonatomic, readonly) NSString *regionBasePhoneNumber;
@property (nonatomic, readonly) NSString *regionID;
@property (nonatomic, readonly) NSDictionary *regionServerContext;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly) NSData *registrationCertificate;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly, retain) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSArray *suppressedDevices;
@property (nonatomic, readonly, retain) NSString *uniqueID;
@property (nonatomic, readonly, retain) NSArray *vettedAliases;

- (void)_callCloudConnectedDevicesChanged;
- (void)_callConnectedDevicesChanged;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(id /* block */)arg2 callbackBlock:(id /* block */)arg3 postCallbacksBlock:(id /* block */)arg4 group:(id)arg5;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 group:(id)arg2;
- (void)_callDevicesChanged;
- (void)_callNearbyDevicesChanged;
- (void)_callRegistrationDelegatesWithBlock:(id /* block */)arg1;
- (void)_connect;
- (BOOL)_isEnabled;
- (BOOL)_isiCloudPairingService;
- (id)_keychainRegistration;
- (void)_loadCachedDevices;
- (id)_objectForKey:(id)arg1;
- (id)_registeredURIs;
- (void)_reloadCachedDevices;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)_setIsEnabled:(BOOL)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_updateDependentDevicesWithDevicesInfo:(id)arg1;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (id)accountInfo;
- (int)accountType;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)aliasStrings;
- (id)aliases;
- (void)authenticateAccount;
- (BOOL)canSend;
- (id)connectedDevices;
- (id)dateRegistered;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)displayName;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (BOOL)isActive;
- (BOOL)isUserDisabled;
- (id)loginID;
- (id)nearbyDevices;
- (id)nextRegistrationDate;
- (void)passwordUpdated;
- (id)primaryServiceName;
- (id)profileID;
- (id)profileInfo;
- (id)pushToken;
- (id)pushTopic;
- (void)refreshRegistrationForAccount:(id)arg1;
- (id)regionBasePhoneNumber;
- (id)regionID;
- (id)regionServerContext;
- (void)registerAccount;
- (id)registeredURIs;
- (id)registrationCertificate;
- (id)registrationInfo;
- (int)registrationStatus;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setLoginID:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)suppressedDevices;
- (id)uniqueID;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (id)vettedAliases;

@end

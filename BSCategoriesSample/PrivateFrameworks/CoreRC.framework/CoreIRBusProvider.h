/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreIRBusProvider : CoreIRBus <IRInterfaceDelegate> {
    IRInterface * _interface;
    CoreIRDeviceProvider * _localDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) IRInterface *interface;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (id)_addAppleRemoteWithDeviceUID:(unsigned char)arg1;
- (id)_addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 transportProperties:(id)arg3 error:(id*)arg4;
- (id)_findAppleRemoteWithUID:(unsigned char)arg1;
- (void)_recreatePairedDeviceFromDefaults:(id)arg1 key:(id)arg2;
- (void)_removeMappingForCommand:(unsigned int)arg1 from:(id)arg2;
- (id)addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 error:(id*)arg3;
- (id)addDeviceWithType:(unsigned int)arg1 matching:(id)arg2 learningSession:(id)arg3 error:(id*)arg4;
- (BOOL)addMappingsFromRemote:(id)arg1 toLearningSession:(id)arg2;
- (id)appleIRDeviceWithUID:(unsigned char)arg1 create:(BOOL)arg2;
- (Class)classForCoder;
- (id)copyDevicePrefs:(id*)arg1;
- (id)copyPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 key:(id)arg3;
- (void)dealloc;
- (BOOL)deleteDevicePrefsWithUUID:(id)arg1 UUIDKey:(id)arg2;
- (void)didAddDevice:(id)arg1;
- (void)didRemoveDevice:(id)arg1;
- (id)getExistingDeviceWithType:(unsigned int)arg1 matching:(id)arg2;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (void)interface:(id)arg1 receivedCommand:(id)arg2;
- (id)localDevice;
- (BOOL)mergePersistentMappingsFromSession:(id)arg1 ofDevice:(id)arg2;
- (void)migrateOldRemotes;
- (id)propertyForKey:(id)arg1 error:(id*)arg2;
- (BOOL)recreateDevices;
- (BOOL)saveDevicePrefsWithDict:(id)arg1 error:(id*)arg2;
- (void)setManager:(id)arg1;
- (BOOL)setPairedAppleRemote:(id)arg1 error:(id*)arg2;
- (BOOL)setPrefsPropertyForUUID:(id)arg1 UUIDKey:(id)arg2 object:(id)arg3 key:(id)arg4;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)thirdPartyRemotes;
- (void)updateAllowHibernation;
- (BOOL)updatePersistentValue:(id)arg1 forProperty:(id)arg2 ofDevice:(id)arg3;
- (void)willAddToManager:(id)arg1;
- (void)willRemoveDevice:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDPlugin : ASDObject {
    NSObject<OS_dispatch_queue> * _boxQueue;
    NSMutableDictionary * _boxes;
    NSObject<OS_dispatch_queue> * _clockDeviceQueue;
    NSMutableDictionary * _clockDevices;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    NSMutableDictionary * _devices;
    unsigned int  _nextObjectID;
    NSObject<OS_dispatch_queue> * _objectQueue;
    NSMapTable * _objects;
    struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } * _pluginHost;
}

- (void).cxx_destruct;
- (void)addBox:(id)arg1;
- (void)addCAObject:(id)arg1;
- (void)addClockDevice:(id)arg1;
- (void)addDevice:(id)arg1;
- (void)addDevices:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boxes;
- (void)changedProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 forObjectID:(unsigned long)arg2;
- (unsigned long)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned long)arg2 andQualifierData:(const void*)arg3;
- (id)devices;
- (id)dictionaryForKey:(id)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 withQualifierSize:(unsigned long)arg2 qualifierData:(const void*)arg3 dataSize:(unsigned int*)arg4 andData:(const void*)arg5 forClient:(int)arg6;
- (void)halInitializeWithPluginHost:(struct AudioServerPlugInHostInterface { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)init;
- (unsigned long)objectClass;
- (id)objectForObjectID:(unsigned long)arg1;
- (unsigned long)objectIDForBoxUID:(id)arg1;
- (unsigned long)objectIDForClockDeviceUID:(id)arg1;
- (unsigned long)objectIDForDeviceUID:(id)arg1;
- (void)removeBox:(id)arg1;
- (void)removeCAObject:(id)arg1;
- (void)removeClockDevice:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)removeDevices:(id)arg1;
- (BOOL)requestConfigurationChangeForObject:(unsigned long)arg1 withBlock:(void*)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;

@end

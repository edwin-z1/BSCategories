/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServiceNameComponents : NSObject {
    NSString * _format;
    NSString * _rawServiceName;
    NSString * _roomName;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSString *rawServiceName;
@property (nonatomic, retain) NSString *roomName;
@property (nonatomic, retain) NSString *serviceName;

+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;

- (void).cxx_destruct;
- (id)composedName;
- (id)format;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;
- (id)rawServiceName;
- (id)roomName;
- (id)serviceName;
- (void)setFormat:(id)arg1;
- (void)setRawServiceName:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServiceName:(id)arg1;

@end

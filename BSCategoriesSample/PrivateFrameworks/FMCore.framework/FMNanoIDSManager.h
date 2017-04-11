/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMNanoIDSManager : NSObject <IDSServiceDelegate> {
    unsigned int  _minVersion;
    NSMutableDictionary * _outstandingRequests;
    NSObject<OS_dispatch_queue> * _outstandingRequestsModQueue;
    NSMutableDictionary * _registeredRequestHandlers;
    IDSService * _service;
    NSString * _serviceId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *devices;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int minVersion;
@property (nonatomic, retain) NSMutableDictionary *outstandingRequests;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *outstandingRequestsModQueue;
@property (nonatomic, retain) NSMutableDictionary *registeredRequestHandlers;
@property (nonatomic, retain) IDSService *service;
@property (nonatomic, retain) NSString *serviceId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_checkMinVersionDeviceID:(id)arg1;
- (id)_sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(int)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6 responseHandler:(id /* block */)arg7;
- (id)_sendProtobuf:(id)arg1 priority:(int)arg2 responseIdentifier:(id)arg3 expectsResponse:(BOOL)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6;
- (BOOL)cancelMessageWithId:(id)arg1;
- (id)devices;
- (void)handleRequestsOfType:(unsigned short)arg1 withHandler:(id /* block */)arg2;
- (id)initWithServiceId:(id)arg1 minimumVersion:(int)arg2;
- (unsigned int)minVersion;
- (id)outstandingRequests;
- (id)outstandingRequestsModQueue;
- (id)registeredRequestHandlers;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(int)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 deviceID:(id)arg6 requestAcceptedHandler:(id /* block */)arg7 responseHandler:(id /* block */)arg8;
- (void)sendMessageWithProtobuf:(id)arg1 inResponseToRequest:(id)arg2 withPriority:(int)arg3 timeout:(double)arg4 bypassingDuet:(BOOL)arg5 requestAcceptedHandler:(id /* block */)arg6 responseHandler:(id /* block */)arg7;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (id)serviceId;
- (void)setMinVersion:(unsigned int)arg1;
- (void)setOutstandingRequests:(id)arg1;
- (void)setOutstandingRequestsModQueue:(id)arg1;
- (void)setRegisteredRequestHandlers:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceId:(id)arg1;
- (void)start;

@end

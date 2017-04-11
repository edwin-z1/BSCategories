/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBManager : NSObject {
    <SUBManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _serverConnection;
}

@property (nonatomic) <SUBManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_xpc_object> *serverConnection;

- (void).cxx_destruct;
- (void)_forwardDownloadProgress:(id)arg1;
- (void)_forwardInstallResult:(id)arg1;
- (void)_forwardInstallationCanProceed:(id)arg1;
- (void)_forwardInstallationWillProceed:(id)arg1;
- (void)_forwardScanResult:(id)arg1;
- (id)_serverConnection;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)installUpdate:(id)arg1;
- (void)managerState:(id /* block */)arg1;
- (void)performMigration;
- (void)purgeUpdate:(id)arg1 completion:(id /* block */)arg2;
- (id)queue;
- (void)scanForUpdates;
- (id)serverConnection;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startDownload:(id)arg1;
- (void)userDidAcceptTermsAndConditionsForUpdate:(id)arg1;

@end

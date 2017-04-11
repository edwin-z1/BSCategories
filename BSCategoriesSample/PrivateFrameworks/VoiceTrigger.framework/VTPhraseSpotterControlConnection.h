/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {
    VTPeerRemoteConnection * _peerConnection;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _remotePhraseSpotterEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)notifyRemoteOfDismissal;
- (void)notifyRemoteOfEarlyDetect;
- (void)notifyRemoteOfTriggerEvent;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)updateRemotePhraseSpotterEnabled:(BOOL)arg1;

@end

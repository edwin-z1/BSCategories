/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVEmbeddedInterface : IMAVConferenceInterface

+ (void)updateCriticalState;

- (int)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2;
- (void)_conferenceEnded:(id)arg1;
- (void)_conferenceWillStart:(id)arg1;
- (int)_runPingTestForChat:(id)arg1;
- (void)chatStateUpdated;

@end

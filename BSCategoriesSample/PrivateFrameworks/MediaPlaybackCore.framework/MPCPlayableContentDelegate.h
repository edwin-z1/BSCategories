/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCPlayableContentDelegate : NSObject <MPPlayableContentDelegate> {
    MPCMediaPlayerLegacyPlayer * _player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;
- (void)playableContentManager:(id)arg1 initializePlaybackQueueWithContentItems:(id)arg2 completionHandler:(id /* block */)arg3;

@end

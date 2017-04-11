/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKTurnBasedMatchmakerHostViewController : GKUIRemoteViewController <GKTurnBasedMatchmakerHostProtocol, GKTurnBasedMatchmakerServiceProtocol> {
    GKTurnBasedMatchmakerViewController * _delegateWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) GKTurnBasedMatchmakerViewController *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)turnBasedMatchmakerExtension;

- (id)contextForRequestIdentifier;
- (void)dealloc;
- (id)delegate;
- (void)finishWithError:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)playerQuitMatch:(id)arg1;
- (void)refreshMatches;
- (void)remoteViewControllerIsCanceling;
- (void)setDelegate:(id)arg1;
- (void)setMatchRequestInternal:(id)arg1;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)setShowPlay:(BOOL)arg1;
- (void)setShowQuit:(BOOL)arg1;

@end

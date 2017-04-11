/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    NSArray * _exchanges;
    GKTurnBasedMatchInternal * _internal;
    NSArray * _participants;
    unsigned int  _state;
}

@property (nonatomic, readonly, retain) NSArray *activeExchanges;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, readonly, retain) NSArray *completedExchanges;
@property (nonatomic, readonly, retain) NSDate *creationDate;
@property (nonatomic, retain) GKTurnBasedParticipant *currentParticipant;
@property (nonatomic, readonly) GKPlayer *currentPlayer;
@property (nonatomic, readonly) NSDate *dateSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int exchangeDataMaximumSize;
@property (nonatomic, readonly) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic, readonly, retain) NSArray *exchanges;
@property (nonatomic, readonly) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property (nonatomic, readonly) GKGame *game;
@property (readonly) unsigned int hash;
@property (retain) GKTurnBasedMatchInternal *internal;
@property (nonatomic, readonly) BOOL isMyTurn;
@property (nonatomic, copy) NSDate *lastTurnDate;
@property (nonatomic, readonly) BOOL localPlayerHasRecentTurn;
@property (nonatomic, readonly) GKTurnBasedParticipant *localPlayerParticipant;
@property (nonatomic, readonly, retain) NSData *matchData;
@property (nonatomic) unsigned int matchDataMaximumSize;
@property (nonatomic, readonly, retain) NSString *matchID;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly, retain) NSArray *participants;
@property (nonatomic, readonly) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipant;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property (nonatomic, readonly) GKPlayer *showcasePlayer;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) int status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int turnNumber;

+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(id /* block */)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadMatchesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadTurnBasedMatchSummaries:(id /* block */)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;

- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(id /* block */)arg1;
- (id)activeExchanges;
- (int)compare:(id)arg1;
- (id)completedExchanges;
- (id)currentParticipant;
- (id)currentPlayer;
- (id)dateSortKey;
- (void)dealloc;
- (void)declineInviteWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned int)exchangeDataMaximumSize;
- (id)exchangeForID:(id)arg1;
- (unsigned int)exchangeMaxInitiatedExchangesPerPlayer;
- (id)exchanges;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned int)hash;
- (id)indexesForParticipants:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isMyTurn;
- (void)loadMatchDataWithCompletionHandler:(id /* block */)arg1;
- (void)loadURLWithMatchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)localPlayerHasRecentTurn;
- (id)localPlayerParticipant;
- (unsigned int)matchDataMaximumSize;
- (id)message;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)participantQuitInTurnWithOutcome:(int)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)participants;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)previousParticipant;
- (id)previousParticipantOrFirstKnownPlayer;
- (void)rematchWithCompletionHandler:(id /* block */)arg1;
- (void)removeWithCompletionHandler:(id /* block */)arg1;
- (void)reserveShareParticipantSlots:(int)arg1 andInvitePlayers:(id)arg2 withMessage:(id)arg3 handler:(id /* block */)arg4;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(id /* block */)arg6;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCurrentParticipant:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (void)setMessage:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)showcasePlayer;
- (unsigned int)state;
- (int)status;
- (id)valueForUndefinedKey:(id)arg1;

@end

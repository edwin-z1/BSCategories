/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKFriendsSplittingDataSource : GKSplittingDataSource {
    NSString * _achievementID;
    GKGame * _game;
    NSSet * _hiddenPlayers;
    NSString * _leaderboardID;
    int  _maxSelectable;
    NSMutableDictionary * _pickerInfos;
}

@property (nonatomic, retain) NSString *achievementID;
@property (nonatomic, retain) GKFriendsDataSource *friendsDataSource;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) NSSet *hiddenPlayers;
@property (nonatomic, retain) NSString *leaderboardID;
@property (nonatomic) int maxSelectable;
@property (nonatomic, retain) NSMutableDictionary *pickerInfos;
@property (nonatomic, retain) NSArray *selectedPlayers;

- (BOOL)_changePickerInfo:(id)arg1 selected:(BOOL)arg2;
- (id)achievementID;
- (id)allPickerInfos;
- (BOOL)canSelectIndexPath:(id)arg1;
- (BOOL)canSelectPlayerInfo:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 forPickerInfo:(id)arg2 forIndexPath:(id)arg3;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (void)dealloc;
- (id)friendsDataSource;
- (id)game;
- (id)hiddenPlayers;
- (id)indexPathsForPlayer:(id)arg1;
- (id)init;
- (id)leaderboardID;
- (void)loadAchievedWithUpdateNotifier:(id)arg1;
- (void)loadGamePlayersWithUpdateNotifier:(id)arg1;
- (void)loadRanksWithUpdateNotifier:(id)arg1;
- (int)maxSelectable;
- (void)notifyPickerItemsChanged:(id)arg1;
- (id)pickerInfos;
- (id)playerInfoForPlayer:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (id)selectedPlayers;
- (void)setAchievementID:(id)arg1;
- (void)setFriendsDataSource:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setHiddenPlayers:(id)arg1;
- (void)setLeaderboardID:(id)arg1;
- (void)setMaxSelectable:(int)arg1;
- (void)setPickerInfos:(id)arg1;
- (void)setPlayers:(id)arg1 selected:(BOOL)arg2 deselectOthers:(BOOL)arg3;
- (void)setSelectedPlayers:(id)arg1;
- (void)toggleSelectionAtIndexPath:(id)arg1;
- (void)toggleSelectionForPlayer:(id)arg1;
- (void)updatePickerInfosFromFriendPlayersOfGame:(id)arg1 outputPlayers:(id*)arg2;
- (void)updatePickerInfosFromPlayers:(id)arg1;

@end

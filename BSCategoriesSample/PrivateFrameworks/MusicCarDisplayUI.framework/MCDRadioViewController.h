/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDRadioViewController : MCD_OLD_TableViewController <MCDErrorViewDelegate, MCDRadioContentManagerDelegate, MCDRadioDataSourceDelegate> {
    UIView * _MCD_tableView;
    UIActivityIndicatorView * _activityIndicator;
    unsigned int  _allStationsIndex;
    id  _currentlyPlayingRadioStation;
    MCDRadioDataSource * _dataSource;
    BOOL  _didInitiatePlayback;
    NSArray * _featuredStations;
    BOOL  _featuredStationsFinishedLoading;
    unsigned int  _featuredStationsIndex;
    MPWeakTimer * _loadingTimer;
    UINavigationController * _nowPlayingNavigationController;
    UIView * _placeholderView;
    MPModelRadioStation * _prominentRadioStation;
    unsigned int  _prominentStationIndex;
    BOOL  _radioStationsLoaded;
    NSArray * _recentStations;
    BOOL  _recentStationsFinishedLoading;
    NSIndexPath * _selectedIndexPath;
    MCD_OLD_TableViewController * _viewController;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) unsigned int allStationsIndex;
@property (nonatomic, retain) id currentlyPlayingRadioStation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didInitiatePlayback;
@property (nonatomic) BOOL featuredStationsFinishedLoading;
@property (nonatomic) unsigned int featuredStationsIndex;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) MPWeakTimer *loadingTimer;
@property (nonatomic, retain) UINavigationController *nowPlayingNavigationController;
@property (nonatomic) unsigned int prominentStationIndex;
@property (nonatomic) BOOL radioStationsLoaded;
@property (nonatomic) BOOL recentStationsFinishedLoading;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, retain) MCD_OLD_TableViewController *viewController;

+ (BOOL)currentlyPlayingRadioStationFromStation:(id)arg1 nowPlayingItem:(id)arg2;

- (void).cxx_destruct;
- (void)_categorizeStations;
- (id)_filteredRadioStations:(id)arg1;
- (BOOL)_isNetworkTypeAllowed:(int)arg1;
- (void)_itemDidChange;
- (void)_limitedUIDidChange;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_presentStationUnavailableAlertForError:(id)arg1 stationName:(id)arg2;
- (void)_reloadRadioStations;
- (void)_setCurrentTableView;
- (void)_showLoadingScreen;
- (void)_startPlayingStation:(id)arg1;
- (id)_stationFromIndexPath:(id)arg1;
- (void)_updateViewForNetworkType:(int)arg1;
- (id)activityIndicator;
- (unsigned int)allStationsIndex;
- (id)currentlyPlayingRadioStation;
- (void)dealloc;
- (BOOL)didInitiatePlayback;
- (void)didStartPlaying:(id)arg1;
- (void)errorViewDidTapButton:(id)arg1;
- (void)featuredStationsDidUpdate:(id)arg1;
- (BOOL)featuredStationsFinishedLoading;
- (unsigned int)featuredStationsIndex;
- (id)initWithPlayer:(id)arg1 serviceProvider:(id)arg2;
- (id)loadingTimer;
- (id)nowPlayingNavigationController;
- (unsigned int)prominentStationIndex;
- (BOOL)radioStationsLoaded;
- (void)recentStationsDidUpdate:(id)arg1;
- (BOOL)recentStationsFinishedLoading;
- (id)selectedIndexPath;
- (void)setActivityIndicator:(id)arg1;
- (void)setAllStationsIndex:(unsigned int)arg1;
- (void)setCurrentlyPlayingRadioStation:(id)arg1;
- (void)setDidInitiatePlayback:(BOOL)arg1;
- (void)setFeaturedStationsFinishedLoading:(BOOL)arg1;
- (void)setFeaturedStationsIndex:(unsigned int)arg1;
- (void)setLoadingTimer:(id)arg1;
- (void)setNowPlayingNavigationController:(id)arg1;
- (void)setProminentStationIndex:(unsigned int)arg1;
- (void)setRadioStationsLoaded:(BOOL)arg1;
- (void)setRecentStationsFinishedLoading:(BOOL)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)viewController;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegRegionChooserController : UITableViewController <CNFRegRegionChooserDelegate, PSController, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    <CNFRegRegionChooserDelegate> * _delegate;
    NSArray * _filteredRegionList;
    UIViewController<PSController> * _parentController;
    NSArray * _regionList;
    PSRootController * _rootController;
    UISearchController * _searchController;
    NSString * _selectedRegionID;
    PSSpecifier * _specifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNFRegRegionChooserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *filteredRegionList;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *regionList;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSString *selectedRegionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_drillDownControllersWithArray:(id)arg1;
- (void)_hideTableViewCells;
- (void)_selectRegionID:(id)arg1;
- (void)_selectRegionList:(id)arg1;
- (void)_showTableViewCells;
- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (id)delegate;
- (void)didLock;
- (void)didPresentSearchController:(id)arg1;
- (void)didUnlock;
- (void)didWake;
- (id)drillDownControllerList;
- (id)filteredRegionList;
- (void)handleURL:(id)arg1;
- (id)initWithRegionList:(id)arg1 selectedRegionID:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (id)regionList;
- (id)rootController;
- (id)searchController;
- (id)selectedRegionID;
- (void)setDelegate:(id)arg1;
- (void)setFilteredRegionList:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRegionList:(id)arg1;
- (void)setRootController:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSelectedRegionID:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (id)specifier;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)willBecomeActive;
- (void)willPresentSearchController:(id)arg1;
- (void)willResignActive;
- (void)willUnlock;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate> {
    NSMutableArray * _dataTypeNames;
    HKDataUnitController * _dataUnitController;
    BOOL  _deviceEnabled;
    BOOL  _deviceFound;
    NSUUID * _deviceIdentifier;
    HKHealthStore * _healthStore;
}

@property (nonatomic, retain) NSUUID *deviceIdentifier;
@property (nonatomic, retain) HKHealthStore *healthStore;

- (void).cxx_destruct;
- (id)_initWithHealthStore:(id)arg1 dataUnitController:(id)arg2;
- (id)deviceIdentifier;
- (void)fetchEnabledStatusForPeripheral;
- (id)healthStore;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)viewDidLoad;

@end

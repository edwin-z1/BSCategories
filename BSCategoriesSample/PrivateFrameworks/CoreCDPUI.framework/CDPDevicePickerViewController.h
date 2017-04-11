/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPDevicePickerViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    <CDPDevicePickerDelegate> * _delegate;
    NSArray * _devices;
    CDPRemoteValidationEscapeOffer * _escapeOffer;
    UIButton * _remoteApprovalButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) CDPRemoteValidationEscapeOffer *escapeOffer;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)devices;
- (id)escapeOffer;
- (id)initWithDevices:(id)arg1 delegate:(id)arg2;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setEscapeOffer:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;

@end

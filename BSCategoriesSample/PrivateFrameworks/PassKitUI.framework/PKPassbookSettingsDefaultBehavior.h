/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {
    PKPaymentOptionsDefaults * _options;
    PKPassLibraryDefaultDataProvider * _passLibraryDataProvider;
    PKPaymentDefaultDataProvider * _paymentDataProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)deviceInRestrictedMode;
- (id)deviceName;
- (BOOL)deviceSupportsInAppPayments;
- (BOOL)hasFelicaSecureElement;
- (id)init;
- (id)optionsDelegate;
- (id)passLibraryDataProvider;
- (id)paymentDataProvider;
- (id)secureElementID;
- (BOOL)secureElementIsProductionSigned;
- (id)setupDelegate;
- (id)setupFeaturedNetworksForDevice;

@end

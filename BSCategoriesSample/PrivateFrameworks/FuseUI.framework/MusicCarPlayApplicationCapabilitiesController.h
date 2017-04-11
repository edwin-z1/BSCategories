/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicCarPlayApplicationCapabilitiesController : NSObject {
    BOOL  _allowsRadioContent;
    MPModelRadioStation * _prominentRadioStation;
    int  _userSubscriptionState;
}

@property (nonatomic) BOOL allowsRadioContent;
@property (nonatomic, retain) MPModelRadioStation *prominentRadioStation;
@property (nonatomic) int userSubscriptionState;

+ (id)sharedController;

- (void).cxx_destruct;
- (BOOL)allowsRadioContent;
- (id)prominentRadioStation;
- (void)setAllowsRadioContent:(BOOL)arg1;
- (void)setProminentRadioStation:(id)arg1;
- (void)setUserSubscriptionState:(int)arg1;
- (int)userSubscriptionState;

@end

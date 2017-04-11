/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSuggestedActionMetrics : NSObject {
    SGMContactConfirmed * _contactConfirmed;
    SGMContactDetailConfirmed * _contactDetailConfirmed;
    SGMContactDetailRejected * _contactDetailRejected;
    SGMContactDetailUsed * _contactDetailUsed;
    SGMContactInBanner * _contactInBanner;
    SGMContactRejected * _contactRejected;
    SGMEventBannerConfirmed * _eventBannerConfirmed;
    SGMEventBannerRejected * _eventBannerRejected;
    SGMEventInBanner * _eventInBanner;
    SGMMaybeInformationShown * _maybeInformationShown;
    SGMNLEventBannerConfirmed * _nlEventBannerConfirmed;
    SGMNLEventBannerRejected * _nlEventBannerRejected;
    SGMNLEventInBanner * _nlEventInBanner;
    SGMUnknownContactInformationShown * _unknownContactInformationShown;
}

@property (nonatomic, retain) SGMContactConfirmed *contactConfirmed;
@property (nonatomic, retain) SGMContactDetailConfirmed *contactDetailConfirmed;
@property (nonatomic, retain) SGMContactDetailRejected *contactDetailRejected;
@property (nonatomic, retain) SGMContactDetailUsed *contactDetailUsed;
@property (nonatomic, retain) SGMContactInBanner *contactInBanner;
@property (nonatomic, retain) SGMContactRejected *contactRejected;
@property (nonatomic, retain) SGMEventBannerConfirmed *eventBannerConfirmed;
@property (nonatomic, retain) SGMEventBannerRejected *eventBannerRejected;
@property (nonatomic, retain) SGMEventInBanner *eventInBanner;
@property (nonatomic, retain) SGMMaybeInformationShown *maybeInformationShown;
@property (nonatomic, retain) SGMNLEventBannerConfirmed *nlEventBannerConfirmed;
@property (nonatomic, retain) SGMNLEventBannerRejected *nlEventBannerRejected;
@property (nonatomic, retain) SGMNLEventInBanner *nlEventInBanner;
@property (nonatomic, retain) SGMUnknownContactInformationShown *unknownContactInformationShown;

+ (id)instance;
+ (void)recordBannerConfirmedWithContact:(id)arg1 proposedCNContact:(id)arg2 confirmedCNContact:(id)arg3 inApp:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg4;
+ (void)recordBannerConfirmedWithEvent:(id)arg1 proposedEKEvent:(id)arg2 confirmedEKEvent:(id)arg3 inApp:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg4;
+ (void)recordBannerRejectedWithContact:(id)arg1 inApp:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg2;
+ (void)recordBannerRejectedWithEvent:(id)arg1 inApp:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg2;
+ (void)recordBannerShownWithContacts:(id)arg1 events:(id)arg2 inApp:(struct SGMBannerDisplayApp_ { unsigned int x1; })arg3;
+ (void)recordContactDetailEngagementWithResolution:(int)arg1 detailType:(struct SGMContactDetailType_ { unsigned int x1; })arg2 extractionType:(unsigned int)arg3;
+ (void)recordContactDetailUsage:(id)arg1 withApp:(id)arg2;
+ (void)recordMaybeContactFrom:(unsigned int)arg1;
+ (void)recordMaybeContactRequested;

- (void).cxx_destruct;
- (id)contactConfirmed;
- (id)contactDetailConfirmed;
- (id)contactDetailRejected;
- (id)contactDetailUsed;
- (id)contactInBanner;
- (id)contactRejected;
- (id)eventBannerConfirmed;
- (id)eventBannerRejected;
- (id)eventInBanner;
- (id)init;
- (id)maybeInformationShown;
- (id)nlEventBannerConfirmed;
- (id)nlEventBannerRejected;
- (id)nlEventInBanner;
- (void)setContactConfirmed:(id)arg1;
- (void)setContactDetailConfirmed:(id)arg1;
- (void)setContactDetailRejected:(id)arg1;
- (void)setContactDetailUsed:(id)arg1;
- (void)setContactInBanner:(id)arg1;
- (void)setContactRejected:(id)arg1;
- (void)setEventBannerConfirmed:(id)arg1;
- (void)setEventBannerRejected:(id)arg1;
- (void)setEventInBanner:(id)arg1;
- (void)setMaybeInformationShown:(id)arg1;
- (void)setNlEventBannerConfirmed:(id)arg1;
- (void)setNlEventBannerRejected:(id)arg1;
- (void)setNlEventInBanner:(id)arg1;
- (void)setUnknownContactInformationShown:(id)arg1;
- (id)unknownContactInformationShown;

@end

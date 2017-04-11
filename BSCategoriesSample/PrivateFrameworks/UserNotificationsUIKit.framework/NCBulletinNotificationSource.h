/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCBulletinNotificationSource : NSObject <BBObserverDelegate, NCNotificationDispatcherSourceDelegate, NCNotificationSource> {
    NSMutableDictionary * _bulletinFeeds;
    NCNotificationDispatcher * _dispatcher;
    BBObserver * _observer;
    NSMutableDictionary * _sectionInfoById;
}

@property (nonatomic, retain) NSMutableDictionary *bulletinFeeds;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDispatcher *dispatcher;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) BBObserver *observer;
@property (nonatomic, retain) NSMutableDictionary *sectionInfoById;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bulletinsPerSectionIdForNotificationRequests:(id)arg1;
- (id)_sectionInfoForBulletin:(id)arg1;
- (id)bulletinFeeds;
- (void)dealloc;
- (id)dispatcher;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (id)init;
- (id)initWithDispatcher:(id)arg1;
- (id)initWithDispatcher:(id)arg1 observer:(id)arg2;
- (id)observer;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned int)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(id /* block */)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2 forFeed:(unsigned int)arg3;
- (void)observer:(id)arg1 removeSection:(id)arg2;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (id)sectionInfoById;
- (void)setBulletinFeeds:(id)arg1;
- (void)setDispatcher:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setSectionInfoById:(id)arg1;

@end

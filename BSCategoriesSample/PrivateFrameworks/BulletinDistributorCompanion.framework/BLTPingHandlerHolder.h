/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPingHandlerHolder : NSObject <BLTPingSubscriptionInfo> {
    BOOL  _canAck;
    BOOL  _forBulletin;
    id  _pingHandler;
    NSString * _sectionID;
}

@property (nonatomic) BOOL canAck;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forBulletin;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *sectionID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)canAck;
- (BOOL)forBulletin;
- (id)init;
- (id)initWithPingHandler:(id)arg1;
- (void)pingWithBulletin:(id)arg1 ack:(id /* block */)arg2;
- (void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(id /* block */)arg3;
- (id)sectionID;
- (void)setCanAck:(BOOL)arg1;
- (void)setForBulletin:(BOOL)arg1;
- (void)setSectionID:(id)arg1;

@end

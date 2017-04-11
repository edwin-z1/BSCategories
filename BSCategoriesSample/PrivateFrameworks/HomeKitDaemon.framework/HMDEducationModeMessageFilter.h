/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEducationModeMessageFilter : HMDMessageFilter {
    BOOL  _ephemeralMultiUser;
    BOOL  _managedAppleID;
}

@property (getter=isEphemeralMultiUser, nonatomic) BOOL ephemeralMultiUser;
@property (getter=isManagedAppleID, nonatomic) BOOL managedAppleID;

- (void)_update;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (void)dealloc;
- (void)handleActiveAccountChanged:(id)arg1;
- (id)initWithName:(id)arg1;
- (BOOL)isEphemeralMultiUser;
- (BOOL)isManagedAppleID;
- (void)setEphemeralMultiUser:(BOOL)arg1;
- (void)setManagedAppleID:(BOOL)arg1;

@end

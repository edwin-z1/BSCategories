/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationTerminationAssertionServiceServer : FBSystemServiceFacility {
    NSMutableDictionary * _assertionsByClient;
}

- (void)_handleAcquireTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRelinquishTerminationAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_rememberTerminationAssertion:(id)arg1 forClient:(id)arg2;
- (void)dealloc;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (id)prerequisiteMilestones;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardUIServices.framework/FrontBoardUIServices
 */

@interface FBUISceneManager : NSObject <FBUISceneManager> {
    NSMutableDictionary * _sceneHostsByID;
    NSMutableDictionary * _workspacesByID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)invalidateSceneWorkspace:(id)arg1;
- (void)registerSceneWorkspace:(id)arg1;
- (void)workspace:(id)arg1 createSceneWithName:(id)arg2 specification:(id)arg3;
- (void)workspace:(id)arg1 destroySceneWithIdentity:(id)arg2;
- (id)workspace:(id)arg1 identityForSceneWithName:(id)arg2 specification:(id)arg3;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginAction : NSObject {
    BSAction * _action;
    int  _authenticationPolicy;
    id /* block */  _completion;
    NSString * _label;
}

@property (nonatomic) int authenticationPolicy;
@property (nonatomic, readonly, copy) id /* block */ completion;
@property (nonatomic, copy) NSString *label;

+ (id)action;
+ (id)actionWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (int)authenticationPolicy;
- (id /* block */)completion;
- (id)init;
- (id)initWithCompletion:(id /* block */)arg1;
- (BOOL)isApplicationAction;
- (BOOL)isCallAction;
- (BOOL)isEmergencyDialerAction;
- (BOOL)isInCallAction;
- (id)label;
- (void)sendResponseWithSuccess:(BOOL)arg1;
- (void)setAuthenticationPolicy:(int)arg1;
- (void)setLabel:(id)arg1;

@end

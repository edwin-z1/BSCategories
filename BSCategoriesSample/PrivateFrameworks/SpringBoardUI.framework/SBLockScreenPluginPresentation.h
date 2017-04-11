/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBLockScreenPluginPresentation : NSObject <NSCopying> {
    _UILegibilitySettings * legibilitySettings;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  suggestedContentInsets;
}

@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } suggestedContentInsets;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSuggestedContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })suggestedContentInsets;

@end

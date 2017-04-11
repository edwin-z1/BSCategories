/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityHorizontalLockupTableViewHeaderFooterView : MusicTableViewSelectableHeaderFooterView <MusicEntityContentDescriptorViewConfiguring, MusicEntityHorizontalLockupViewDelegate> {
    MusicEntityHorizontalLockupView * _lockupView;
}

@property (nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) MusicEntityHorizontalLockupView *lockupView;
@property (readonly) Class superclass;

+ (Class)lockupViewClass;
+ (float)maximumHeightForContentDescriptor:(id)arg1 width:(float)arg2 traitCollection:(id)arg3;

- (void).cxx_destruct;
- (id)contentDescriptor;
- (void)dealloc;
- (id)entityValueProvider;
- (void)horizontalLockupView:(id)arg1 didSelectPlayButtonAction:(unsigned int)arg2;
- (void)horizontalLockupViewDidSelectContextualActionsButton:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (id)lockupView;
- (void)setContentDescriptor:(id)arg1;
- (void)setEntityDisabled:(BOOL)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)updateForAsynchronousPropertyLoadCompleted;

@end

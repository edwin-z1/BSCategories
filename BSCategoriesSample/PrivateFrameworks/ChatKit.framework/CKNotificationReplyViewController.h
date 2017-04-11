/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNotificationReplyViewController : UIViewController <CKAudioControllerDelegate, CKBalloonViewDelegate, CKInlineReplyRaiseControllerDelegate, CKMessageEntryViewDelegate> {
    CKAudioController * _audioController;
    CKAudioMediaObject * _audioMediaObject;
    UIView * _audioMessageView;
    CKAudioBalloonView * _balloonView;
    CKConversation * _conversation;
    NSObject<CKNotificationReplyViewControllerDelegate> * _delegate;
    BOOL  _didSendMessage;
    CKMessageEntryView * _entryView;
    BOOL  _isAudioMessage;
    BOOL  _isAudioPlaybackOnly;
    BOOL  _isRaise;
    CKInlineReplyRaiseController * _raiseController;
    BOOL  _shouldShowKeyboard;
    CKScheduledUpdater * _typingUpdater;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, retain) UIView *audioMessageView;
@property (nonatomic, retain) CKAudioBalloonView *balloonView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKNotificationReplyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSendMessage;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isAudioMessage;
@property (nonatomic) BOOL isAudioPlaybackOnly;
@property (nonatomic) BOOL isRaise;
@property (nonatomic, retain) CKInlineReplyRaiseController *raiseController;
@property (nonatomic) BOOL shouldShowKeyboard;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;

+ (BOOL)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (float)audioBubbleHeight;
- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)audioMessageView;
- (id)balloonView;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)conversation;
- (void)dealloc;
- (id)delegate;
- (BOOL)didSendMessage;
- (id)entryView;
- (id)initWithConversation:(id)arg1;
- (id)inlayViewService;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (BOOL)isAudioMessage;
- (BOOL)isAudioPlaybackOnly;
- (BOOL)isRaise;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { float x1; float x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (float)messageEntryViewMaxHeight:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)playSendSoundForMessage:(id)arg1;
- (float)preferredContentHeight;
- (void)proximityStateDidChange:(BOOL)arg1;
- (id)raiseController;
- (void)raiseControllerDidStartRecording:(id)arg1;
- (void)raiseControllerDidStopRecording:(id)arg1;
- (void)sendMessage;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setAudioMessageView:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendMessage:(BOOL)arg1;
- (void)setEntryView:(id)arg1;
- (void)setIsAudioMessage:(BOOL)arg1;
- (void)setIsAudioPlaybackOnly:(BOOL)arg1;
- (void)setIsRaise:(BOOL)arg1;
- (void)setRaiseController:(id)arg1;
- (void)setShouldShowKeyboard:(BOOL)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setupConversation;
- (void)setupView;
- (BOOL)shouldShowKeyboard;
- (BOOL)showsKeyboard;
- (id)textInputContextIdentifier;
- (id)typingUpdater;
- (void)updateTyping;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForTyping;
- (void)viewWillDisappear:(BOOL)arg1;

@end

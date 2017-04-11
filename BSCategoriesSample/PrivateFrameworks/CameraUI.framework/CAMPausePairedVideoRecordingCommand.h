/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand {
    BOOL  __recordingPaused;
}

@property (getter=_isRecordingPaused, nonatomic, readonly) BOOL _recordingPaused;

- (BOOL)_isRecordingPaused;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingPaused:(BOOL)arg1;

@end

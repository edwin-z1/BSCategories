/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLegacyStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMPossibleOriginalRequest, NSCopying, NSMutableCopying> {
    NSString * _burstIdentifier;
    <CAMLegacyStillImageCaptureRequestDelegate> * _delegate;
    int  _effectFilterType;
    int  _flashMode;
    int  _hdrMode;
    unsigned int  _maximumBurstLength;
    NSString * _originalPersistenceUUID;
    BOOL  _transient;
    BOOL  _usesStillImageStabilization;
    BOOL  _wantsAudioForCapture;
}

@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMLegacyStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int effectFilterType;
@property (nonatomic, readonly) int flashMode;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int hdrMode;
@property (nonatomic, readonly) unsigned int maximumBurstLength;
@property (nonatomic, readonly, copy) NSString *originalPersistenceUUID;
@property (readonly) Class superclass;
@property (getter=isTransient, nonatomic, readonly) BOOL transient;
@property (nonatomic, readonly) BOOL usesStillImageStabilization;
@property (nonatomic, readonly) BOOL wantsAudioForCapture;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (int)effectFilterType;
- (int)flashMode;
- (int)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(BOOL)arg2;
- (BOOL)isTransient;
- (unsigned int)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalPersistenceUUID;
- (BOOL)usesStillImageStabilization;
- (BOOL)wantsAudioForCapture;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBufferBase> { 
        struct RecogAudioBufferBase {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buffer;
    BOOL  _cancelled;
    BOOL  _ended;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _speechRecognizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })arg1 speechRecognizer:(id)arg2;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short*)arg1 count:(unsigned int)arg2;
- (void)cancelRecognition;
- (void)dealloc;
- (void)endAudio;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKObserverTrampoline : NSObject {
    id /* block */  _block;
    int  _cancellationPredicate;
    NSString * _keyPath;
    id  _observee;
    unsigned int  _options;
}

@property (readonly) id token;

- (void)cancelObservation;
- (void)dealloc;
- (id)initObservingObject:(id)arg1 keyPath:(id)arg2 options:(unsigned int)arg3 block:(id /* block */)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)startObserving;
- (id)token;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNDataURLSessionTaskAdapter : NSObject <NSURLSessionDataDelegate> {
    id /* block */  _onCompletion;
    id /* block */  _onDataReceived;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (copy) id /* block */ onCompletion;
@property (copy) id /* block */ onDataReceived;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)dealloc;
- (id /* block */)onCompletion;
- (id /* block */)onDataReceived;
- (void)setOnCompletion:(id /* block */)arg1;
- (void)setOnDataReceived:(id /* block */)arg1;

@end

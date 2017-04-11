/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBitCoderDecryptRequest : NSObject {
    NSData * _aad;
    unsigned int  _authTagLength;
    NSData * _data;
    NSData * _nonce;
}

@property (nonatomic, copy) NSData *aad;
@property (nonatomic) unsigned int authTagLength;
@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSData *nonce;

- (void).cxx_destruct;
- (id)aad;
- (unsigned int)authTagLength;
- (id)data;
- (id)nonce;
- (void)setAad:(id)arg1;
- (void)setAuthTagLength:(unsigned int)arg1;
- (void)setData:(id)arg1;
- (void)setNonce:(id)arg1;

@end

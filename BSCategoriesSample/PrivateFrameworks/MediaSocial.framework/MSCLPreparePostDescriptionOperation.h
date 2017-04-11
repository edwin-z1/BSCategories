/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLPreparePostDescriptionOperation : NSOperation {
    MSCLAccountStore * _accountStore;
    BOOL  _attachmentWasDownloadedAndNeedsRemoval;
    NSArray * _attachments;
    BOOL  _attributed;
    SKUIMediaSocialAuthor * _author;
    SKUIClientContext * _clientContext;
    MSCLStoreItem * _contentItem;
    NSArray * _enabledExternalServices;
    id /* block */  _outputBlock;
    NSString * _text;
}

@property (nonatomic, retain) MSCLAccountStore *accountStore;
@property (nonatomic) BOOL attachmentWasDownloadedAndNeedsRemoval;
@property (nonatomic, copy) NSArray *attachments;
@property (getter=isAttributed, nonatomic) BOOL attributed;
@property (nonatomic, copy) SKUIMediaSocialAuthor *author;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, copy) MSCLStoreItem *contentItem;
@property (nonatomic, copy) NSArray *enabledExternalServices;
@property (nonatomic, copy) id /* block */ outputBlock;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)_URLByCopyingAssetAtURL:(id)arg1 error:(id*)arg2;
- (id)_URLByResolvingImageAssetURL:(id)arg1 UTI:(id*)arg2 error:(id*)arg3;
- (id)_URLByResolvingVideoAssetURL:(id)arg1 UTI:(id*)arg2 error:(id*)arg3;
- (id)_URLByWritingData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)_URLByWritingImage:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)_URLByWritingStrippedImageData:(id)arg1 typeIdentifier:(id*)arg2 error:(id*)arg3;
- (id)_assetForURL:(id)arg1 library:(id)arg2 error:(id*)arg3;
- (id)_copyFinalizedAttachmentWithAttachment:(id)arg1 error:(id*)arg2;
- (id)_defaultTitleWithAttachment:(id)arg1;
- (id)_defaultTruncatedText;
- (id)_newCoverImageAttachmentWithAttachment:(id)arg1;
- (id)_refreshTokensForAuthor:(id)arg1 externalServices:(id)arg2 error:(id*)arg3;
- (id)accountStore;
- (BOOL)attachmentWasDownloadedAndNeedsRemoval;
- (id)attachments;
- (id)author;
- (id)clientContext;
- (id)contentItem;
- (id)enabledExternalServices;
- (BOOL)isAttributed;
- (void)main;
- (id /* block */)outputBlock;
- (void)setAccountStore:(id)arg1;
- (void)setAttachmentWasDownloadedAndNeedsRemoval:(BOOL)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributed:(BOOL)arg1;
- (void)setAuthor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setContentItem:(id)arg1;
- (void)setEnabledExternalServices:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end

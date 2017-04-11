/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimePart : NSObject {
    MFWeakReferenceHolder * _body;
    NSMutableDictionary * _bodyParameters;
    NSString * _contentTransferEncoding;
    MFWeakReferenceHolder * _decodedData;
    NSData * _fullData;
    MFMimePart * _nextPart;
    NSMutableDictionary * _otherIvars;
    MFWeakReferenceHolder * _parent;
    NSURL * _parentPartURL;
    NSURL * _partURL;
    MFPartialNetworkDataConsumer * _partialDataConsumer;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    NSString * _subtype;
    NSString * _type;
}

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (Class)attachmentClass;
+ (void)initialize;
+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id*)arg2 subtype:(id*)arg3 info:(id*)arg4;

- (void)_contents:(id*)arg1 toOffset:(unsigned int)arg2 resultOffset:(unsigned int*)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL*)arg6;
- (void)_ensureBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4 decoded:(id*)arg5;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned int)arg1;
- (id)_partThatIsAttachment;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (BOOL)_shouldContinueDecodingProcess;
- (void)addSubpart:(id)arg1;
- (id)alternativeAtIndex:(int)arg1;
- (unsigned int)approximateRawSize;
- (id)attachmentFilename;
- (id)attachmentURLs;
- (id)attachments;
- (id)bodyData;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)bodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyParameterForKey:(id)arg1;
- (id)bodyParameterKeys;
- (id)chosenAlternativePart;
- (void)clearCachedDescryptedMessageBody;
- (void)configureFileWrapper:(id)arg1;
- (id)contentDescription;
- (id)contentID;
- (id)contentLocation;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 asHTML:(BOOL)arg3;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)contentTransferEncoding;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)copyBodyDataToOffset:(unsigned int)arg1 resultOffset:(unsigned int*)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL*)arg4;
- (void)dealloc;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (void)decodeIfNecessary;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeText;
- (id)decodedDataForData:(id)arg1;
- (id)decryptedMessageBodyIsEncrypted:(BOOL*)arg1 isSigned:(BOOL*)arg2;
- (id)description;
- (id)disposition;
- (id)dispositionParameterForKey:(id)arg1;
- (id)dispositionParameterKeys;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)firstChildPart;
- (void)getNumberOfAttachments:(unsigned int*)arg1 isSigned:(BOOL*)arg2 isEncrypted:(BOOL*)arg3;
- (BOOL)hasContents;
- (id)init;
- (BOOL)isAttachment;
- (BOOL)isGenerated;
- (BOOL)isHTML;
- (BOOL)isReadableText;
- (BOOL)isRich;
- (id)languages;
- (id)mimeBody;
- (id)nextSiblingPart;
- (int)numberOfAlternatives;
- (unsigned int)numberOfAttachments;
- (id)parentPart;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parseMimeBody;
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1;
- (id)partNumber;
- (id)partURL;
- (id)preservedHeaderValueForKey:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)rfc822DecodedMessageBody;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)setContentDescription:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentTransferEncoding:(id)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setIsGenerated:(BOOL)arg1;
- (void)setLanguages:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSubparts:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (id)signedData;
- (id)startPart;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)subpartAtIndex:(int)arg1;
- (id)subparts;
- (id)subtype;
- (unsigned long)textEncoding;
- (id)textHtmlPart;
- (unsigned int)totalTextSize;
- (id)type;
- (BOOL)usesKnownSignatureProtocol;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (id)SMIMEError;
- (BOOL)_needsSignatureVerification:(id*)arg1;
- (void)_setSMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (id)copySigners;
- (id)decodeApplicationPkcs7_mime;
- (id)decodeMultipartSigned;
- (id)newEncryptedPartWithData:(id)arg1 compositionSpecification:(id)arg2 encryptedData:(id*)arg3;
- (id)newSignedPartWithData:(id)arg1 sender:(id)arg2 compositionSpecification:(id)arg3 signatureData:(id*)arg4;

@end

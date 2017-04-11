/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary * _cache;
}

@property (nonatomic, retain) MFMessageFileWrapper *fileWrapper;

+ (unsigned int)precedenceLevel;

- (unsigned int)approximateSize;
- (id)cachedValueForKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (BOOL)hasBeenDownloaded;
- (id)init;
- (id)initWithWrapper:(id)arg1;
- (void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2;
- (BOOL)isPlaceholder;
- (id)mimePart;
- (BOOL)needsRedownload;
- (id)persistentUniqueIdentifier;
- (void)setCachedValue:(id)arg1 forKey:(id)arg2;
- (void)setFileWrapper:(id)arg1;
- (void)setMimePart:(id)arg1;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingGuess;
- (id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2;

@end

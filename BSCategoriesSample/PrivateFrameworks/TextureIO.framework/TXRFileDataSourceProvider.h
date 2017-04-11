/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRFileDataSourceProvider : NSObject <TXRDataSourceProvider> {
    <TXRBufferAllocator> * _bufferAllocator;
    NSObject<OS_dispatch_queue> * _fileIOQueue;
    NSObject<OS_dispatch_semaphore> * _infoLoaded;
    <TXRParser> * _parser;
    TXRTextureInfo * _textureInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)_determineFileType:(id)arg1;
- (void)_parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)provideImageInfoAtLevel:(unsigned int)arg1 element:(unsigned int)arg2 face:(unsigned int)arg3;
- (id)provideTextureInfo;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineFileStorage : NSObject <CPLAbstractObject> {
    NSURL * _baseURL;
    NSURL * _crashMarkerURL;
    BOOL  _deleteImmediately;
    BOOL  _keepOriginals;
    NSObject<OS_dispatch_queue> * _lock;
    NSString * _logDomain;
    CPLPlatformObject * _platformObject;
    NSMutableArray * _uncommittedFiles;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleteImmediately;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL keepOriginals;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_addIdentityToUncommittedFiles:(id)arg1;
- (BOOL)_compactStorageIncludeOriginals:(BOOL)arg1 desiredFreeSpace:(unsigned long long*)arg2 error:(id*)arg3;
- (BOOL)_fixupIdentity:(id)arg1 fileURL:(id)arg2 data:(id)arg3 error:(id*)arg4;
- (BOOL)_recoverFromCrashWithRecoveryHandler:(id /* block */)arg1 error:(id*)arg2;
- (void)_removeIdentityFromUncommittedFiles:(id)arg1;
- (id)baseURL;
- (void)checkFileSizeForIdentity:(id)arg1;
- (BOOL)closeWithError:(id*)arg1;
- (BOOL)commitFileWithIdentity:(id)arg1 error:(id*)arg2;
- (BOOL)compactStorage:(id*)arg1;
- (BOOL)compactStorageIncludeOriginals:(BOOL)arg1 error:(id*)arg2;
- (unsigned int)countOfUncommittedFiles;
- (BOOL)deleteFileWithIdentity:(id)arg1 error:(id*)arg2;
- (BOOL)deleteFileWithIdentity:(id)arg1 includingOriginal:(BOOL)arg2 error:(id*)arg3;
- (BOOL)deleteImmediately;
- (BOOL)discardAllRetainedFileURLsWithError:(id*)arg1;
- (BOOL)discardUncommittedFileWithIdentity:(id)arg1 error:(id*)arg2;
- (void)doRead:(id /* block */)arg1;
- (BOOL)doWrite:(id /* block */)arg1 error:(id*)arg2;
- (id)fileEnumerator;
- (id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(id /* block */)arg2;
- (BOOL)hasCrashMarker;
- (BOOL)hasFileWithIdentity:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (BOOL)keepOriginals;
- (BOOL)openWithRecoveryHandler:(id /* block */)arg1 error:(id*)arg2;
- (id)platformObject;
- (BOOL)releaseFileURL:(id)arg1 error:(id*)arg2;
- (id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned int)arg2 error:(id*)arg3;
- (void)setDeleteImmediately:(BOOL)arg1;
- (void)setKeepOriginals:(BOOL)arg1;
- (BOOL)storeData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(BOOL*)arg4 error:(id*)arg5;
- (BOOL)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 needsCommit:(BOOL*)arg4 error:(id*)arg5;
- (BOOL)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id*)arg4;
- (BOOL)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(BOOL)arg3 error:(id*)arg4;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 error:(id*)arg3;
- (BOOL)tryToFreeDiskSpace:(unsigned long long)arg1 actuallyFreedSpace:(unsigned long long*)arg2 includeOriginals:(BOOL)arg3 error:(id*)arg4;

@end

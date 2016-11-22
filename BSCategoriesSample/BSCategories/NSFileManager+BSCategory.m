//
//  NSFileManager+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "NSFileManager+BSCategory.h"

@implementation NSFileManager (BSCategory)

#pragma mark - sandbox

- (NSURL *)bs_documentsURL {
    return [[self URLsForDirectory:NSDocumentDirectory inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)bs_documentsPath {
    return [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSURL *)bs_cachesURL {
    return [[self URLsForDirectory:NSCachesDirectory inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)bs_cachesPath {
    return [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSURL *)bs_libraryURL {
    return [[self URLsForDirectory:NSLibraryDirectory inDomains:NSUserDomainMask] lastObject];
}

- (NSString *)bs_libraryPath {
    return [NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES) firstObject];
}

- (NSArray<NSString *> *)bs_allFileURLs {
    NSURL *bundleURL = [[NSBundle mainBundle] bundleURL];
    return [self bs_fileURLsAtURL:bundleURL];
}

- (NSArray<NSString *> *)bs_fileURLsAtURL:(NSURL *)url {
    
    NSDirectoryEnumerator *enumerator = [self enumeratorAtURL:url includingPropertiesForKeys:@[NSURLIsDirectoryKey] options:NSDirectoryEnumerationSkipsHiddenFiles errorHandler:^BOOL(NSURL *url, NSError *error) {
        if (error) {
            NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
            @throw exception;
            return NO;
        }
        return YES;
    }];
    
    NSMutableArray *fileURLs = [NSMutableArray array];
    for (NSURL *fileURL in enumerator) {
        
        NSNumber *isDirectory;
        NSError *error = nil;
        [fileURL getResourceValue:&isDirectory forKey:NSURLIsDirectoryKey error:&error];
        if (error) {
            NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
            @throw exception;
            return nil;
        }
        
        // Skip directories
        if ([isDirectory boolValue]) {
            [self bs_fileURLsAtURL:fileURL];
            continue;
        }
        
        [fileURLs addObject:fileURL];
    }
    return fileURLs.copy;
}

#pragma mark - file size

- (long long)bs_fileSizeWithPath:(NSString *)path {
    NSError *error = nil;
    if(![self fileExistsAtPath:path]){
        // File not exist
        error = [NSError errorWithDomain:NSCocoaErrorDomain code:0 userInfo:@{ NSLocalizedDescriptionKey: [NSString stringWithFormat:@"File at path '%@' does not exist", path] }];
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return -1;
    }
    
    // File exist
    NSDictionary *attributes = [self attributesOfItemAtPath:path error:&error];
    if (error) {
        NSException *exception = [NSException exceptionWithName:[NSString stringWithFormat:@"Error happen in '%@'", NSStringFromSelector(_cmd)] reason:error.localizedDescription userInfo: nil];
        @throw exception;
        return -1;
    }
    return [attributes[NSFileSize] longLongValue];
}

@end

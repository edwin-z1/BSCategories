//
//  NSFileManager+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - sandbox

/// "Documents" folder in this app's sandbox.
- (NSURL *)bs_documentsURL;
- (NSString *)bs_documentsPath;

/// "Caches" folder in this app's sandbox.
- (NSURL *)bs_cachesURL;
- (NSString *)bs_cachesPath;

/// "Library" folder in this app's sandbox.
- (NSURL *)bs_libraryURL;
- (NSString *)bs_libraryPath;

/// Get file urls by recursion.
- (NSArray <NSString *>*)bs_allFileURLs;
- (NSArray<NSString *> *)bs_fileURLsAtURL:(NSURL *)url;
#pragma mark - file size

/// Returns -1 when error occors;
- (long long)bs_fileSizeWithPath:(NSString *)path;

NS_ASSUME_NONNULL_END

@end

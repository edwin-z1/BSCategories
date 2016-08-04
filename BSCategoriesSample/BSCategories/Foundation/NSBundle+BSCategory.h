//
//  NSBundle+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (BSCategory)

NS_ASSUME_NONNULL_BEGIN

/// Application's Bundle Name (show in SpringBoard).
- (NSString *)bs_bundleName;

/// Application's Version.  e.g. "1.2.0"
- (NSString *)bs_version;

/// Application's Build number. e.g. "123"
- (NSString *)bs_buildVersion;

NS_ASSUME_NONNULL_END

@end

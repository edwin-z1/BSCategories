//
//  UIDevice+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - infomation

/// Returns a unique string when: 只要用户不还原广告和重置系统.
- (NSString *)bs_IDFAString;

/// Returns a unique string when: for apps that come from the same vendor running on the same device.
- (NSString *)bs_IDFVString;

- (BOOL)bs_isSimulator;

/// 是否越狱
- (BOOL)bs_isJailBroken;

- (NSDate *)bs_systemUptime;

#pragma mark - ip

/// WIFI IP address of this device (can be nil). e.g. @"192.168.1.111"
- (nullable NSString *)bs_ipAddressWIFI;

/// Cellular IP address of this device (can be nil). e.g. @"10.2.2.222"
- (nullable NSString *)bs_ipAddressCellular;

#pragma mark - disk space

/// Total disk space in byte. (-1 when error occurs)
- (int64_t)bs_diskSpace;

/// Free disk space in byte. (-1 when error occurs)
- (int64_t)bs_diskSpaceFree;

/// Used disk space in byte. (-1 when error occurs)
- (int64_t)bs_diskSpaceUsed;


#pragma mark - memory

/// Total physical memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryTotal;

/// Used (active + inactive + wired) memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryUsed;

/// Free memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryFree;

/// Acvite memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryActive;

/// Inactive memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryInactive;

/// Wired memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryWired;

/// Purgable memory in byte. (-1 when error occurs)
- (int64_t)bs_memoryPurgable;

#pragma mark - CPU
///=============================================================================
/// @name CPU Information
///=============================================================================

/// Avaliable CPU processor count.
- (NSUInteger)bs_cpuProcessorCount;

/// Current CPU usage, 1.0 means 100%. (-1 when error occurs)
- (float)bs_cpuUsage;

/// Current CPU usage per processor (array of NSNumber), 1.0 means 100%. (nil when error occurs)
- (NSArray<NSNumber *> *)bs_cpuProcessorsUsage;

NS_ASSUME_NONNULL_END

@end

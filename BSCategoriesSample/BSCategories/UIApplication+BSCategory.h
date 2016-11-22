//
//  UIApplication+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIApplication (BSCategory)

NS_ASSUME_NONNULL_BEGIN

#pragma mark - call

- (BOOL)bs_callWithPhoneNumber:(NSString *)phoneNumber;

#pragma mark - notifications

/// For Apple APNS notification registeration.
- (void)bs_registerForRemoteNotifications;

- (void)bs_scheduleLocalNotificationWithFireDate:(NSDate *)fireDate message:(NSString *)message;

/// Present local notification at a specific date with a message to display, and has a chance to configure notification instance.
- (void)bs_scheduleLocalNotificationWithFireDate:(NSDate *)fireDate message:(NSString *)message constructBlock:(nullable void (^)(UILocalNotification *notification))constructBlock;


NS_ASSUME_NONNULL_END

@end

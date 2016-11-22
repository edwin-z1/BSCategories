//
//  UIApplication+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIApplication+BSCategory.h"
#import "BSUtilities.h"

@implementation UIApplication (BSCategory)

#pragma mark - call

- (BOOL)bs_callWithPhoneNumber:(NSString *)phoneNumber {

    NSString *phone = [phoneNumber stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLQueryAllowedCharacterSet]];
    if (!phone) {
        return NO;
    }
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"tel://%@", phone]];
    
    if (![self canOpenURL:url]) {
        return NO;
    }
    return [self openURL:url];
}

#pragma mark - notifications

- (void)bs_registerForRemoteNotifications {
    
    if (BSDevice().systemVersion.doubleValue > 8.0) {
        UIUserNotificationType types = UIUserNotificationTypeBadge | UIUserNotificationTypeSound | UIUserNotificationTypeAlert;
        NSSet<UIUserNotificationCategory *> *categories = nil;
        UIUserNotificationSettings *settings = [UIUserNotificationSettings settingsForTypes:types categories:categories];
        [self registerUserNotificationSettings:settings];
        [self registerForRemoteNotifications];
    } else {
        UIRemoteNotificationType notificationTypes = UIRemoteNotificationTypeBadge | UIRemoteNotificationTypeSound | UIRemoteNotificationTypeAlert;
        [self registerForRemoteNotificationTypes:notificationTypes];
    }
}

- (void)bs_scheduleLocalNotificationWithFireDate:(NSDate *)fireDate message:(NSString *)message {
    [self bs_scheduleLocalNotificationWithFireDate:fireDate message:message constructBlock:nil];
}

- (void)bs_scheduleLocalNotificationWithFireDate:(NSDate *)fireDate message:(NSString *)message constructBlock:(void (^)(UILocalNotification *))constructBlock {
    UILocalNotification *notification = [[UILocalNotification alloc] init];
    notification.fireDate = fireDate;
    notification.alertBody = message;
    notification.soundName = UILocalNotificationDefaultSoundName;
    notification.timeZone = [NSTimeZone defaultTimeZone];
    notification.repeatInterval = 0;
    notification.repeatCalendar = [NSCalendar currentCalendar];
    notification.applicationIconBadgeNumber = self.applicationIconBadgeNumber + 1;
    if (constructBlock) constructBlock(notification);
    [self scheduleLocalNotification:notification];
}

@end

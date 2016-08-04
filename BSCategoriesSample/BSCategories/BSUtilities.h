//
//  BSUtilities.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AppDelegate;

#pragma mark - share instance


FOUNDATION_EXPORT NSUserDefaults *BSUserDefaults();
FOUNDATION_EXPORT NSNotificationCenter *BSNotificationCenter();
FOUNDATION_EXPORT UIApplication *BSApplication();
FOUNDATION_EXPORT UIDevice *BSDevice();
FOUNDATION_EXPORT UIScreen *BSScreen();
FOUNDATION_EXPORT NSFileManager *BSFileManager();

#pragma mark - app

FOUNDATION_EXPORT AppDelegate *BSAppDelegate();
FOUNDATION_EXPORT UIWindow * BSRootWindow();
FOUNDATION_EXPORT UIViewController *BSRootViewController();
FOUNDATION_EXPORT UIStoryboard *BSMainStoryboard();

#pragma mark - screen

/// base on iPhone 6
FOUNDATION_EXPORT CGFloat BSScreenFactorWidth();
FOUNDATION_EXPORT CGFloat BSScreenFactorHeight();

#pragma mark - transform3D

FOUNDATION_EXPORT CATransform3D BSTransform3DPerspect(CATransform3D transform, CGPoint center, CGFloat disZ);

#pragma mark - degree and radian

/// Convert degrees to radians.
FOUNDATION_EXPORT CGFloat BSDegreeToRadian(CGFloat degree);

/// Convert radians to degrees.
FOUNDATION_EXPORT CGFloat BSRadianToDegree(CGFloat radian);

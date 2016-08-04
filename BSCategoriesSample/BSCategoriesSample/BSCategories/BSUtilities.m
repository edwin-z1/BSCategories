//
//  BSUtilities.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/26.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "BSUtilities.h"
#import "UIScreen+BSCategory.h"

#pragma mark - share instance

NSUserDefaults *BSUserDefaults() {
    return [NSUserDefaults standardUserDefaults];
}

NSNotificationCenter *BSNotificationCenter() {
    return [NSNotificationCenter defaultCenter];
}

UIApplication *BSApplication() {
    return [UIApplication sharedApplication];
}

UIDevice *BSDevice() {
    return [UIDevice currentDevice];
}

UIScreen *BSScreen() {
    return [UIScreen mainScreen];
}

NSFileManager *BSFileManager() {
    return [NSFileManager defaultManager];
}

#pragma mark - app

AppDelegate *BSAppDelegate() {
    return (AppDelegate *)[BSApplication() delegate];
}

UIWindow *BSRootWindow() {
    return [[BSApplication() delegate] window];
}

UIViewController *BSRootViewController() {
    return [BSRootWindow() rootViewController];
}

UIStoryboard *BSMainStoryboard() {
    return [UIStoryboard storyboardWithName:@"Main" bundle:nil];
}

#pragma mark - screen

CGFloat BSScreenFactorWidth() {
    return BSScreen().bs_width/375.0;
}

CGFloat BSScreenFactorHeight() {
    return BSScreen().bs_height/667.0;
}


#pragma mark - transform3D

CATransform3D BSTransform3DPerspect(CATransform3D transform, CGPoint center, CGFloat disZ) {
    
    CATransform3D transformToCenter = CATransform3DMakeTranslation(-center.x, -center.y, 0);
    CATransform3D transformToOrigin = CATransform3DMakeTranslation(center.x, center.y, 0);
    CATransform3D scale = CATransform3DIdentity;
    scale.m34 = -1/disZ;
    CATransform3D concat = CATransform3DConcat(CATransform3DConcat(transformToCenter, scale), transformToOrigin);
    
    return CATransform3DConcat(transform, concat);
}

#pragma mark - degree and radian

/// Convert degrees to radians.
CGFloat BSDegreeToRadian(CGFloat degree) {
    return degree * M_PI / 180;
}

/// Convert radians to degrees.
CGFloat BSRadianToDegree(CGFloat radian) {
    return radian * 180 / M_PI;
}
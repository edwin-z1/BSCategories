//
//  SomeView.m
//  BSCategoriesSample
//
//  Created by 张亚东 on 16/8/19.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "SomeView.h"
#import "UIResponder+BSCategory.h"
#import "BSCategories.h"

@implementation SomeView

- (void)awakeFromNib {
    [super awakeFromNib];
}

- (void)bs_routerWithEventName:(NSString *)eventName userInfo:(NSDictionary *)userInfo {
    NSLog(@"view = %@", eventName);
    
    [self.nextResponder bs_routerWithEventName:eventName userInfo:userInfo];
}

@end

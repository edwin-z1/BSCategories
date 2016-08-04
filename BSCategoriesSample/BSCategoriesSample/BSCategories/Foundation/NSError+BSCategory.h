//
//  NSError+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSError (BSCategory)

- (BOOL)bs_printErrorDescriptionWithSelector:(nullable SEL)selector;

@end

//
//  UITextField+BSCategory.h
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (BSCategory)

/// Set all text selected.
- (void)bs_selectAllText;

/// Set text in range selected.
- (void)bs_setSelectedRange:(NSRange)range;

@end

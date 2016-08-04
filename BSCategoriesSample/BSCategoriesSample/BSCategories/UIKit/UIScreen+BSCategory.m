//
//  UIScreen+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/28.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIScreen+BSCategory.h"

@implementation UIScreen (BSCategory)

- (CGSize)bs_size {
    return self.bounds.size;
}

- (CGFloat)bs_width {
    return self.bs_size.width;
}

- (CGFloat)bs_height {
    return self.bs_size.height;
}

@end

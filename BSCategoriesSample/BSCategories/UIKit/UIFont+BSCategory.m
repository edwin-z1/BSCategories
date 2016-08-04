//
//  UIFont+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "UIFont+BSCategory.h"

@implementation UIFont (BSCategory)

+ (instancetype)bs_preferredHeadline {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleHeadline];
}

+ (instancetype)bs_preferredSubheadline {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleSubheadline];
}

+ (instancetype)bs_preferredBoddy {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleBody];
}

+ (instancetype)bs_preferredFootnote {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleFootnote];
}

+ (instancetype)bs_preferredCaption1 {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleCaption1];
}

+ (instancetype)bs_preferredCaption2 {
    return [UIFont preferredFontForTextStyle:UIFontTextStyleCaption2];
}

@end

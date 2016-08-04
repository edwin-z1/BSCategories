//
//  MPMediaQuery+BSCategory.m
//  Objective-C_Categories
//
//  Created by 张亚东 on 16/7/27.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "MPMediaQuery+BSCategory.h"

@implementation MPMediaQuery (BSCategory)

+ (instancetype)bs_localSongsQuery {
    MPMediaQuery *query = [MPMediaQuery songsQuery];
    [query addFilterPredicate:[MPMediaPropertyPredicate predicateWithValue:@(NO) forProperty:MPMediaItemPropertyIsCloudItem]];
    return query;
}

@end

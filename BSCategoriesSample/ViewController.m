//
//  ViewController.m
//  BSCategoriesSample
//
//  Created by 张亚东 on 16/8/4.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "ViewController.h"
#import "BSCategories/BSCategories.h"

#import <dlfcn.h>


@interface ViewController ()

- (IBAction)respondsToButton:(UIButton *)sender;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.

    CGSize size = [@" " bs_sizeForConstrainedSize:CGSizeMake(100, 100) attributes:@{NSFontAttributeName: [UIFont systemFontOfSize:11]}];
    NSLog(@"%@", NSStringFromCGSize(size));
    [self bs_setObserverForKeyPath:@"view" block:^(id  _Nonnull oldValue, id  _Nonnull newValue) {
        
    }];
    
    
//    UIView *aView = [UIView new];
//    @try {
//        NSLog(@"%@",aView.bs_viewController);
//    } @catch (NSException *exception) {
//        NSLog(@"%@",exception);
//    } @finally {
//        
//    }
}


- (void)bs_routerWithEventName:(NSString *)eventName userInfo:(NSDictionary *)userInfo {
    NSLog(@"%@",eventName);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)respondsToButton:(UIButton *)sender {
    
    [sender bs_routerWithEventName:@"heihei" userInfo:nil];
}
@end

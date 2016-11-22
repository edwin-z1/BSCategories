//
//  ViewController.m
//  BSCategoriesSample
//
//  Created by 张亚东 on 16/8/4.
//  Copyright © 2016年 张亚东. All rights reserved.
//

#import "ViewController.h"
#import "BSCategories/BSCategories.h"

@interface ViewController ()

- (IBAction)respondsToButton:(UIButton *)sender;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIView *aView = [UIView new];
    NSLog(@"%@",aView.bs_viewController);
    @try {
        NSLog(@"%@",aView.bs_viewController);
    } @catch (NSException *exception) {
        NSLog(@"%@",exception);
    } @finally {
        
    }
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

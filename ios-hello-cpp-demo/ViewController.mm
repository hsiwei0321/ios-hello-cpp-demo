//
//  ViewController.m
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#import "ViewController.h"
#import "Greeting.hpp"

// cppをimportするファイルは、mmファイルに変更する
@interface ViewController () {
    Greeting greeting;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

/// CPPのファイルを表示する
- (IBAction)didTapButton:(UIButton *)sender {

    NSLog(@"%@",
          [NSString stringWithCString:greeting.greet().c_str()
                             encoding:[NSString defaultCStringEncoding]]);

}

@end

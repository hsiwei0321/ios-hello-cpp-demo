//
//  ViewController.m
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#import "ViewController.h"
#import "Greeting.hpp"
#import "Neko.hpp"
#import "SalaryNeko.hpp"

// cppをimportするファイルは、mmファイルに変更する
@interface ViewController () {
    Greeting greeting;
    Neko cat;
    SalaryNeko cat2;
}
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

/// CPPのファイルを表示する
- (IBAction)didTapButton:(UIButton *)sender {
    [self salaryNekoTest];
}

- (void)greetTest  {
    NSLog(@"%@",
          [NSString stringWithCString:greeting.greet().c_str()
                             encoding:[NSString defaultCStringEncoding]]);
}

- (void)catTest {
    cat.setName("たま");
    cat.cry();
}

- (void)salaryNekoTest {
    cat2.setName("しゃむねこ");
    NSLog(@"月収は、%zd万円です。", cat2.getMonthlyPay());
    NSLog(@"年収は、%zd万円です。", cat2.getYearPay());

    cat2.incrementMonthlyPay();
    NSLog(@"月収は、%zd万円です。", cat2.getMonthlyPay());
    NSLog(@"年収は、%zd万円です。", cat2.getYearPay());
}


@end

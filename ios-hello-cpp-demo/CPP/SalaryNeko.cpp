//
//  SalaryNeko.cpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#include "SalaryNeko.hpp"

/// コンストラクタ
SalaryNeko::SalaryNeko() {
    monthlyPay = 20;
}

/**
 月収を返す

 @return 月収
 */
int SalaryNeko::getMonthlyPay() {
    return monthlyPay;
}

/**
 年収を返す

 @return 年収
 */
int SalaryNeko::getYearPay() {
    return  monthlyPay * 12;
}

/**
 月収を増やす
 */
void SalaryNeko:: incrementMonthlyPay() {
    monthlyPay += 10;
}

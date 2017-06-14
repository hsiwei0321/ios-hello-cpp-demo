//
//  SalaryNeko.hpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#ifndef SalaryNeko_hpp
#define SalaryNeko_hpp

#include <stdio.h>
#include "Neko.hpp"

class SalaryNeko: public Neko {
private:
    int monthlyPay;

public:
    SalaryNeko();
    int getMonthlyPay();
    int getYearPay();
    void incrementMonthlyPay();
};

#endif /* SalaryNeko_hpp */

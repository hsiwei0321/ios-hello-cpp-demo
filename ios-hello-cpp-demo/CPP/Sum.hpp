//
//  Sum.hpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#ifndef Sum_hpp
#define Sum_hpp

#include <stdio.h>
#include <list>
#include <string>
using namespace std;

class Sum {
private:
   list<int> points;

public:
    Sum();

    list<int> getPoints();
    int total();
    double ave();
    list<string> getWeeks();
};

#endif /* Sum_hpp */

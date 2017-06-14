//
//  Greeting.hpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#ifndef Greeting_hpp
#define Greeting_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Greeting {
    string greeting;
public:
    Greeting();
    string greet();
};


#endif /* Greeting_hpp */

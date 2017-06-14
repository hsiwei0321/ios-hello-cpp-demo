//
//  Neko.hpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#ifndef Neko_hpp
#define Neko_hpp

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Neko {

private:
    string name;

public:
    Neko();
    void setName(string n);
    void cry() const;
};


#endif /* Neko_hpp */

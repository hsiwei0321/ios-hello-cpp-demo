//
//  Greeting.cpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#include "Greeting.hpp"

//コンストラクタ
Greeting::Greeting() {
    greeting = "Hello C++!";
}

//メソッド
std::string Greeting::greet() {
    return greeting;
}

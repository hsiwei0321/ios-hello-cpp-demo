//
//  Neko.cpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#include "Neko.hpp"

Neko::Neko() {
    //コンストラクタに引数を渡すことができない
}

void Neko::setName(string n) {
    name = n;
}

void Neko::cry() const {
    cout << name << endl;
}

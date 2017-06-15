//
//  Sum.cpp
//  ios-hello-cpp-demo
//
//  Created by Eiji Kushida on 2017/06/14.
//  Copyright © 2017年 Eiji Kushida. All rights reserved.
//

#include "Sum.hpp"

Sum:: Sum() {
    points = {1,2,3,4,5,6,7,8,9,10};
}

/**
 ポイントの配列を取得する

 @return ポイントの配列
 */
list<int> Sum:: getPoints() {
    return points;
}

/**
 合計を求める

 @return 合計値
 */
int Sum:: total() {

    int sum = 0;

    for(int i = 0; i < 10; i++) {
        sum += i;
    }
    return sum;
}

/**
 平均を求める

 @return 平均値
 */
double Sum::ave() {

    int sum = total();
    return sum / 10.0;
}

/**
 週の文字列一覧を取得する

 @return 週の文字列一覧
 */
list<string> Sum::getWeeks() {

    list<string> weeks;
    weeks.emplace_back("Sun.");
    weeks.emplace_back("Mon.");
    weeks.emplace_back("Tue.");
    weeks.emplace_back("Wed.");
    weeks.emplace_back("Thu.");
    weeks.emplace_back("Fri.");
    weeks.emplace_back("Sat.");
    return weeks;
}

list<Neko> Sum::getNekos() {

    list<Neko> nekos;

    Neko cat1 = Neko();
    cat1.setName("1");
    nekos.emplace_back(cat1);

    Neko cat2 = Neko();
    cat1.setName("2");
    nekos.emplace_back(cat2);

    return nekos;
}


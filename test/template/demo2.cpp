//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "stdlib.h"
#include "2.h"

using namespace std;

//void printTime(Time &t); //友元全局函数,

int main() {
    Time t(6, 34, 25);
    Match m; //实例化Match类
    m.printTime(t); // 调用Match类的成员方法
    return 0;
}

//void printTime(Time &t) {
//    cout << t.m_iHour << ":" << t.m_iMinite << ":" << t.m_iSecond << endl;
//}



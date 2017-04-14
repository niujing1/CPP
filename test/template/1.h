//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_1_H
#define CPP_1_H

#include <iostream>
using namespace std;

class Time{
    //把printTime声明为友元函数，这样就可以在函数里边访问Time类的私有成员了
    friend void printTime(Time &t);
public:
    Time(int hour,int min,int sec);//这样直接访问会提示错误，不能访问私有成员

private:
    int m_iHour;
    int m_iMinite;
    int m_iSecond;
};

#endif //CPP_1_H

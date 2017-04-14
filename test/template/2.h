//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_2_H
#define CPP_2_H

#include <iostream>
#include "2-1.h"
using namespace std;

class Time{
    //声明类成员函数为友元函数,加上类名，且要加上类的头文件
    friend void Match::printTime(Time &t);
public:
    Time(int hour,int min,int sec);//这样直接访问会提示错误，不能访问私有成员

private:
    int m_iHour;
    int m_iMinite;
    int m_iSecond;
};

#endif //CPP_2_H

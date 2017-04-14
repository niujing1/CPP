//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_3_H
#define CPP_3_H

#include <iostream>

using namespace std;

class Match;

class Time {
    friend class Match;
public:
    Time(int hour, int min, int sec);//这样直接访问会提示错误，不能访问私有成员

private:
    void printTime();

    int m_iHour;
    int m_iMinite;
    int m_iSecond;
};

#endif //CPP_3_H

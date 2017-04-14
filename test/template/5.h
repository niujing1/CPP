//
// Created by 牛京 on 17/2/19.
// 成员函数方式重载-
//

#ifndef CPP_5_H
#define CPP_5_H

#include <iostream>
using namespace std;

class Coordinate{
public:
    Coordinate(int x,int y);
    Coordinate &operator-(); //定义运算符重载函数
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif //CPP_5_H

//
// Created by 牛京 on 17/2/19.
// 友元函数方式重载-
//

#ifndef CPP_6_H
#define CPP_6_H

#include <iostream>
using namespace std;

class Coordinate{
    friend Coordinate &operator-(Coordinate &c);//传入coordinate的对象
public:
    Coordinate(int x,int y);
    //Coordinate &operator-(); //定义运算符重载函数
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif //CPP_5_H

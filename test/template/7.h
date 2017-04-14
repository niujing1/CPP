//
// Created by 牛京 on 17/2/19.
// ++运算符重载

#ifndef CPP_7_H
#define CPP_7_H

#include <iostream>
using namespace std;

class Coordinate{
public:
    Coordinate(int x,int y);
    Coordinate &operator++(); //定义运算符重载函数
    //Coordinate operator++(int); //后置++的实现
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};


#endif //CPP_7_H

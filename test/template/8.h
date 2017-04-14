//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_8_H
#define CPP_8_H

#include <iostream>
using namespace std;

class Coordinate{
    friend Coordinate operator+(Coordinate c1,Coordinate c2);//友元函数方式实现
    friend ostream &operator<<(ostream &output,Coordinate &coor);//实现<< 运算符的重载
public:
    Coordinate(int x,int y);
    Coordinate &operator++(); //定义运算符重载函数
    //Coordinate operator++(int); //后置++的实现
   // Coordinate operator+(Coordinate &c); //成员函数方式实现+重载
    int operator[](int index);//对[]的重载
    int getX();
    int getY();

private:
    int m_iX;
    int m_iY;
};

#endif //CPP_8_H

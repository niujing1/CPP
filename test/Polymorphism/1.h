//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_1_H
#define CPP_1_H

#include <iostream>
using namespace std;

class Shape{
public:
    Shape();
    virtual ~Shape();
    virtual double calcArea(); //不加virtual调用的是父类，加上调用的是子类
    // double calcArea(); //不加virtual调用的是父类，加上调用的是子类
};

#endif //CPP_1_H

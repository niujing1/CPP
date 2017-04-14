//
// Created by 牛京 on 17/2/14.
//

#ifndef CPP_7_H_H
#define CPP_7_H_H

#endif //CPP_7_H_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Teacher {
public:
    Teacher(string name = "nj", int age = 1, int m=100);//重载构造函数
    void setName(string _name); //只声明，类外定义
    string getName();

    void setAge(int _age);

    int getAge();

    int getMax();

private:
    string m_strName;
    int m_iAge;
    const int m_iMax;
};

//
// Created by 牛京 on 17/2/14.
//

#ifndef CPP_6_H
#define CPP_6_H

#endif //CPP_6_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Teacher{
public:
    Teacher();
    Teacher(string name,int age;//重载构造函数
    void setName(string _name); //只声明，类外定义
    string getName();
    void setAge(int _age);
    int getAge();
    int getMax();
    //void teach();
private:
    string m_strName;
    int m_iAge;
    int m_iMax;
};

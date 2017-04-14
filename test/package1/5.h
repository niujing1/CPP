//
// Created by 牛京 on 17/2/14.
//

#ifndef CPP_5_H
#define CPP_5_H

#endif //CPP_5_H

#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Teacher{
public:
    void setName(string _name); //只声明，类外定义
    string getName();
    void setSex(string _sex);
    string getSex();
    void setAge(int _age);
    int getAge();
    void teach();
private:
    string m_strName;
    string m_strSex;
    int m_iAge;
};



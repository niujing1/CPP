//
// Created by 牛京 on 17/2/14.
//

#ifndef CPP_8_H
#define CPP_8_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Teacher {
public:
    Teacher(string name = "nj", int age = 1);
    Teacher(const Teacher &tea);//定义copy函数
    ~Teacher();
    void setName(string _name); //只声明，类外定义
    string getName();
    void setAge(int _age);
    int getAge();

private:
    string m_strName;
    int m_iAge;
};

#endif //CPP_8_H



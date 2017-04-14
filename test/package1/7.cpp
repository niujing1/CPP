//
// Created by 牛京 on 17/2/14.
// 初始化列表会在构造函数之前执行，只能用于构造函数，可以同时初始化多个属性
//

#include "7.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Teacher::Teacher(string name, int age, int m) : m_strName(name), m_iAge(age), m_iMax(m) {
    cout << "Teacher(string name, int age)" << endl;
}

void Teacher::setName(string _name) {
    m_strName = _name;
}

string Teacher::getName() {
    return m_strName;
}

void Teacher::setAge(int _age) {
    m_iAge = _age;
}

int Teacher::getAge() {
    return m_iAge;
}

int Teacher::getMax() {
    return m_iMax;
}


//
// Created by 牛京 on 17/2/14.
// copy构造函数
//
#include "8.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Teacher::Teacher(string name, int age) : m_strName(name), m_iAge(age) {
    cout << "Teacher(string name, int age)" << endl;
}

Teacher::Teacher(const Teacher &tea) {
    cout << "copy " << endl;
}

Teacher::~Teacher(){
    cout << " destructor " << endl;
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



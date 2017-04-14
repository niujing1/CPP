//
// Created by 牛京 on 17/2/14.
// 使用类的封装去设置类属性
//
#include "5.h"
#include <iostream>
#include <string>
using namespace std;
void Teacher::setName(string _name) {
    m_strName = _name;
}

string Teacher::getName() {
    return m_strName;
}

void Teacher::setSex(string _sex) {
    m_strSex = _sex;
}

string Teacher::getSex() {
    return m_strSex;
}

void Teacher::setAge(int _age) {
    m_iAge = _age;
}

int Teacher::getAge() {
    return m_iAge;
}

void Teacher::teach() {
    cout << "now we start our course." << endl;
}

int main(){
    Teacher t;
    t.setName("nj");
    t.setSex("male");
    t.setAge(20);

    cout << "name is : " << t.getName() << endl;
    cout << "sex is : " << t.getSex() << endl;
    cout << "age is : " << t.getAge() << endl;
    t.teach();
    return 0;
}



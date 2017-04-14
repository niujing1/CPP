//
// Created by 牛京 on 17/2/14.
// 构造函数，可以重载，自动调用且仅调用一次
//
#include "6.h"
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

Teacher::Teacher() {
    m_strName = "nj";
    m_iAge = 20;
    cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, int age) {
    m_strName = name;
    m_iAge = age;
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

//void Teacher::teach() {
//    cout << "now we start our course." << endl;
//}


int main(){
    Teacher t1;
    Teacher t2("nj",25);
    cout << t1.getName() << " " << t1.getAge() <<  endl;
    cout << t2.getName() << " " << t2.getAge() << endl;
    //system("pause");
    return 0;
}



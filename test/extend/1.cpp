//
// Created by 牛京 on 17/2/17.
//

#include <iostream>
#include <stdlib.h>
#include "1.h"
using namespace std;

Person::Person() {
    cout << "Person " << endl;
}

Person::~Person() {
    cout << "~Person " << endl;
}

void Person::eat() {
    m_iSalary = "jim";
    cout << "eat" << strName << m_iSalary << endl;
}


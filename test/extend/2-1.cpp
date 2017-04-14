//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include "2-1.h"

using namespace std;

Slodier::Slodier() {

}

Slodier::~Slodier() {

}

void Slodier::work() {
    Person::play();
    m_iAge = 20;
    m_strName = "nj";
    cout << m_strName << endl;
    cout << m_iAge << endl;
    cout << "Slodier--worker()" << endl;
}

void Slodier::play() {
    cout << "Slodier--play" << endl;
}


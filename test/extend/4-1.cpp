//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "4-1.h"

using namespace std;

Slodier::Slodier() {
    m_strName = "slodier";
    cout << "Soldier name is " << m_strName << endl;
}

Slodier::~Slodier() {
    cout << " ~Slodier" << endl;
}

void Slodier::work() {
    cout << "work" << endl;
}



//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "4.h"

using namespace std;

int Trank::s_iCount = 10;

Trank::Trank(char code) {
    m_cCode = code;
    s_iCount++;
    cout << "Trank" << endl;
}

Trank::~Trank() {
    s_iCount--;
    cout << "~Trank" << endl;
}

void Trank::fire() {
    cout << "Trank -- fire" << endl;
}

int Trank::getCount() {
    return s_iCount;
}

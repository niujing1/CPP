//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include "2.h"

using namespace std;

Person::Person() {
    m_strName = "nj";
}

void Person::play() {
    cout << "Person -- play()" << endl;
    cout << m_strName << endl;
}


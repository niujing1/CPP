//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include <stdlib.h>
#include "5.h"

Person::Person(string name) {
    m_strName = "peron";
    cout << "Person name is " << m_strName << endl;
}

Person::~Person() {
    cout << "Person-- ~Person()" << endl;
}

void Person::play() {
    cout << "person--play()" << endl;
}


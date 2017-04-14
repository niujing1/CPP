//
// Created by 牛京 on 17/2/18.
//

#include "2-1.h"
#include <iostream>
using namespace std;

Worker::Worker(string name, int age):Person(name) {
    m_iAge = age;
}

 void Worker::work() {
    cout << "work" << endl;
}


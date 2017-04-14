//
// Created by 牛京 on 17/2/17.
//

#include "1-2.h"
#include <iostream>

using namespace std;

Worker::Worker() {
    cout << "Worker " << endl;
};

Worker::~Worker() {
    cout << " ~Worker " << endl;
}

void Worker::work() {
    cout << "work" << endl;
}


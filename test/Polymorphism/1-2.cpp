//
// Created by 牛京 on 17/2/18.
//

#include "1-2.h"

Circle::Circle(double r) {
    cout << "Circle" << endl;
}

Circle::~Circle() {
    cout << "~Circle" << endl;
}

double Circle::calcArea() {
    cout << "Circle.calcArea child2" << endl;
    return 0;
}

//
// Created by 牛京 on 17/2/18.
//

#include "1.h"

Shape::Shape() {
    cout << "Shape" << endl;
}

Shape::~Shape() {
    cout << "~Shape" << endl;
}

 double Shape::calcArea() {
    cout << "cacl-shape child" << endl;
    return 0;
}
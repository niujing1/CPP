//
// Created by 牛京 on 17/2/18.
//

#include "1-3.h"

Rect::Rect(double width, double height) {
    cout << "Rect" << endl;
    m_width = width;
    m_height = height;
}

Rect::~Rect() {
    cout << "~Rect" << endl;
}

double Rect::calcArea() {
    cout << "Rect->calcArea base" << endl;
    return 0;
}


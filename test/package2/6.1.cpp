//
// Created by 牛京 on 17/2/16.
// 对象成员指针
//

#include <iostream>
#include "6.h"
using namespace std;

Coordinate::Coordinate(int x,int y) {
    m_iX = x;
    m_iY = y;
    cout << "coordinate " << m_iX << "," << m_iY << endl;
}

Coordinate::~Coordinate() {
    cout << "~coordinate" << m_iX << "," << m_iY << endl;
}

int Coordinate::getX() {
    return m_iX;
}

int Coordinate::getY() {
    return m_iY;
}



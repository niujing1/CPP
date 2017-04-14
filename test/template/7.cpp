//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "7.h"

Coordinate::Coordinate(int x, int y) {
    m_iX = x;
    m_iY = y;
}


int Coordinate::getX() {
    return m_iX;
}

int Coordinate::getY() {
    return m_iY;
}

//前置++的实现
Coordinate &Coordinate::operator++() {
    m_iX++;
    m_iY++;
    return *this;
}

//后置++的实现
//Coordinate Coordinate::operator++(int) {
//    Coordinate old(*this);//先把原来的值保留下来
//    this->m_iX++;
//    this->m_iY++;
//    return old;//保证当前表达式拿到的是++之前的值
//}

//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "6.h"

Coordinate::Coordinate(int x, int y) {
    m_iX = x;
    m_iY = y;
}


int Coordinate::getX(){
    return m_iX;
}

int Coordinate::getY() {
    return m_iY;
}

//Coordinate &Coordinate::operator-() {
//    this->m_iX = -this->m_iX;
//    this->m_iY = -this->m_iY;
//    return *this;//把指针返回
//}

Coordinate &operator-(Coordinate &c){
    c.m_iX = -c.m_iX;
    c.m_iY = -c.m_iY;
    return c;//把coordinate对象返回出去
}
//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "8.h"

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

//Coordinate Coordinate::operator+(Coordinate &c) {
//    Coordinate temp(0,0);
//    temp.m_iX = this->m_iX + c.m_iX;
//    temp.m_iY = this->m_iY + c.m_iY;
//    return temp;
//}

Coordinate operator+(Coordinate c1,Coordinate c2){
    Coordinate temp(0,0);
    temp.m_iX = c1.m_iX + c2.m_iX;
    temp.m_iY = c1.m_iY + c2.m_iY;
    return temp;
}

ostream &operator<<(ostream &output,Coordinate &coor){
    output << coor.m_iX << "," << coor.m_iY ;
    return output; //output 是ostream的一个对象
}

int Coordinate::operator[](int index) {
    if(0 == index){
        return m_iX;
    }

    if(1 == index){
        return m_iY;
    }
    return 0;
}

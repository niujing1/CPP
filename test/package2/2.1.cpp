//
// Created by 牛京 on 17/2/15.
//
#include <iostream>
#include "2.1.h"

using  namespace std;

Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2){
    cout << "line constructor." << endl;
}
Line::~Line(){
    cout << "line destrutor." << endl;
}
void Line::setA(int x,int y){
    m_coorA.setX(x);
    m_coorA.setY(y);
}
void Line::setB(int x,int y){
    m_coorB.setX(x);
    m_coorB.setY(y);
}
void Line::printinfo(){
    cout << "(" << m_coorA.getX() << ","  << m_coorA.getX() <<")" << endl;
    cout << "(" << m_coorB.getX() << ","  << m_coorB.getX() <<")" << endl;
}


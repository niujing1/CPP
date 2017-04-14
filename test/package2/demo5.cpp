//
// Created by 牛京 on 17/2/15.
//

#include "5.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
//    Coordinate *p1 = NULL;
//    p1 = new Coordinate();
//    Coordinate *p2 = new Coordinate();
//    p1->m_iX = 10;
//    p1->m_iY = 20;
//
//    (*p2).m_iX = 30;
//    (*p2).m_iY = 40;
//
//    cout << p1->m_iX + (*p2).m_iX << endl;
//    cout << p1->m_iY + (*p2).m_iY << endl;
//    delete p1;
//    p1=NULL;
//    delete p2;
//    p2 = NULL;

    // 也可以使用下边的方式去访问
    Coordinate p1;
    Coordinate *p2 = &p1;
    p2->m_iX = 10;
    p2->m_iY = 20;
    cout << p1.m_iX << endl;
    cout << p1.m_iY << endl;
    return 0;
}


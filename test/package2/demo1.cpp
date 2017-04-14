//
// Created by 牛京 on 17/2/15.
//
#include <iostream>
#include "1.h"

using namespace std;

int main() {
    Coordinate coor[3];//从栈上分配一个数组单元
    coor[0].m_iX = 120;
    coor[0].m_iY = 130;

    Coordinate *p = new Coordinate[3];//从堆上分配一个对象数组
    p[0].m_iX = 100;
    p[0].m_iY = 90;

    //或者下边的写法
    p->m_iX = 60;
    p->m_iY = 66;

    p++;//去访问下一个元素
    p[0].m_iX = 30; //此时的p[0]代表第二个元素 p[1]代表的是3个，因为此时p指向第二个元素
    p->m_iY = 33;

    p++;
    p->m_iY = 13;

    //输出第一种方法实例化的结果
    for (int i = 0; i < 3; i++) {
        cout << "coor" << coor[i].m_iX << endl;
        cout << "coor" << coor[i].m_iY << endl;
    }

    //输出第一种方法实例化的结果
    for (int j = 0; j < 3; j++) {
        cout << "p.x" << p->m_iX << endl;
        cout << "p.y" << p->m_iY << endl;
        p--;
    }

    p++;
    delete []p; //不加[]销毁的只是数组的第一个元素
    p = NULL;
    return 0;
}


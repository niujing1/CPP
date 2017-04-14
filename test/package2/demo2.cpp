//
// Created by 牛京 on 17/2/15.
// 对象成员
//
#include <iostream>
#include <stdlib.h>
#include "2.1.h"
using namespace std;
/**
 * 要求，定义两个类
 * 1 坐标类 Coordiante 包含数据成员m_iX m_iY 成员函数 构造析构函数 数据封装函数
 * 2 线段类 Line 包含数据成员 点A m_coorA B m_coorB
 *   成员函数 构造析构函数 数据封装函数 信息打印函数
 * @return
 */
int main(){
   Line *p = new Line(1,2,3,4);
    delete p;
    p=NULL;


    return 0;
}



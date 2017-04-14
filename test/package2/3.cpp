//
// Created by 牛京 on 17/2/15.
// 浅copy只是copy数据地址 深copy会先分配一段内存，然后，将原地址的所有
// 数据都copy到新的地址
// 本例浅copy
//

#include <iostream>
#include "3.h"
using namespace std;

Array::Array(){
    cout << "Array()" << endl;
}
Array::Array(const Array& arr){
    m_iCount = arr.m_iCount;
    cout <<"Array &" << endl;
}
Array::~Array(){
    cout << "~Array()" << endl;
}
void Array::setCount(int count){
    m_iCount = count;
}
int Array::getCount(){
    return m_iCount;
}

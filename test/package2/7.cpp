//
// Created by 牛京 on 17/2/16.
//

#include <iostream>
#include "7.h"
using namespace std;

Array::Array(int len) {
   // m_iLen = Len;
    this->len = len;
    cout << "Array()" << endl;
}

Array::~Array() {
    cout << "~Array()" << endl;
}

//void Array::setLen(int len) {
Array& Array::setLen(int len) {
    //m_iLen = x;
    this->len = len;
    return *this; //return 引用，也可以return指针 Array* 然后return this
}

int Array::getLen() {
    //return m_iLen;
    return this->len;
}

Array& Array::printfInfo() {
    cout << "print" << this->len << endl;
    return *this;
}




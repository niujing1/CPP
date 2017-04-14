//
// Created by 牛京 on 17/2/15.
// 浅copy只是copy数据地址 深copy会先分配一段内存，然后，将原地址的所有
// 数据都copy到新的地址
// 本例浅copy
//

#include <iostream>
#include "4.h"
using namespace std;

Array::Array(int count){
    m_iCount = count;
    m_pArr = new int[m_iCount];//内存申请
    for (int i = 0; i < count; ++i) {
        m_pArr[i] = i;
    }
    cout << "Array()" << endl;
}
Array::Array(const Array &arr){
   // m_pArr = arr.m_pArr;//浅copy内存被释放两次，会出问题的，直接报错
    m_iCount = arr.m_iCount;
    m_pArr = new int[m_iCount];
    for(int i=0;i<m_iCount;i++){
        m_pArr[i] = arr.m_pArr[i];
    }
    cout <<"Array &" << endl;
}
Array::~Array(){
    delete []m_pArr;
    m_pArr = NULL;
    cout << "~Array()" << endl;
}
void Array::setCount(int count){
    m_iCount = count;
}
int Array::getCount(){
    return m_iCount;
}
void Array::printAddr(){
   cout << "m_pAddr的值是：" << m_pArr << endl;
}
void Array::printArr() {
    for (int i = 0; i < m_iCount; ++i) {
        cout << m_pArr[i] << endl;
    }
}

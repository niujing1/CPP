//
// Created by 牛京 on 17/2/20.
//

#ifndef CPP_DEMO10_H
#define CPP_DEMO10_H

#include <iostream>
using namespace std;

template <typename T,int kSize,int kVal>
class MyArray{
public:
    MyArray();
    ~MyArray(){
        delete []m_pArr;
        m_pArr = NULL;
    }
    void display();

private:
    T *m_pArr;
};

template <typename T,int kSize,int kVal>
MyArray<T,kSize,kVal>::MyArray() {
    m_pArr = new T[kSize];
    for(int i=0;i < kSize; i++){
        m_pArr[i] = kVal;
    }
}

////类外定义成员函数的话，必须在每一个成员函数的外边加上类模板的定义
//template <typename T,int kSize,int kVal>
//MyArray<T,kSize,kVal>::~MyArray(){
//    delete []m_pArr;
//};
//
template <typename T,int kSize,int kVal>
void MyArray<T,kSize,kVal>::display() {
  for(int i = 0; i < kSize; i++){
      cout << m_pArr[i] << endl;
  }
}

#endif //CPP_DEMO10_H

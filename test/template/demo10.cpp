//
// Created by 牛京 on 17/2/20.
// 类模板
//
#include <iostream>
#include <string>
#include "demo10.h"

using namespace std;

int main(){
    //数组类型为int ，数组元素有5个 元素为3
    MyArray<int , 5 , 3> arr;
    arr.display();
    return 0;
}


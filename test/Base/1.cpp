//
// Created by 牛京 on 17/2/17.
// 基本数据类型引用
//
#include <iostream>
using namespace std;

int main(void){
    int a = 3;
    int &b = a;//引用必须初始化
    b = 10;//改变b的值也就是改变a的值
    cout << a << endl;
    return 0;
}



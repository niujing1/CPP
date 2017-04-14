//
// Created by 牛京 on 17/2/17.
// 指针类型的引用 类型 *&指针引用名 = 指针
//

#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    int *&q = p;
    *q = 20;
    cout << a << endl;
    return 0;
}


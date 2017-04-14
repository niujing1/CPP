//
// Created by 牛京 on 17/2/17.
// 引用作为函数参数
//

#include <iostream>
using namespace std;

void fun(int &a,int &b){
    int c;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main(){
    int x = 10,y = 20;
    fun(x,y);
}




//
// Created by 牛京 on 17/2/20.
//
#include <iostream>
#include <stdlib.h>
using namespace std;

template <typename T>

void display(T a){
    cout << a << endl;
}

template <typename T,class S>
void display(T t,S s){
    cout << t << endl;
    cout << s << endl;
};

template <typename T ,int kSize>
void display(T a){
    for (int i = 0; i < kSize; ++i) {
        cout << a << endl;
    }
};

int main(){
    display<int>(10); // 调用第一个模板函数
    display<double>(10.2);
    display<int,double>(5,8.3); //第二个
    display<int,3>(6); //第三个
    return 0;
}

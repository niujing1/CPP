//
// Created by 牛京 on 17/2/17.
// const与基本数据类型
//

//const int x = 3; x = 5(false)
//int x = 3,y = 4; int *const y = &x;y = 5;(false) //y是const一旦定义指向x就不能改变
//int x = 3; const int y = x; y = 5;(false) //y is a const,can't be change
//int x = 3;const int *y = &x;*y = 5;(false) //y 指向x  y指向的值不能被改变
//const int &y = x; y =5; (false) //

#include <iostream>
#include <stdlib.h>
using namespace std;

#define a 3;
int main(){
    const int x = 2;
    //x = 5; //这里会报错，常量不允许修改
    cout << x << endl;
    return 0;
}
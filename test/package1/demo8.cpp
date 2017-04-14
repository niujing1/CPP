//
// Created by 牛京 on 17/2/14.
// copy构造函数和析构函数使用
//

#include "8.h"
using namespace std;

int main(){
    Teacher t1;
    Teacher t2=t1;
    Teacher t3(t1);

    Teacher *p = new Teacher();//在堆中调用
    delete p;
    return 0;
}

//
// Created by 牛京 on 17/2/14.
//
#include <iostream>
#include <stdlib.h>
#include <string>
#include "7.h"
using namespace std;

int main(){
    //Teacher t1("nj",25,100);
    Teacher t1; //这样会得到默认值
    cout << t1.getName() << " " << t1.getAge() << " " << t1.getMax() << endl;
   // system("pause");
    return 0;
}




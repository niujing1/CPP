//
// Created by 牛京 on 17/2/19.
//

#include "4.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    Trank trank('A');
    cout << trank.getCount() << endl; //可以直接通过对象访问了
    cout << Trank::getCount() << endl;

    Trank *p = new Trank('A');
    cout << Trank::getCount() << endl;
    delete p;
    p = NULL;
    cout << Trank::getCount() << endl;
    return 0;
}

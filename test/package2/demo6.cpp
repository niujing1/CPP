//
// Created by 牛京 on 17/2/16.
//

#include "6.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    Line *p = new Line(1,2,3,4);
    p->printInfo();
    delete p;
    p = NULL;

    cout << sizeof(p) << endl;
    cout << sizeof(Line) << endl;
    return 0;
}


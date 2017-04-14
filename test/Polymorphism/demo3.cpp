//
// Created by 牛京 on 17/2/18.
//


#include <iostream>
#include <stdlib.h>
#include "3-2.h"

void flyMatch(Flable *f1,Flable *f2){
    f1->takeoff();
    f1->land();
    f2->takeoff();
    f2->land();
}

int main(){
//    Plane p1("001");
//    Plane p2("002");
//    p1.printCode();
//    p2.printCode();

    FigthPlane p1("001");
    FigthPlane p2("002");
    p1.printCode();
    p2.printCode();

    flyMatch(&p1,&p2);
    return 0;
}
//
// Created by 牛京 on 17/2/19.
//
#include <iostream>
#include "8.h"

int main(){
    Coordinate coor1(1,3);
    Coordinate coor2(2,4);
    Coordinate coor3(0,0);
    coor3 = coor2 + coor1;

//    cout << coor3.getX() << "," << coor3.getY() << endl;
    cout << coor3 << endl;
    cout << coor3[0] << endl;
    return 0;
}



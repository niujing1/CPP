//
// Created by 牛京 on 17/2/19.
//
#include <iostream>
#include "7.h"

int main(){
    Coordinate coor1(1,3);
    cout << coor1.getX() << "," << coor1.getY() << endl;

//    cout << (coor1++).getX() << endl;
//    cout << (coor1++).getY() << endl;

    cout << (++coor1).getX() << endl;
    cout << (++coor1).getY() << endl;


    return 0;
}


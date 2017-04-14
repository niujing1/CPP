//
// Created by 牛京 on 17/2/19.
//

#include <iostream>
#include "6.h"

using namespace std;

int main(){
    Coordinate coor1(1,3);
    cout << coor1.getX() << "," << coor1.getY() << endl;
    -coor1; //相当于调用了coor1.operator-这个成员方法
    //-coor1;
    cout << coor1.getX() << "," << coor1.getY() << endl;
    return 0;
}


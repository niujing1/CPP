//
// Created by 牛京 on 17/2/17.
// 结构体类型的引用
//
#include <iostream>
using namespace std;

typedef struct{
    int x;
    int y;
}Coor;

int main(void){
   Coor c1;
    Coor &c = c1;
    c.x = 10;
    c.y = 20;
    cout << c1.x << "," << c1.y << endl;
    return 0;
}

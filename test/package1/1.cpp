//
// Created by 牛京 on 17/2/13.
// Desc：实例化一个C++类文件
//

#include <iostream>
#include <stdlib.h>

using namespace std;

class Coordinate{
public:
    int x;
    int y;
    void printX(){
        cout << x << endl;
    }

    void printY(){
        cout << y << endl;
    }
};

int main(void){
    Coordinate coor;
    coor.x = 10;
    coor.y = 20;
    coor.printX();
    coor.printY();

    Coordinate *p = new Coordinate();
    p->x = 100;
    p->y = 200;
    p->printX();
    p->printY();
    delete p; //释放内存
    p=NULL; //释放指针

    system("pause");
    return 0;
}


//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
using namespace std;

#include "1.h"
#include "1-2.h"
#include "1-3.h"

int main(){

    Rect rect(3,4);
    //rect.calcArea();

    //Shape *shape = &rect;
    Shape *shape = new Rect(2,3);
    //rect.calcArea();
    shape->calcArea();
  //  delete shape;
 //   shape = NULL;

//    Shape *shape1 = new Rect(3,6);
//    Shape *shape2 = new Circle(5);
//    shape1->calcArea();
//    shape2->calcArea();
//    delete shape1;
//    shape1 = NULL;
//    delete shape2;  //delete 父类指针，并不会同时释放子类指针  delete子类会同时释放父类
//    shape2 = NULL;
    return 0;
}
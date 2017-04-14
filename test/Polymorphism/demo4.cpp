//
// Created by 牛京 on 17/2/18.
//
#include <iostream>
#include "4-2.h"
#include "4-3.h"
using namespace std;

void doSomthing(Flable *obj){
    cout << typeid(*obj).name() << endl;
    obj->takeoff();
    if(typeid(*obj) == typeid(Bird)){
        Bird *bird = dynamic_cast<Bird *>(obj);
        bird->foraging();
    }

    if(typeid(*obj) == typeid(Plane)){
        Plane *plane = dynamic_cast<Plane *>(obj);
        plane->carry();
    }
    obj->land();
    //return 0;
}

int main(){
    //Bird b;
   // Plane b;
    //b.foraging();

  //  doSomthing(&b);
    int i=0;
    cout << typeid(i).name() << endl;
    //double i = 0;
    //cout << typeid(i).name() << endl;

//    Flable *p = new Bird();
//    cout << typeid(p).name() << endl;
//    cout << typeid(*p).name() << endl;

    Flable *p = new Bird();
   Bird *b = dynamic_cast<Bird *>(p);
    return 0;
}


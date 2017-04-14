//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_4_2_H
#define CPP_4_2_H

#include "4-1.h"
#include <string>

using namespace std;

class Bird : public Flable {
public:
    void foraging(); //觅食

     void takeoff();

     void land();

};

#endif //CPP_4_2_H

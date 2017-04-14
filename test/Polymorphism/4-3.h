//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_4_3_H
#define CPP_4_3_H

#include "4-1.h"
#include <string>

using namespace std;

class Plane: public Flable {
public:
    void carry(); //觅食

    virtual void takeoff();

    virtual void land();

};


#endif //CPP_4_3_H

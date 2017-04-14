//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_3_1_H
#define CPP_3_1_H

#include <string>
#include "3.h"

using namespace std;

//class Plane:public Flable{
class Plane{
public:
    Plane(string code);
    ~Plane();
    //virtual void takeoff();
    //virtual void land();
    void printCode();

private:
    string m_strCode;
};

#endif //CPP_3_1_H

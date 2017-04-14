//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_3_2_H
#define CPP_3_2_H

#include "3-1.h"
#include <string>
using namespace std;

class FigthPlane:public Plane,public Flable{
//class FigthPlane:public Plane{
public:
    FigthPlane(string code);
    virtual void takeoff();
    virtual void land();

private:
    string m_strCode;
};

#endif //CPP_3_2_H

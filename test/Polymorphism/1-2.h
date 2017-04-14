//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_1_2_H
#define CPP_1_2_H

#include "1.h"
class Circle:public Shape{
public:
    Circle(double r);
    ~Circle();
     double calcArea();

protected:
    double m_dR;
};

#endif //CPP_1_2_H

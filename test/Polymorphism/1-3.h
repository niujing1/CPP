//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_1_3_H
#define CPP_1_3_H

#include "1.h"
class Rect:public Shape{
public:
    Rect(double width, double height);
    ~Rect();
     double calcArea();
    //virtual double calcArea();

protected:
    double m_width;
    double m_height;
};

#endif //CPP_1_3_H

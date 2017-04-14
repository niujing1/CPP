//
// Created by 牛京 on 17/2/15.
//

#ifndef CPP_2_1_H
#define CPP_2_1_H

#endif //CPP_2_1_H

#include "2.h"
class Line{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x,int y);
    void setB(int x,int y);
    void printinfo();

private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};

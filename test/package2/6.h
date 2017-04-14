//
// Created by 牛京 on 17/2/16.
//

#ifndef CPP_6_H
#define CPP_6_H

#include "6.1.h"

#endif //CPP_6_H

class Line {
public:
    Line(int x1,int y1,int x2,int y2);

    ~Line();

    void printInfo();

public:
    Coordinate *m_pCoorA;
    Coordinate *m_pCoorB;
};

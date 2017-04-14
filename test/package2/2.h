//
// Created by 牛京 on 17/2/15.
//

#ifndef CPP_2_H
#define CPP_2_H

#endif //CPP_2_H

#include <iostream>

using namespace std;

class Coordinate {
public:
    Coordinate(int x,int y);

    ~Coordinate();

    void setX(int x);

    int getX();

    void setY(int y);

    int getY();

private:
    int m_iX;
    int m_iY;
};

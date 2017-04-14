//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_4_H
#define CPP_4_H

#include <iostream>
#include "4.h"
#include <stdlib.h>

class Trank{
public:
    Trank(char code);
    ~Trank();
    void fire();
    static int getCount();

private:
    static int s_iCount;
    char m_cCode;
};

#endif //CPP_4_H

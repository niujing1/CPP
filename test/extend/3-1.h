//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_2_1_H
#define CPP_2_1_H

#include "3.h"

class Slodier:public Person{
public:
    Slodier();

    ~Slodier();

    void work();
    void play(int n);

protected:
    int m_iAge;
};

#endif //CPP_2_1_H

//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_2_1_H
#define CPP_2_1_H

#include "2.h"

//class Slodier:public Person{
class Slodier : protected Person { //使用保护继承时，基类中的方法无法直接访问
public:
    Slodier();

    ~Slodier();

    void work();
    void play();

protected:
    int m_iAge;
};

#endif //CPP_2_1_H

//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_2_1_H
#define CPP_2_1_H

#include "2.h"
class Worker:public Person{
public:
    Worker(string name,int age);
    virtual void work();

private:
    int m_iAge;
};

#endif //CPP_2_1_H

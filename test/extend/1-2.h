//
// Created by 牛京 on 17/2/17.
//

#ifndef CPP_1_2_H
#define CPP_1_2_H

#endif //CPP_1_2_H

#include <iostream>
#include "1.h"

class Worker:public Person{
public:
    Worker();
    ~Worker();
    void work();

protected:
    int m_iSalary;
};

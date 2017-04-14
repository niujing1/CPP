//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_4_1_H
#define CPP_4_1_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include "4.h"

using namespace std;

class Slodier:public Person{
public:
    Slodier();
     ~Slodier();
    void work();

protected:
   string m_strName;
};

#endif //CPP_4_1_H

//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_4_H
#define CPP_4_H

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Person{
public:
    Person();
    virtual ~Person();
    void play();

protected:
    string m_strName;
};

#endif //CPP_4_H

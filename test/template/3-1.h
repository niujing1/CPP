//
// Created by 牛京 on 17/2/19.
//

#ifndef CPP_3_1_H
#define CPP_3_1_H

#include <iostream>

using namespace std;

#include "3.h"

class Match {
public:
    Match(int hour, int min, int sec);

    void TestTime();

private:
    Time m_tTimer;
};

#endif //CPP_3_1_H

//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include <string>
#include "3-2.h"

using namespace std;

FigthPlane::FigthPlane(string code) : Plane(code),Flable() {
    m_strCode = code;
}

void FigthPlane::takeoff() {
    cout << "FightPlane takeoff" << endl;
}

void FigthPlane::land() {
    cout << "FightPlane land" << endl;
}

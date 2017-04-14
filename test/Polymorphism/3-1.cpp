//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include "3-1.h"
using namespace std;

Plane::Plane(string code) {
    m_strCode = code;
}

Plane::~Plane() {

}

//void Plane::takeoff() {
//    cout << "Plane take off" << endl;
//}
//
//void Plane::land() {
//    cout << "palne land" << endl;
//}

void Plane::printCode() {
    cout << "code is " << m_strCode << endl;
}

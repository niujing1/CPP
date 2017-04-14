//
// Created by 牛京 on 17/2/19.
//

#include "3-1.h"
#include <iostream>

using namespace std;

Match::Match(int hour, int min, int sec):m_tTimer(hour,min,sec) {
  // m_tTimer.m_iHour
}

void Match::TestTime() {
    m_tTimer.printTime();
    cout << m_tTimer.m_iHour << ":" << m_tTimer.m_iMinite << ":" << m_tTimer.m_iSecond << endl;
}

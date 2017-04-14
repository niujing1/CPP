//
// Created by 牛京 on 17/2/19.
//

#include "3.h"

Time::Time(int hour, int min, int sec) {
    m_iHour = hour;
    m_iMinite = min;
    m_iSecond = sec;
}

void Time::printTime() {
    cout << m_iHour << "时" << m_iMinite << "分" << m_iSecond << "秒" << endl;
}
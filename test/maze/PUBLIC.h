//
// Created by 牛京 on 17/2/16.
//

#ifndef CPP_PUBLIC_H
#define CPP_PUBLIC_H

const int FAST = 1;  //定义人的移动速度
const int MIDD = 2;  //定义人的移动速度中速
const int SLOW = 3;  //定义人的移动速度慢速

const int WALL = 1;  //定义墙壁表示1
const int ROAD = 0;  //定义通道表示0

enum objectiveDirections{
    SOTH,NORTH,WEST,EAST //定义东西南北(分别对应上下左右四个方向)
};

#endif //CPP_PUBLIC_H

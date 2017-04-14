//
// Created by 牛京 on 17/2/16.
// 定义MazeMap类
//

/**
 * 功能：生成并绘制迷宫地图
 * 函数列表：
 *  MazeMap(); //默认的迷宫构造函数
 *  MazeMap(int *mazeMap,int row,int col);//设置迷宫长和款的构造函数
 *  void setMazeWall(char wall); //设置表示墙的字符串
 *  void setMazeRoad(char road); //设置表示路的字符串
 *  void defaultMode();
 *  void setMazeMap(int *mazeMap,int row,int col);//重新设置迷宫地图
 *  void drawMap() const;
 *  static char getRoadChar(); //获取表示通路的字符
 *  static bool checkWallOrNot(int mazeX,int mazeY); //声明检查是否遇到迷宫墙壁的函数
 *  static bool chaeckMazeDoor(int mazeX,int mazeY); //声明检查是否遇到迷宫入口或者出口的函数
 */
#include <iostream>

using namespace std;

#include "MazeMap.h"

//初始化静态变量
char MazeMap::mazeRoad = ' ';
int MazeMap::mazeWidth = 0;
int MazeMap::mazeHeight = 0;
int MazeMap::mazeMapArray[screenHeight][screenWidth];

/**
 * 构造函数：MazeMap
 * 默认初始化迷宫
 */
MazeMap::MazeMap() : mazeWall('#') {
    mazeWidth = 60;
    mazeHeight = 20;
}

MazeMap::MazeMap(int *mazeMap, int row, int col) : mazeWall('#') {
    //设置迷宫的宽和高
    mazeHeight = row;
    mazeWidth = col;
    //设置迷宫的内部线路
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            mazeMapArray[i][j] = *mazeMap;
            mazeMap++;
        }
    }
}


/**
 * setMazeMap设置迷宫地图
 * @*MazeMap 要copy的字符串首地址
 */
void MazeMap::setMazeMap







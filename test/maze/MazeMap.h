//
// Created by 牛京 on 17/2/16.
// Desc:生成并绘制迷宫地图
//

#ifndef CPP_MAZEMAP_H
#define CPP_MAZEMAP_H

#define screenWidth 80  //字符串模式下屏幕宽度
#define screenHeight 25 //字符串模式下屏幕高度

#include "PUBLIC.h"

class MazeMap{
public:
    //构造函数，使用用户自身定义的地图
    //*mazeMap,地图二维数组首地址 row地图数组中的行数，cloumn 地图数组中的列数
    MazeMap();
    MazeMap(int *mazeMap,int row,int col);
    void setMazeWall(char wall); //设置表示墙的字符串
    void setMazeRoad(char road); //设置表示路的字符串
    void defaultMode();
    void setMazeMap(int *mazeMap,int row,int col);//重新设置迷宫地图
    void drawMap() const;
    static char getRoadChar(); //获取表示通路的字符
    static bool checkWallOrNot(int mazeX,int mazeY); //声明检查是否遇到迷宫墙壁的函数
    static bool chaeckMazeDoor(int mazeX,int mazeY); //声明检查是否遇到迷宫入口或者出口的函数

private:
    char mazeWall; //声明表示迷宫峭壁的字符
    static char mazeRoad;//声明表示桐庐的字符
    static int mazeWidth;//声明迷宫的宽度
    static int mazeHeight; //声明迷宫的高度
    static int mazeMapArray[screenHeight][screenWidth]; //声明迷宫的地图数组
};

#endif //CPP_MAZEMAP_H

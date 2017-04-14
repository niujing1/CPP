//
// Created by 牛京 on 17/2/13.
// String常用操作
//
/**
 * s.empty() 判断是否为空串
 * s.size() 返回元素个数
 */

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(void){
    string name;
    cout << "please input your name: ";
    getline(cin,name);
    //cout << name << endl;
    if(name.empty()){
        cout << "input is null ..." << endl;
        //system("pause");
        return 0;
    }
    if(name == "nj"){
        cout << "you are a administor." << endl;
    }
    cout << "your name is: " << name << endl;
    cout << "your name length:" << name.size() << endl;
    cout << "your name first letter is :" << name[0] << endl;
    //system("pause");
    return 0;
}




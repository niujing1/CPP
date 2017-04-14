//
// Created by 牛京 on 17/2/20.
//
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(6);

    //数组方式遍历
   // cout << vec.size() << endl; //vec.size当前向量的大小
    for(int i = 0 ; i < vec.size();i++){
        cout << vec[i] << endl;
    }
    vec.pop_back(); //最后一个进去的被pop出来
   // cout << vec.size() << endl; //vec.size当前向量的大小
    for(int i = 0 ; i < vec.size();i++){
        cout << vec[i] << endl;
    }

    //向量方式遍历
    vector<int>::iterator itor = vec.begin(); //vec.begin是第一个向量元素
    //cout << *itor << endl;
    for(;itor != vec.end();itor++){
        cout << *itor << endl;
    }
    return 0;
}


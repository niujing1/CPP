//
// Created by 牛京 on 17/2/20.
//

#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

int main(){
//    list<int> list1;
//    list1.push_back(4);//追加元素
//    list1.push_back(7);
//    list1.push_back(10);
////    这样会报错，所以要使用迭代器的方式去遍历
////    for(int i=0;i < list1.size() ;i++){
////        cout << list1[i] << endl;
////    }
//    list1.pop();
//    list<int>::iterator itor = list1.begin();
//    for(;itor != list1.end();itor++){
//        cout << *itor << endl;
//    }

    //map
    map<int, string> m;
    //map<int, string> mapStudent; //声明一个key为int  value=string的map，使用insert插入pair数据


//    map<int, string>::iterator iter;
//    for (iter = m.begin(); iter != m.end(); iter++) {
//        cout << iter->first << " " << iter->second << endl;
//    }

//   pair<int,string> p1(3,'A'); //插入成对的元素  C++11不支持这么写了，要直接使用insert
   // pair<int, string> p2(2,'B'); //插入成对的元素
//    pair<int,string> p3(6,'C'); //插入成对的元素

    //m.push_back(p1); //在映射中没有push_back
//    pair<int,string> p1(3,'A');
//    m.insert(p1);
   // m.insert(pair<int, string>(3, "stu3"));
    m.insert(pair<int, string>(4,"A"));
    m.insert(pair<int, string>(4,"B"));
    m.insert(pair<int, string>(5,"C"));
   // m.insert(p2);
//    m.insert(p3);
    cout << m[4] << endl; //可以像数组一样去访问map中的元素
    map<int,string>::iterator itor = m.begin();
    for(;itor != m.end();itor++){
        cout << itor->first << endl;
        cout << itor->second << endl;
        cout << endl;
    }






    return 0;
}

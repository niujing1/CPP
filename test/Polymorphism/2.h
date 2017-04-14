//
// Created by 牛京 on 17/2/18.
//

#ifndef CPP_2_H
#define CPP_2_H

#include <string>
using namespace std;

class Person{
public:
    Person(string name);
    virtual ~Person(){};
    virtual void work()=0; //纯虚函数
    //包含纯虚函数的类是抽象类，无法直接实例化

private:
    string m_strName;
};

#endif //CPP_2_H

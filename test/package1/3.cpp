//
// Created by 牛京 on 17/2/14.
// 面向对象的基本思想，使用类的方法，去访问类的数据成员
// 封装的好处：可以把不想被外界访问的设置为private
// 定义Student，包含name sex socre(private) study
// 使用new实例化的对象会放到堆取，需要手动delete
// 类名 变量 这样的实例化会放到栈区，不用我们手动管理

#include <iostream>
#include <stdlib.h>
using namespace std;

class Student{
public:
    void setName(string _name){
        m_strName = _name;
    }
    string getName(){
        return m_strName;
    }

    void setSex(string _sex){
        m_strSex = _sex;
    }
    string getSex(){
        return m_strSex;
    }

    int getScore(){
        return m_iScore;
    }

    void initScore(){
        m_iScore = 0;
    }
    void study(int _socre){
        m_iScore += _socre;
    }
private:
    string m_strName;
    string m_strSex;
    int m_iScore;

};

int main(){
    Student stu; //栈的实例化方法
    stu.initScore();
    stu.setName("nj");
    stu.setSex("male");
    stu.study(5);
    stu.study(3);

    cout << "name is : " << stu.getName() << endl;
    cout << "sex is : " << stu.getSex() << endl;
    cout << "score is : " << stu.getScore() << endl;
//    system("pause");
    return 0;
}




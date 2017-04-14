//
// Created by 牛京 on 17/2/14.
// 内联函数和类内定义
// 普通函数会在调用其它函数时，先保存自身环境和返回地址，跳转到被调用函数处取钱执行
// 执行完根据返回地址返回，内联函数在编译时会直接把代码嵌入到调用它的地方，也就会省
// 去了调用和返回的的开销和时间，但注意，只能是简单函数，复杂函数，即使使用了内联，
// 编译器也会拒绝把代码嵌入，类内函数会优先被编译为内联函数，函数体复杂，无法被定义
// 为inline的，才会编译为非inline函数
// 类外函数定义，分文件定义，本文件定义
//
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Teacher{
public:
    void setName(string _name); //只声明，类外定义
    string getName();
    void setSex(string _sex);
    string getSex();
    void setAge(int _age);
    int getAge();
    void teach();
private:
    string m_strName;
    string m_strSex;
    int m_iAge;
};

void Teacher::setName(string _name) {
    m_strName = _name;
}

string Teacher::getName() {
    return m_strName;
}

void Teacher::setSex(string _sex) {
    m_strSex = _sex;
}

string Teacher::getSex() {
    return m_strSex;
}

void Teacher::setAge(int _age) {
    m_iAge = _age;
}

int Teacher::getAge() {
    return m_iAge;
}

void Teacher::teach() {
    cout << "now we start our course." << endl;
}

int main(){
    Teacher t;
    t.setName("nj");
    t.setSex("male");
    t.setAge(20);

    cout << "name is : " << t.getName() << endl;
    cout << "sex is : " << t.getSex() << endl;
    cout << "age is : " << t.getAge() << endl;
    t.teach();
    return 0;
}




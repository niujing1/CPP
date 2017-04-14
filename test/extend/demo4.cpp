//
// Created by 牛京 on 17/2/18.
//

#include "4-1.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
void test1(Person p){
    p.play();
}

void test2(Person &p){
    p.play();
}

void test3(Person *p){
    p->play();
}

int main() {
//    Slodier slo;
//    Person p = slo; //使用士兵类初始化人类对象
//    p.play();

//    Person *p = new Slodier;
//    p->play();
//    delete p;
//    p = NULL;

    Person p;
    Slodier s;
//    test1(p); //创建临时对象
//    test1(s);
//    test2(p); //起别名，未创建临时对象
//    test2(s);
    test3(&p);
    test3(&s);
    return 0;
}
/**
 * 可以看到结果只释放了person的空间 并未释放slodier，把父类的析构函数写成虚函数即可同时被释放了
 * 子类的析构函数会继承父类的属性
 */


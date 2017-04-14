//
// Created by 牛京 on 17/2/27.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

class A {
public:
    A() {
        cout << "A()" << endl;
    };

    virtual void play() {
        cout << "A.play,this is base func" << endl;
    }
};

class C {
public:
    C() {
        cout << "C()" << endl;
    }
};

class B : public A {
public:
    B() {
        C c;
        cout << "B()" << endl;
    };

    void play() {
        cout << "B.play. extends from A" << endl;
    }
};

int main() {
    // B b = new A();
    // b.play();
    A a; //这种是栈分配，操作系统自动管理内存空间
    a.play();

    A *a = new B(); //这种方式是堆分配，对象要手动销毁
    a->play();
    delete a;
    a = NULL;
    return 0;
}
// A  C  B  先base->对象成员-> 派生









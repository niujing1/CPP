//
// Created by 牛京 on 17/2/17.
// 指针常量
//

int main(){
    int x = 3;
    int y = 5;
    int const *p = &x;
    *p = 5;//报错，*p是常量，不能给常量赋值
    x = 5;//可以 x是变量
    p = &y;//可以

    int *const p = &x; //const修饰的是p p指向的地址不能被修改，但是p的值可以修改
    *p = 5; //可以
    p = &y; //不可以 p只能指向x了
    return 0;
}


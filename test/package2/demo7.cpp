//
// Created by 牛京 on 17/2/16.
//

#include <iostream>
#include <stdlib.h>
#include "7.h"

using namespace std;

int main(){
    Array arr1(10);
    arr1.printfInfo().setLen(5).getLen();
    cout << "len = " << arr1.getLen() << endl;
    return 0;
}


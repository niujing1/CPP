//
// Created by 牛京 on 17/2/15.
//

#include "4.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


int main() {
    Array arr1(5);
    //arr1.setCount(5);

    Array arr2(arr1);
    arr1.printAddr();
    arr2.printAddr();

    arr1.printArr();
    arr2.printArr();
    return 0;
}


//
// Created by 牛京 on 17/2/18.
//

#include <iostream>
#include <stdlib.h>
#include "3-1.h"

int main() {
    Slodier slo;
    slo.work();
    slo.Person::play();
    slo.play(5);
    return 0;
}


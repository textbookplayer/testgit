#include <iostream>
#include "classcpp.hpp"

bool bad() const;

void func1(void){
    int x;
    x = 10;
}


int main(){
    Cpoint pointObj;
    CCIR ccirObj;
    pointObj.show_xy();
    ccirObj.show_r();
    return 0;
}
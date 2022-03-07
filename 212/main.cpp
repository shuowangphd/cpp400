#include <iostream>
#include "List.h"

int main(){
    List<int> l;
    const int itemA=2;
    const int itemB=3;
    l.insertFront(itemA);
    l.insertFront(itemB);
    std::cout<< l[0]<<' '<<l[1]<<std::endl;
    return 0;
}
#include <iostream>
#include "Square.h"
int main(){
    int *p = new int;
    ns::Square *s = new ns::Square;
    *p=2;
    s->setLength(3);
    delete p; p =nullptr;
    delete s; s =nullptr;
    std::cout<<"Pointers p and s are deleted."<<std::endl;
    return 0;
}
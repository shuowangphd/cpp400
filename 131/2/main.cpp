#include <iostream>
#include "Square.h"
int main(){
    ns::Square s(3);
    std::cout<<s.getLength()<<std::endl;
    return 0;
}
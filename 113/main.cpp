#include <iostream>
#include "Square.h"
int main(){
    ns::Square s1;
    s1.setLength(2);
    std::cout<<s1.getLength()<<std::endl;
    return 0;
}
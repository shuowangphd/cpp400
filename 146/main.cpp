#include <iostream>
#include "Square.h"

int main(){
    ns::Square s(3);
    std::cout << s.getArea() << std::endl;
    return 0;
}
#include <iostream>
#include "Square.h"

int main(){
    int a[2]={5,7};
    int offset = (long)&(a[1])-(long)&(a[0]);
    std::cout << a[1] <<' '<< sizeof(int)<<' ' << offset << std::endl;
    Square s[2]={ Square(5), Square(7)};
    int offset2 = (long)&(s[1])-(long)&(s[0]);
    std::cout << sizeof(Square)<<' ' << offset2 << std::endl;
}
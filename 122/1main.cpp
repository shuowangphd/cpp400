#include <iostream>
int main(){
    int *p = new int;
    std::cout<< *p <<std::endl<< p <<std::endl<< &p <<std::endl;
    *p=2;
    std::cout<< *p <<std::endl<< p <<std::endl<< &p <<std::endl;
    return 0;
}
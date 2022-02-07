#include <iostream>
int main(){
    int *p = new int;
    int &x = *p;
    x = 2;
    std::cout<<*p <<std::endl<<p<<std::endl <<&p <<std::endl<<&x <<std::endl<<x<<std::endl;
}
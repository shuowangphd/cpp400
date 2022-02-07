#include <iostream>
int main(){
    int x = 2, y=3, z = 4;
    int *p = &x, *q = &y, *r = &z;
    y=x;
    std::cout<<x<<y<<z<<*p<<*q<<*r<<std::endl;
    p=r;
    std::cout<<x<<y<<z<<*p<<*q<<*r<<std::endl;
    *r = *q;
    std::cout<<x<<y<<z<<*p<<*q<<*r<<std::endl;
    return 0;
}
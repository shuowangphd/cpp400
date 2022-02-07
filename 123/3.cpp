#include <iostream>
int main(){
    int *p, *q;
    p = new int;
    q = p;
    *q = 2;
    std::cout<<*p <<*q<<std::endl;
    q = new int;
    *q = 3;
    std::cout<<*p <<*q<<std::endl;
}
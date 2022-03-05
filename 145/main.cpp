#include <iostream>
#include <string>

template <typename T>
T max2(T a, T b){
    if(a>b){return a;}
    return b;
}

int main(){
    std::cout << max2(2,3) <<std::endl;
    std::cout << max2('a','b') <<std::endl;
    std::cout << max2(std::string("ab"),std::string("ac")) <<std::endl;
    return 0;
}

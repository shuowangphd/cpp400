#include <vector>
#include <iostream>
int main(){
    std::vector<int> v;
    for (int i =0; i<3;i++){
        v.push_back(i*2);
    }
    std::cout<<v[2]<<std::endl;
    return 0;
}
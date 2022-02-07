#include <iostream>
int main(){
    int n = 3;
    int *x = new int[3];
    for (int i =0;i<n;i++){
        x[i] = i*2;
        std::cout<<x[i]<<std::endl;
    }
    delete[] x;
    return 0;
}
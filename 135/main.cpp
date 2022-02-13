#include "Square.h"
using ns::Square;

void onStack(){
    Square s;
}
void onHeap(){
    Square *p = new Square();
    Square *q = new Square();
    delete p;
}
int main(){
    onStack();
    onHeap();
    return 0;
}
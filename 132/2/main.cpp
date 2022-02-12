#include "../Square.h"
using ns::Square;

Square foo(){
    Square s;
    return s;
}
int main(){
    Square s2 = foo();
    return 0;
}
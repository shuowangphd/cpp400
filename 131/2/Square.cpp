#include "Square.h"
namespace ns{
    Square::Square(int a){
        len_ = a;
    }
    void Square::setLength(double len){
        len_ = len;
    }

    double Square::getLength(){
        return len_;
    }
}
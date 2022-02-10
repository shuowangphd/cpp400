#include "Square.h"
namespace ns{
    Square::Square(){
        len_ = 2;
    }
    void Square::setLength(double len){
        len_ = len;
    }

    double Square::getLength(){
        return len_;
    }
}
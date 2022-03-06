#include "Square.h"
#include <iostream>
Square::Square(double d){
        len_ = d;
    }

    void Square::setLength(double len){
        len_ = len;
    }

    double Square::getLength(){
        return len_;
    }

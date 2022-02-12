#include "Square.h"
#include <iostream>
namespace ns{
        Square::Square(){
        len_ = 0;
        std::cout<<"Default constructor invoked." << std::endl;
    }
    Square::Square(const Square & a) {
        len_ = a.len_;
        std::cout<<"copy constructor invoked." << std::endl;
    }
    void Square::setLength(double len){
        len_ = len;
    }

    double Square::getLength(){
        return len_;
    }
}
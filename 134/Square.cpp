#include "Square.h"
#include <iostream>
namespace ns{
    Square::Square(){
        len_ = 0;
        std::cout<<"Default constructor invoked." << std::endl;
    }
    Square::Square(double d){
        len_ = d;
        std::cout<<"One argument constructor invoked." << std::endl;
    }
    Square::Square(const Square & a) {
        len_ = a.len_;
        std::cout<<"copy constructor invoked." << std::endl;
    }
    Square & Square::operator=(const Square & a) {
        len_ = a.len_;
        std::cout<<"Assignment operator invoked." << std::endl;
        return *this;
    }
    void Square::setLength(double len){
        len_ = len;
    }

    double Square::getLength(){
        return len_;
    }
}

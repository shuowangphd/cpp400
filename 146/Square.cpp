#include "Square.h"
#include "Shape.h"
namespace ns{
    Square::Square(double len) : Shape(len) {
    }

    double Square::getArea() const{
        return getLen()*getLen();
    }
}
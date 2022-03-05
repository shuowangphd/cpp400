#include "Shape.h"

Shape::Shape(double len) : len_(len){
    
}
double Shape::getLen() const{
    return len_;
}
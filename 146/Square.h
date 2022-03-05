#pragma once
#include "Shape.h"
namespace ns{
    class Square : public Shape{
    public:
        Square(double len);
        double getArea() const;
    };
}
#pragma once
namespace ns{
    class Square{
    public:
        Square(int a); // Custom default ctor
        void setLength(double len);
        double getLength();
    private:
        double len_;
    };
}
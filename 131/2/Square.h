#pragma once
namespace ns{
    class Square{
    public:
        Square(int a); // One argument ctor
        void setLength(double len);
        double getLength();
    private:
        double len_;
    };
}

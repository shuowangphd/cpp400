#pragma once
namespace ns{
    class Square{
    public:
        Square(); // Custom default ctor
        void setLength(double len);
        double getLength();
    private:
        double len_;
    };
}
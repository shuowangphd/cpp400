#pragma once
namespace ns{
    class Square{
        public:
            Square();
            Square(const Square &a);
            Square & operator=(const Square &a);
            void setLength(double len);
            double getLength();
            double len_;
    };
}
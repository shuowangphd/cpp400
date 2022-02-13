#pragma once
namespace ns{
    class Square{
        public:
            Square();
            Square(double d);
            Square(const Square &a);
            Square & operator=(const Square &a);
            ~Square();
            void setLength(double len);
            double getLength();
            double len_;
    };
}

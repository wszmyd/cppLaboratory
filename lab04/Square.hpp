#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double a, const Point &p) : Rectangle(a, a, p, "square") {}; /* TODO finish this constructor */
};
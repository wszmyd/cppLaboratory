#pragma once
#include "Figure.hpp"
#include <cmath>

class Circle : public Figure
{
private:
    double m_radius;
public:
    Circle(double radius, const Point &p) : m_radius(radius), Figure(p,"circle") {};

    double area() const override
    {
        return M_PI * m_radius * m_radius;
    }
    void description() const override
    {
        std::cout << "I have radius of length " << m_radius << std::endl;
        printCentre();
    }
};
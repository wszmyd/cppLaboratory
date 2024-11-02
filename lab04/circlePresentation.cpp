#include <iostream>
#include "Circle.hpp"

int main()
{
    Circle circle(4.2, Point(1, 2));
    circle.introduce();
    circle.description();
    std::cout << "Area of circle is: " << circle.area() << std::endl;

    return 0;
}
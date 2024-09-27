#include "triangle.h"
#include <iostream> 

Triangle::Triangle(int t_base, int t_height, triangleColour t_colour)
    : lenght(t_base), height(t_height), m_colour(t_colour)
{
}

Triangle::triangleColour Triangle::compare(triangleColour t_colour)
{
    return triangleColour();
}

void Triangle::setColour(triangleColour t_colour) const
{
}

float Triangle::hypot()
{
    std::cout << "hypot() called \n";
    return sqrt((lenght * lenght) + (height * height));
}

float Triangle::area()
{
    std::cout << "area() called \n";
    return (0.5 * height) * lenght;
}

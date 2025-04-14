#include "Tetrahedron.h"
#include <stdexcept>
#include <cmath>

Tetrahedron::Tetrahedron(const Point& point1, const Point& point2,
    const Point& point3, const Point& point4)
    : point1{ point1 }, point2{ point2 }, point3{ point3 }, point4{ point4 }
{
    if (point1 == point2 || point1 == point3 || point1 == point4 ||
        point2 == point3 || point2 == point4 || point3 == point4)
    {
        throw std::logic_error("ошибка.");
    }
    side1 = point1.distanceTo(point2);
    side2 = point2.distanceTo(point3);
    side3 = point3.distanceTo(point1);

    if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
    {
        throw std::logic_error("ошибка.");
    }
}

double Tetrahedron::getSide1() const
{
    return side1;
}

double Tetrahedron::getSide2() const
{
    return side2;
}

double Tetrahedron::getSide3() const
{
    return side3;
}

double Tetrahedron::baseArea() const
{
    double halfPerimeter = (side1 + side2 + side3) / 2;
    return std::sqrt(halfPerimeter * (halfPerimeter - side1) *
        (halfPerimeter - side2) * (halfPerimeter - side3));
}

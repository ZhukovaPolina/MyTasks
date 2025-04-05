#include "Point.h"

Point::Point(const double x, const double y, const double z)
    : x{ x }, y{ y }, z{ z } {}

double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}

double Point::distanceTo(const Point& other) const
{
    return std::sqrt(std::pow(x - other.x, 2) +
        std::pow(y - other.y, 2) +
        std::pow(z - other.z, 2));
}

bool operator==(const Point& point1, const Point& point2)
{
    return std::abs(point1.getX() - point2.getX()) <= std::numeric_limits<double>::epsilon() &&
        std::abs(point1.getY() - point2.getY()) <= std::numeric_limits<double>::epsilon() &&
        std::abs(point1.getZ() - point2.getZ()) <= std::numeric_limits<double>::epsilon();
}

bool operator!=(const Point& point1, const Point& point2)
{
    return !(point1 == point2);
}
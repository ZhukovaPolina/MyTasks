#pragma once
#include <cmath>
#include <limits>

class Point
{
private:
    double x;
    double y;
    double z;

public:
    Point(const double x = 0, const double y = 0, const double z = 0);
    double getX() const;
    double getY() const;
    double getZ() const;

    // Âû÷èñëåíèå ðàññòîÿíèÿ ìåæäó äâóìÿ òî÷êàìè
    double distanceTo(const Point& other) const;
};

bool operator==(const Point& point1, const Point& point2);
bool operator!=(const Point& point1, const Point& point2);
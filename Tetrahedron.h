#pragma once
#include "Point.h"

class Tetrahedron
{
private:
    Point point1;
    Point point2;
    Point point3;
    Point point4;

    double side1; // ����� ������� ����� point1 � point2
    double side2; // ����� ������� ����� point2 � point3
    double side3; // ����� ������� ����� point3 � point1

public:
    Tetrahedron(const Point& point1, const Point& point2,
        const Point& point3, const Point& point4);

    double getSide1() const;
    double getSide2() const;
    double getSide3() const;

    // ���������� ������� ��������� (������������)
    double baseArea() const;
};
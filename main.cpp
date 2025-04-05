#include <iostream>
#include <string>
#include "Point.h"
#include "Tetrahedron.h"

double getCoordinate(const std::string& message);

int main()
{
    setlocale(LC_ALL, "Russian");



    // ���� ��������� �����
    auto x = getCoordinate("������� ���������� x ������ �����: ");
    auto y = getCoordinate("������� ���������� y ������ �����: ");
    auto z = getCoordinate("������� ���������� z ������ �����: ");
    Point point1(x, y, z);

    x = getCoordinate("������� ���������� x ������ �����: ");
    y = getCoordinate("������� ���������� y ������ �����: ");
    z = getCoordinate("������� ���������� z ������ �����: ");
    Point point2(x, y, z);

    x = getCoordinate("������� ���������� x ������� �����: ");
    y = getCoordinate("������� ���������� y ������� �����: ");
    z = getCoordinate("������� ���������� z ������� �����: ");
    Point point3(x, y, z);

    x = getCoordinate("������� ���������� x ��������� �����: ");
    y = getCoordinate("������� ���������� y ��������� �����: ");
    z = getCoordinate("������� ���������� z ��������� �����: ");
    Point point4(x, y, z);

    // �������� ���������
    Tetrahedron tetrahedron(point1, point2, point3, point4);

    // ����� ������� ���������
    std::cout << "������� ��������� �����: " << tetrahedron.baseArea() << std::endl;




    return 0;
}

double getCoordinate(const std::string& message)
{
    std::cout << message << std::endl;
    double coordinate = 0.0;
    std::cin >> coordinate;
    if (std::cin.fail())
    {
        throw std::invalid_argument("������� ������������ ��������");
    }
    return coordinate;
}
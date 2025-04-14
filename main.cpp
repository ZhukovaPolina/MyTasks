#include <iostream>
#include <string>
#include "Point.h"
#include "Tetrahedron.h"

using namespace std;

Point getPoint(const string& pointName);
double getCoordinate(const string& message);

int main()
{
    setlocale(LC_ALL, "Russian");

    try {
        // Получаем 4 точки для тетраэдра
        Point point1 = getPoint("Точка 1");
        Point point2 = getPoint("Точка 2");
        Point point3 = getPoint("Точка 3");
        Point point4 = getPoint("Точка 4");

        // Создаем тетраэдр
        Tetrahedron tetrahedron(point1, point2, point3, point4);

        // Выводим площадь основания тетраэдра
        cout << "Площадь основания тетраэдра: " << tetrahedron.baseArea() << endl;

    }
    catch (const invalid_argument& e) {
        cerr << "Ошибка: " << e.what() << endl;
        return 1;
    }

    return 0;
}

Point getPoint(const string& pointName)
{
    cout << "Ввод координат для " << pointName << ":" << endl;
    double x = getCoordinate("Введите координату x: ");
    double y = getCoordinate("Введите координату y: ");
    double z = getCoordinate("Введите координату z: ");
    return Point(x, y, z);
}

double getCoordinate(const string& message)
{
    cout << message;
    double coordinate = 0.0;
    cin >> coordinate;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw invalid_argument("Введено некорректное значение координаты");
    }
    return coordinate;
}

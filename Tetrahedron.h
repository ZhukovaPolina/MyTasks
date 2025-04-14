#pragma once
#include "Point.h"

/**
 * @class Tetrahedron
 * @brief Класс, представляющий тетраэдр в трехмерном пространстве.
 */
class Tetrahedron
{
private:
    Point point1; 
    Point point2; 
    Point point3;
    Point point4; 

public:
    /**
     * @brief Конструктор тетраэдра по четырем точкам
     * @param point1 Первая вершина тетраэдра
     * @param point2 Вторая вершина тетраэдра
     * @param point3 Третья вершина тетраэдра (формирует основание с point1 и point2)
     * @param point4 Четвертая вершина тетраэдра (вершина пирамиды)
     * @note Точки point1, point2 и point3 должны формировать треугольное основание,
     *       а point4 - вершину тетраэдра.
     */
    Tetrahedron(const Point& point1, const Point& point2,
        const Point& point3, const Point& point4);

    /**
      * @brief Получить длину стороны 1 (между point1 и point2)
      * @return Длина стороны основания между point1 и point2
      */
    double getSide1() const { return side1; }

    /**
     * @brief Получить длину стороны 2 (между point2 и point3)
     * @return Длина стороны основания между point2 и point3
     */
    double getSide2() const { return side2; }

    /**
     * @brief Получить длину стороны 3 (между point3 и point1)
     * @return Длина стороны основания между point3 и point1
     */
    double getSide3() const { return side3; }

    /**
     * @brief Вычислить площадь основания тетраэдра
     * @return Площадь треугольного основания, образованного точками point1, point2 и point3
     * @note Используется формула Герона для вычисления площади треугольника
     */
    double baseArea() const;
};

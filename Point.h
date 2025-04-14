#pragma once
#include <cmath>
#include <limits>

/**
 * @class Point
 * @brief Класс, представляющий точку в трехмерном пространстве.
 */
class Point
{
private:
    double x;
    double y;
    double z; 

public:
    /**
     * @brief Конструктор точки
     * @param x Координата по оси X 
     * @param y Координата по оси Y 
     * @param z Координата по оси Z 
     */
    Point(const double x = 0, const double y = 0, const double z = 0);

    /**
     * @brief Получить координату X точки
     * @return Значение координаты X
     */
    double getX() const;

    /**
     * @brief Получить координату Y точки
     * @return Значение координаты Y 
     */
    double getY() const;

    /**
     * @brief Получить координату Z точки
     * @return Значение координаты Z 
     */
    double getZ() const;

    /**
     * @brief Вычислить расстояние до другой точки
     * @return Расстояние между точками 
     */
    double distanceTo(const Point& other) const;
};

/**
 * @brief Оператор сравнения точек на равенство
 * @param point1 Первая точка для сравнения
 * @param point2 Вторая точка для сравнения
 * @return true если точки идентичны, false в противном случае
 */
bool operator==(const Point& point1, const Point& point2);

/**
 * @brief Оператор сравнения точек на неравенство
 * @param point1 Первая точка для сравнения
 * @param point2 Вторая точка для сравнения
 * @return true если точки различаются, false если идентичны
 */
bool operator!=(const Point& point1, const Point& point2);

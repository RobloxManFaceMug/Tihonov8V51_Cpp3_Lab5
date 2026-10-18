#include "Ball.hpp"
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


Ball::Ball(const Point& center, double radius, const Color& color)
    : cent(center), rad(radius), clr(color) {
    mss = M_PI * std::pow(radius, 3) * 4.0 / 3.0;
    isCollidable = true;
}


void Ball::setVelocity(const Velocity& velocity) {
    vel = velocity;
}


Velocity Ball::getVelocity() const {
    return {vel};
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw(cent, rad, clr);
}


void Ball::setCenter(const Point& center) {
    cent = center;
}


Point Ball::getCenter() const {
    return {cent};
}


double Ball::getRadius() const {
    return {rad};
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    return {M_PI * pow(rad, 3) * 4.0 / 3.0};
}

void Ball::setCollidable(bool cldFlag) {
    isCollidable = cldFlag;
}

bool Ball::getCollidable() const {
    return isCollidable;
}

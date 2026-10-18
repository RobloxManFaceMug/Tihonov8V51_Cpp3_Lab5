#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"
#include "Color.h"

class Ball {
private:
    Velocity vel;
    Point cent;
    double rad;
    double mss;
    Color clr;
    bool isCollidable = true;

public:
    Ball(const Point& center, double radius, const Color& color);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    void setCollidable(bool cldFlag);
    bool getCollidable() const;
};

#pragma once 
#include "Painter.h"
#include "Color.h"
#include "Velocity.h"
#include "Point.h"

class Dust {
    private:
        Point cent;
        Velocity vel;
        double t;
        Color clr;
    public:
        Dust(const Point& cent, const Velocity& vel, double t, const Color& clr);
        void draw(Painter& painter) const;
        void update(double t);
        bool itsOver() const;
};
#include "Dust.hpp"

Dust::Dust(const Point& center, const Velocity& velocity, double time, const Color& color) 
    :cent(center), vel(velocity), t(time), clr(color) {}

void Dust::draw(Painter& painter) const {
    painter.draw(cent, 20, clr);
}

void Dust::update(double time){
    t -= time;
    cent = cent + vel.vector() * time;
}

bool Dust::itsOver() const {
    return t <= 0.0;
}
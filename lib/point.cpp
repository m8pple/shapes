#include "point.hpp"

#include <iostream>
#include <string>

point::point() : x(0), y(0) {}

point::point(double ix, double iy) : x(ix), y(iy) {}

void point::translate(const point& p){
    x = x + p.x;
    y = y + p.y;
}

std::string point::to_s() {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

std::ostream& operator<<(std::ostream& os, point& p){
    return os << p.to_s();
}

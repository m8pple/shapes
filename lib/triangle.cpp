#include "triangle.hpp"

#include <iostream>
#include <string>


triangle::triangle(const point& ip1, const point& ip2, const point& ip3) :
    p1(ip1), p2(ip2), p3(ip3) {}

void triangle::translate(const point& p){
    p1.translate(p);
    p2.translate(p);
    p3.translate(p);
}

std::string triangle::to_s() {
    return "Triangle["+p1.to_s() + "," + p2.to_s() + "," + p3.to_s()+"]";
}

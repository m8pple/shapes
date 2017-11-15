#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "point.hpp"
#include "shape.hpp"

#include <iostream>
#include <string>

class triangle : public shape{    
public:

    triangle(const point& ip1, const point& ip2, const point& ip3);
    
    virtual void translate(const point& p);
    
    virtual std::string to_s();
private:    
    point p1;
    point p2;
    point p3;

};

#endif

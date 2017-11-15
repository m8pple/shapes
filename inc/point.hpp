#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>

class point{
public:
    point();
    point(double ix, double iy);
    
    void translate(const point& p);
    
    std::string to_s();
private:
    double x;
    double y;
};

std::ostream& operator<<(std::ostream& os, point& p);

#endif

#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "point.hpp"
#include <iostream>
#include <string>

class shape{

public:
    virtual void translate(const point& p) = 0;
    
    virtual std::string to_s() = 0;
};

std::ostream& operator<<(std::ostream& os, shape& s);

#endif

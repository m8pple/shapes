#include "shape.hpp"

#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& os, shape& s){
    return os << s.to_s();
}

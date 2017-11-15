#include <iostream>
#include "triangle.hpp"

int main(){   
    point p1, p2(0, 0), p3(0, 3), p4(4, 0), p5(1, 2); 
    
    std::cout << p1 << ", " << p2 << ", " << p3 << ", " << p4 << ", " << p5 << std::endl;
    
    triangle t(p2, p3, p4);
    std::cout << t << std::endl;
    
    t.translate(p5);
    std::cout << t << std::endl;
    
    return 0;
}

#include <iostream>
#include "point.hpp"

int main()
{
    Point p(1.0, 1.5);

    std::cout << p.compute_norm(); // output: 1.80278
}

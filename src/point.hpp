#pragma once

class Point
{
// this isn't essential as the default is private
private:

double m_x;
double m_y;

public:
// construct our Point
Point(double x, double y);

// calculate the R2 norm
double compute_norm();
};

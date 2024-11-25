#include "point.hpp"
#include <cmath>

Point::Point(double x, double y)
: m_x(x), m_y(y)
{}

double Point::compute_norm()
{
  return std::sqrt(m_x * m_x + m_y * m_y);
}

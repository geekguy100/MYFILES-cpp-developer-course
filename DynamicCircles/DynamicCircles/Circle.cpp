#define _USE_MATH_DEFINES
#include "Circle.h"
#include <cmath>

Circle::Circle()
	:radius{ 1.0F }
{
}

Circle::Circle(double radius)
	:radius{radius}
{
}

double Circle::getRadius() const noexcept
{
	return radius;
}

double Circle::getCircumference() const noexcept
{
	return 2 * M_PI * radius;
}

double Circle::getArea() const noexcept
{
	return M_PI * std::pow(radius, 2);
}

std::ostream & operator<<(std::ostream & os, const Circle & r)
{
	os << "Radius: " << r.radius << std::endl;
	os << "Circumference: " << r.getCircumference() << std::endl;
	os << "Area: " << r.getArea();
	return os;
}

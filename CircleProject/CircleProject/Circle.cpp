#include "Circle.h"

#define _USE_MATH_DEFINES
#include <cmath>

Circle::Circle()
	: MY_PI{ 3.14159 }, radius{ 1 }
{
}

Circle::Circle(double radius)
	: MY_PI{ 3.14159 }, radius{ radius }
{
}

double Circle::getRadius() const
{
	return this->radius;
}

double Circle::circumference() const
{
	return 2 * M_PI * this->radius;
}

double Circle::area() const
{
	return M_PI * std::pow(this->radius, 2);
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
}
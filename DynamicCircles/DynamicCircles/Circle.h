#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

class Circle
{
public:
	Circle();
	Circle(double radius);

	double getRadius() const noexcept;
	double getCircumference() const noexcept;
	double getArea() const noexcept;

	friend std::ostream& operator<<(std::ostream& os, const Circle& r);

private:
	double radius;
};

#endif // !CIRCLE_H

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	Circle();
	Circle(double radius);

	// Accessors
	double getRadius() const;
	double circumference() const;
	double area() const;

	// Mutators
	void setRadius(double radius);

private:
	double radius;
	const double MY_PI;
};


#endif
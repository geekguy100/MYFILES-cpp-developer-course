#include "Rectangle.h"

// Constructs a new Rectangle as a unit square (i.e. length and width equal 1.0).
Rectangle::Rectangle()
{
	this->length = 1.0;
	this->width = 1.0;
}

// Constructs a new Rectangle with a given length and width.
Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

// Returns the length of the rectangle.
double Rectangle::getLength() const
{
	return length;
}

// Returns the width of the rectangle.
double Rectangle::getWidth() const
{
	return width;
}

// Sets the length of the rectangle to the given length.
void Rectangle::setLength(double length)
{
	this->length = length;
}

// Sets the width of the rectangle to the given width.
void Rectangle::setWidth(double width)
{
	this->width = width;
}

// Returns the area of the rectangle.
double Rectangle::area() const
{
	return length * width;
}

// Returns the perimeter of the rectangle.
double Rectangle::perimeter() const
{
	return 2 * (length + width);
}

ostream & operator<<(ostream & os, const Rectangle & r)
{
	os << "Rectangle's length is " << r.getLength() << " and width is " << r.getWidth() << endl;
	os << "Area is " << r.area() << " and perimeter is " << r.perimeter() << ".";
	return os;
}

#include "Rectangle.h"

Rectangle::Rectangle()
{
	this->length = 1.0;
	this->width = 1.0;
}

Rectangle::Rectangle(double length, double width)
{
	this->length = length;
	this->width = width;
}

double Rectangle::getLength() const
{
	return length;
}
double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setLength(double length)
{
	this->length = length;
}

void Rectangle::setWidth(double width)
{
	this->width = width;
}

double Rectangle::area() const
{
	return length * width;
}

double Rectangle::perimeter() const
{
	return 2 * length + 2 * width;  
}

bool Rectangle::operator==(const Rectangle & rect) const noexcept
{
	return (this->length == rect.getLength()) &&
		(this->width == rect.getWidth());
}

Rectangle Rectangle::operator+(const Rectangle & rect) const noexcept
{
	Rectangle newRect{ this->length + rect.getLength(), this->width + rect.getWidth() };
	return newRect;
}

void Rectangle::operator=(const Rectangle & rect) noexcept
{
	this->length = rect.getLength();
	this->width = rect.getWidth();
}

bool Rectangle::operator!=(const Rectangle & other) const noexcept
{
	return (this->length != other.getLength()) || (this->width != other.getWidth());
}

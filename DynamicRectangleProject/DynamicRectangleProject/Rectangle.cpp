#include "Rectangle.h"

Rectangle::Rectangle(int width, int height, std::string name)
{
	this->width = width;
	this->height = height;
	this->name = name;
}

Rectangle::Rectangle()
{
	this->width = 0;
	this->height = 0;
	this->name = "Default Rectangle";
}

int Rectangle::getWidth() const noexcept
{
	return width;
}

int Rectangle::getHeight() const noexcept
{
	return height;
}

std::string Rectangle::getName() const noexcept
{
	return name;
}

void Rectangle::setWidth(int width) noexcept
{
	this->width = width;
}

void Rectangle::setHeight(int height) noexcept
{
	this->height = height;
}

void Rectangle::setName(std::string name) noexcept
{
	this->name = name;
}

std::ostream & operator<<(std::ostream & os, const Rectangle & r)
{
	os << r.name << " has width " << r.width << " and height " << r.height << ".";
	return os;
}

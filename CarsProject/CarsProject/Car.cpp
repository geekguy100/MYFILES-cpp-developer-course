#include "Car.h"

Car::Car(const std::string & color, int numDoors)
	: color{ color }, numDoors{ numDoors }
{}

std::string Car::getColor() const noexcept
{
	return this->color;
}

int Car::getNumDoors() const noexcept
{
	return this->numDoors;
}
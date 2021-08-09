#include "Animal.h"

Animal::Animal(std::string const & name, double weight)
	:name{ name }, weight{ weight }
{
}

std::string Animal::getName() const noexcept
{
	return name;
}

double Animal::getWeight() const noexcept
{
	return weight;
}

void Animal::setName(std::string const & name) noexcept
{
	this->name = name;
}

void Animal::setWeight(double weight) noexcept
{
	this->weight = weight;
}
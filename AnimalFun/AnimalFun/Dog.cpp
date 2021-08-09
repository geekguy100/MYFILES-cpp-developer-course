#include "Dog.h"
#include <iostream>

Dog::Dog(std::string const & breed, std::string const & name, double weight)
	:Animal(name, weight), breed{breed}
{}

std::string Dog::getBreed() const noexcept
{
	return breed;
}

void Dog::digHole() const noexcept
{
	std::cout << "Dog " << getName() << " digs a hole!" << std::endl;
}

void Dog::chaseCat() const noexcept
{
	std::cout << getName() << " chases a cat!" << std::endl;
}

std::string Dog::makeNoise() const noexcept
{
	return "Bark Bark!";
}

std::string Dog::eat() const noexcept
{
	return "I love eating dog food!";
}

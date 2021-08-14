#include "Cat.h"
#include <iostream>

Cat::Cat(std::string const & name, double weight)
	: Animal(name, weight)
{}

std::string Cat::makeNoise() const noexcept
{
	return "Meow";
}

std::string Cat::eat() const noexcept
{
	return getName() + " eats fish.";
}

void Cat::chaseMouse() const noexcept
{
	std::cout << getName() + " chases a mouse." << std::endl;
}
#include "Dog.h"

#include <iostream>
#include <stdexcept>

Dog::Dog(const std::string & breed)
{
	if (breed != "Poodle")
	{
		this->breed = breed;
		std::cout << "Created a " << breed << " Dog!" << std::endl;
	}
	else
		throw std::runtime_error("A Poodle is not an acceptable breed!");
}

std::string Dog::getBreed() const noexcept
{
	return this->breed;
}

void Dog::setBreed(std::string breed) noexcept
{
	this->breed = breed;
}

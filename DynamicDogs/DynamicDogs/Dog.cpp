#include "Dog.h"

// Constructs a new Dog object.
Dog::Dog(std::string name, std::string breed)
{
	this->name = name;
	this->breed = breed;
}

// Returns the Dog's name.
std::string Dog::getName() const noexcept
{
	return name;
}

// Returns the Dog's breed.
std::string Dog::getBreed() const noexcept
{
	return breed;
}

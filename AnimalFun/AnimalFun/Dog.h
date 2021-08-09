#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>

class Dog : public Animal
{
public:
	Dog(std::string const & breed, std::string const & name, double weight);

	std::string getBreed() const noexcept;
	void digHole() const noexcept;
	void chaseCat() const noexcept;

	std::string makeNoise() const noexcept;
	std::string eat() const noexcept;

private:
	std::string breed;
};

#endif
#ifndef  DOG_H
#define DOG_H

#include <string>

class Dog
{
public:
	Dog(const std::string & breed);

	// Accessor
	std::string getBreed() const noexcept;

	// Mutator
	void setBreed(std::string breed) noexcept;

private:
	std::string breed;
};

#endif

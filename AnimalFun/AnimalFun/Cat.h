#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include <string>

class Cat : public Animal
{
public:
	Cat(std::string const & name, double weight);

	std::string makeNoise() const noexcept;
	std::string eat() const noexcept;

	void chaseMouse() const noexcept;
};

#endif
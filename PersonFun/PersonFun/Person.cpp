#include "Person.h"
#include <stdexcept>
#include <iostream>

Person::Person(const std::string & name)
{
	std::cout << "Constructing person with name '" << name << "'" << std::endl;
	setName(name);
}

std::string Person::getName() const noexcept
{
	return this->name;
}

void Person::setName(const std::string & name)
{
	if (name != "John")
		this->name = name;
	else
		throw std::runtime_error("We can't use the name John!");
}

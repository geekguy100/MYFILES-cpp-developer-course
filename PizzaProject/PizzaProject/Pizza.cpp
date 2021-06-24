#include "Pizza.h"
#include <iostream>

Pizza::Pizza(std::string name, int cost, int diameter)
{
	this->name = name;
	this->cost = cost;
	this->diameter = diameter;

	this->addTopping("cheese");
}

void Pizza::addTopping(std::string topping)
{
	this->toppings.push_back(topping);
}

int Pizza::getCost() const
{
	return this->cost;
}

int Pizza::getDiameter() const
{
	return this->diameter;
}

std::string Pizza::getName() const
{
	return this->name;
}

void Pizza::printToppings() const
{
	std::cout << this->name << "'s Toppings:" << std::endl;

	for (std::string topping : this->toppings)
	{
		std::cout << "\t" << topping << std::endl;
	}
}

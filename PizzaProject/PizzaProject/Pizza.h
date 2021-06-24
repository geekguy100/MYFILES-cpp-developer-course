#ifndef PIZZA_H
#define PIZZA_H

#include <vector>
#include <string>

class Pizza
{
public:
	Pizza(std::string name, int cost, int diameter);

	// Adds a topping to the pizza's collection of toppings.
	void addTopping(std::string topping);

	// Returns the cost of the pizza.
	int getCost() const;

	// Returns the diameter of the pizza.
	int getDiameter() const;

	// Returns the name of the pizza.
	std::string getName() const;

	// Prints all of the toppings on ths pizza to standard output.
	void printToppings() const;

private:
	// The name of the pizza.
	std::string name;

	// How much the pizza costs.
	int cost;

	// The pizza's diameter.
	int diameter;

	// The collection of toppings composed on the pizza.
	std::vector<std::string> toppings;
};


#endif
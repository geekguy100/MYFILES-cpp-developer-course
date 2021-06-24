#include <iostream>
#include "Pizza.h"

using namespace std;

void printPizzaDetails(const Pizza & pizza);

int main()
{
	Pizza pizzaOne("Kpatt Pizza", 30, 20);
	printPizzaDetails(pizzaOne);
	pizzaOne.addTopping("peporronni");
	printPizzaDetails(pizzaOne);

	system("pause");
	return 0;
}

void printPizzaDetails(const Pizza & pizza)
{
	cout << pizza.getName() << "'s Pizza Details:" << endl;
	cout << "Cost: $" << pizza.getCost() << endl;
	cout << "Diameter: " << pizza.getDiameter() << " inches." << endl;
	pizza.printToppings();
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
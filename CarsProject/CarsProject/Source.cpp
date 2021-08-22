#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	auto carPtr{ make_unique<Car>("red", 4) };
	cout << "Car is painted " << carPtr->getColor() << "." << endl;
	cout << "Car has " << carPtr->getNumDoors() << " doors." << endl;

	cout << endl;
	system("pause");
	return 0;
}
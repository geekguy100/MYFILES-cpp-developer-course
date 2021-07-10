#include "Circle.h"
#include <iostream>

using namespace std;

void printCircles(Circle * const * const circles, const int ARR_LENGTH);
int main()
{
	int arrSize;

	cout << "Please enter the number of circles to create: ";
	cin >> arrSize;

	while (cin.fail() || arrSize < 1)
	{
		cin.clear();
		cin.ignore(999, '\n');

		cout << "Invalid number. Please provide a number greater than or equal to 1: ";
		cin >> arrSize;
	}

	//Circle * circles = new Circle[arrSize]; // why does this work? Am I creating a dynamic array to Circle objects?
	Circle * cir = new Circle[arrSize];

	Circle ** circles = new Circle*[arrSize]; // Referring to "new Circle*[arrSize], Circle* is the data type of the array, that being pointers to Circle objects.
	                                          // In other words, "circles (array name) is a dynamically-allocated array (right-most asterisk) 
	                                          // consisting of pointers to Circle objects (left-most asterisk)."

	for (int i = 0; i < arrSize; ++i)
	{
		cout << "What is circle " << i << "'s radius?: ";
		double r;
		cin >> r;

		circles[i] = new Circle{ r };
	}

	printCircles(circles, arrSize);





	// Deallocate Memory
	// First we delete each individual Circle...
	for (int i = 0; i < arrSize; ++i)
	{
		delete circles[i];
		circles[i] = nullptr;
	}
	
	// Then we deallocate the array.
	delete[] circles;

	cout << endl;
	system("pause");
	return 0;
}

void printCircles(Circle * const * const circles, const int ARR_LENGTH)
{
	cout << endl;

	for (int i = 0; i < ARR_LENGTH; ++i)
	{
		cout << "Circle " << i << ":" << endl;
		cout << *(circles[i]) << endl;
		cout << endl;
	}
}
#include "Rectangle.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void printRectangles(Rectangle * const * const myRectangles, const int ARR_LENGTH);
int main()
{
	Rectangle * myRectangles[3];
	int max = 10;
	int min = 2;
	int i{ 0 };

	srand(time(nullptr));

	for (int i = 0; i < 3; ++i)
	{
		int width{ (rand() % (max - min + 1)) + min };
		int height{ (rand() % (max - min + 1)) + min };

		myRectangles[i] = new Rectangle(width, height, "Rectangle " + to_string(i));
	}

	printRectangles(myRectangles, 3);

	for (Rectangle * r : myRectangles)
	{
		delete r;
		r = nullptr;
	}

	system("pause");
	return 0;
}

void printRectangles(Rectangle * const * const myRectangles, const int ARR_SIZE)
{
	// myRectangles holds the memory address of the first pointer in the array that points to a specific rectangle.
	// so (myRectangles + i) returns the memory address of the pointer that points to rectangle i.
	// and when we deference it, *(myRectangles + i) points to the memory address of a rectangle.
	// Dereferencing it once more, **(myRectangles + i) returns a specific rectangle.

	for (int i = 0; i < ARR_SIZE; ++i)
	{
		cout << myRectangles << endl;
		cout << (myRectangles + i) << endl;
		cout << *(myRectangles + i) << endl;
		cout << **(myRectangles + i) << endl;
		cout << endl;
	}
}
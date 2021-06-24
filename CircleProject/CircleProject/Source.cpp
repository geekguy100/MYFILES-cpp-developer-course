#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;

void printCircleDetails(const Circle & circle, string circleName);

int main()
{
	Circle circleOne = Circle();
	Circle myCircle = Circle(13);

	printCircleDetails(circleOne, "Circle 1");
	circleOne.setRadius(22);
	printCircleDetails(circleOne, "Circle 1");

	printCircleDetails(myCircle, "Circle 2");

	cout << endl << endl;
	system("pause");
	return 0;
}

void printCircleDetails(const Circle & circle, string circleName)
{
	cout << circleName << " Details:" << endl;
	cout << "\tRadius: " << circle.getRadius() << endl;
	cout << "\tCircumference: " << circle.circumference() << endl;
	cout << "\tArea: " << circle.area() << endl;

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}
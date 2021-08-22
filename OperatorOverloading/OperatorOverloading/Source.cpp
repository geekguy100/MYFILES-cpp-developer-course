#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	char myString[]{ "Kyle" };
	myString[0] = 'X';

	


	cout << myString << endl;
	
	Rectangle rect1{ 10, 20 };
	Rectangle rect2{ 50, 100 };
	Rectangle rect3{ 10, 20 };
	Rectangle resultRect{ rect1 + rect2 };

	cout << "rect1 == rect3 : " << boolalpha << (rect1 == rect3) << endl;
	cout << "resultRectangle area is " << resultRect.area() << endl;
	cout << endl;
	cout << "rect1 != rect3 : " << (rect1 != rect3) << endl;
	cout << "rect2 != rect3 : " << (rect2 != rect3) << endl;

	cout << endl;
	system("pause");
	return 0;
}
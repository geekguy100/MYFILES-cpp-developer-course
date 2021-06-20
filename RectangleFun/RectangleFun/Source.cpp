#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle r1;
	Rectangle r2(5.0, 2.0);

	cout << "R1's area is " << r1.area() << endl;
	cout << "R2's area is " << r2.area() << endl;
	cout << endl;

	r1.setLength(22);
	r1.setWidth(12);

	cout << "R1's length is changed to " << r1.getLength() << endl;
	cout << "R1's width is changed to " << r1.getWidth() << endl;
	cout << "R1's area is now " << r1.area() << endl;
	cout << endl;

	cout << "R1 perimeter is " << r1.perimeter() << endl;
	cout << "R2 perimeter is " << r2.perimeter() << endl;

	cout << endl;
	system("pause");
	return 0;
}
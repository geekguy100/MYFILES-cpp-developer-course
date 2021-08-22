#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"

using namespace std;

int main()
{
	RectangleHelper helper;
	Rectangle r{ 10, 10 };

	cout << r.area() << endl;

	changeData(r);

	cout << r.area() << endl;

	helper.modifyRectangle(r);

	cout << r.area() << endl;

	printData(r);
	//helper.printData(r);

	cout << endl;
	system("pause");
	return 0;
}

void changeData(Rectangle & rect)
{
	rect.width = 122;
	rect.length = 40;
}

void printData(const Rectangle & rect) noexcept
{
	cout << "Width of rectangle: " << rect.width << endl;
	cout << "Length of rectangle: " << rect.length << endl;
}

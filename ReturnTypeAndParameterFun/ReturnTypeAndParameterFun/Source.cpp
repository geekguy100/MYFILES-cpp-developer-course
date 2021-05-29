#include <iostream>

using namespace std;

void printHello();
void printNumber(int a);
int giveMe10();
int sum(int num1, int num2);
int square(int num);

int main()
{
	printHello();
	printNumber(22);
	cout << "giveMe10() returned: " << giveMe10() << endl;
	cout << "Sum of 2 and 15 is " << sum(2, 15) << endl;
	cout << "Square of 6 is " << square(6) << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}

void printHello()
{
	cout << "Hello, World!" << endl;
}

void printNumber(int a)
{
	cout << a << endl;
}

int giveMe10()
{
	return 10;
}

int sum(int num1, int num2)
{
	return (num1 + num2);
}

int square(int num)
{
	return num * num;
}
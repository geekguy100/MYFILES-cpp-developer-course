#include <iostream>
#include <stdexcept>
using namespace std;

void processPositive(int num);
void doSomething(int num);
int main()
{
	int input;

	try
	{
		cout << "Enter a number to process: ";
		cin >> input;
		doSomething(input);
		cout << "Yay! main() was able to completely process the number." << endl;
	}
	catch(const invalid_argument & err)
	{
		cerr << "main() says there is an error..." << endl;
		cerr << err.what() << endl;
	}
	catch (const out_of_range & err)
	{
		cerr << "main() says the number is too big..." << endl;
		cerr << err.what() << endl;
	}

	cout << endl;
	system("pause");
}

void processPositive(int num)
{
	cout << "Welcome to the positive integer processor!" << endl;
	if (num <= 100)
		cout << "Awesome! You passed in a valid number to processPositive()." << endl;
	else
	{
		cerr << "processPositive() says the number is too big..." << endl;
		throw out_of_range("Number cannot be larger than 100");
	}
}

void doSomething(int num)
{
	try
	{
		processPositive(num);
		cout << "Nice job! doSomething() processed the number." << endl;
	}
	catch (const invalid_argument & err)
	{
		cerr << "doSomething has encountered a problem." << endl;
		throw;
	}
	catch (const out_of_range & err)
	{
		cerr << "doSomething says the number is too big." << endl;
		throw;
	}
}
#include <iostream>
#include <stdexcept>
#include "Person.h"
using namespace std;

int main()
{
	try
	{
		Person person1{ "Kyle" };
		Person person2{ "Sally" };
		Person person3{ "John" };
		Person person4{ "Will.I.Am" };

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;
	}
	catch (const runtime_error & err)
	{
		cout << err.what() << endl;
	}

	system("pause");
}
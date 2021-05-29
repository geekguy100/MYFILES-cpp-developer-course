#include <iostream>
#include <string>

void printName(const std::string &);
void getName(std::string &);

int main()
{
	std::string userName;
	getName(userName);
	printName(userName);

	std::cout << std::endl << std::endl;
	system("pause");
}

// Prints the user's name to the console.
void printName(const std::string & name)
{
	std::cout << "Hello, " << name << "!" << std::endl;
}

// Get the user's name from console input.
void getName(std::string & name)
{
	std::cout << "Please enter your name: ";
	getline(std::cin, name);
}
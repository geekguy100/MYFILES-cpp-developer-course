#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
int getResult(int num);
string getResult(string str1, string str2);
int getResult(int num1, string test);
int getResult(string test, int num2);

int main()
{
	int resultNum = getResult(30, 20);
	string nameResult = getResult("Kyle", "Grenier");
	int newNum = getResult(15);

	cout << "resultNum = " << resultNum << endl;
	cout << "nameResult = " << nameResult << endl;
	cout << "newNum = " << newNum << endl;


	system("pause");
	return 0;
}

// Returns num1 multipled by num2.
int getResult(int num1, int num2)
{
	return num1 * num2;
}

// Returns the cube of the given integer.
int getResult(int num)
{
	return num * num * num;
}

// Returns the two strings concatenated with a space in between.
string getResult(string str1, string str2)
{
	return str1 + " " + str2;
}

int getResult(string test, int num1)
{
	return 0;
}

int getResult(int num1, string test)
{
	return 0;
}
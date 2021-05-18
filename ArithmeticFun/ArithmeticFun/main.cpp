/*
	Arithmetic Operators
	+	addition
	-	subtraction
	*	multiplication
	/	division
	%	modulus
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b;

	int diff = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;

	cout << "Sum of " << a << " and " << b << " is " << sum << endl;
	cout << "Difference of " << a << " and " << b << " is " << diff << endl;
	cout << "Product \t=\t " << product << endl;
	cout << "Quotient \t=\t " << quotient << endl;
	cout << "Remainder \t=\t " << remainder << endl;



	getchar();
	return 0;
}
#include <iostream>
#include <stdexcept>

int iAmBroken(int num1, int num2);
int main()
{
	try
	{
		int a{ iAmBroken(10, 5) };
		std::cout << a << std::endl;

		int b{ iAmBroken(20,0) };
		std::cout << b << std::endl;
	}
	catch (const std::invalid_argument & err)
	{
		std::cerr << err.what() << std::endl;
	}

	std::cout << std::endl;
	std::system("pause");
}

int iAmBroken(int num1, int num2)
{
	int result{ 0 };
	if (num2 != 0)
		result = num1 / num2;
	else
		throw std::invalid_argument("Cannot divide by 0");
}
#include <iostream>
#include <vector>

using namespace std;


int factorial(int num);
int dynamicFactorial(int num);
int betterFactorial(int);

int main()
{
	int num = 1;

	cout << "The factorial of " << num << " using recursion is " << factorial(num) << endl;
	cout << "The factorial of " << num << " using betterFactorial is " << betterFactorial(num) << endl;
	cout << "The factorial of " << num << " using dynamicFactorial is " << dynamicFactorial(num) << endl;

	system("pause");
	return 0;
}

int factorial(int num)
{
	if (num > 2)
		return num * factorial(num - 1);
	
	return num;
}

int dynamicFactorial(int num)
{
	if (num < 2)
		return num;

	vector<int> v(num);
	v[num - 1] = num;

	for (int i = num - 2; i > 0; --i)
	{
		v[i] = v[i + 1] * (i + 1);
	}

	return v[1];
}

int betterFactorial(int num)
{
	int f{num};
	for (int i = num - 1; i > 1; --i)
	{
		f *= i;
	}

	return f;
}
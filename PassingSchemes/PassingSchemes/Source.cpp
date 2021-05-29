#include <iostream>

using namespace std;

void valueChanged1(int num);
void valueChanged2(int & num);
void threeTimesN(int, int &);
void test();

int main()
{
	int num = 20;
	cout << "Before valueChanged1, num = " << num << endl;
	valueChanged1(num);
	cout << "After valueChanged1, num = " << num << endl;

	cout << "~~~~~~~~~~~~~~~" << endl;
	cout << "Before valueChanged2, num = " << num << endl;
	valueChanged2(num);
	cout << "After valueChanged2, num = " << num << endl;

	int num2 = 5;
	int result = 0;
	cout << "~~~~~~~~~~~~~~~" << endl;
	cout << "Before threeTimesN, num2 = " << num2 << " and result = " << result << endl;
	threeTimesN(num2, result);
	cout << "After threeTimesN, num2 = " << num2 << " and result = " << result << endl;


	cout << endl << endl;
	system("pause");
	return 0;
}

// Changes the parameter to the integer 100.
void valueChanged1(int num)
{
	num = 100;
}

// Changes the parameter to the integer 100.
void valueChanged2(int & num)
{
	num = 100;
}

// Multiples num1 by 3 and stores the result in num2.
void threeTimesN(int num1, int & num2)
{
	num2 = num1 * 3;
}
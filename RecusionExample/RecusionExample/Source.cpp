#include <iostream>

using namespace std;

void countdownFrom(int num);
int sumValues(int num);

int main()
{
	countdownFrom(10);

	int totalSum = sumValues(10);
	cout << "The total sum from 10 is " << totalSum << endl;

	system("pause");
	return 0;
}

void countdownFrom(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countdownFrom(num - 1);
	}
}

int sumValues(int num)
{
	if (num >= 1)
		return num + sumValues(num - 1);

	return num;
}
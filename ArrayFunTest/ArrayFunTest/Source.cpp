#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(nullptr));

	array<int, 5> myIntArray{};

	for (int i = 0; i < myIntArray.size(); ++i)
	{
		myIntArray[i] = rand() % 100 + 1;
		cout << "myIntArray[" << i << "] = " << myIntArray[i] << endl;
	}

	cout << "The size of the array is " << myIntArray.size() << endl;

	system("pause");
	return 0;
}
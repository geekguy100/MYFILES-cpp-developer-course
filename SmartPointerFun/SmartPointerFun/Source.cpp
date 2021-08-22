#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<double> myDoublePtr{make_unique<double>()};
	*myDoublePtr = 3.14;

	const int ARR_SIZE{5};
	auto myArray{ make_unique<int[]>(ARR_SIZE) };

	for (int i{}; i < ARR_SIZE; ++i)
	{
		myArray[i] = i * 2;
	}
	for (int i{}; i < ARR_SIZE; ++i)
	{
		cout << myArray[i] << endl;
	}

	// Transferring object ownership:
	cout << "pointer value: " << *myDoublePtr << endl;
	cout << "pointer address: " << myDoublePtr << endl;

	unique_ptr<double> otherDoublePtr{ move(myDoublePtr) };

	cout << "other pointer value: " << *otherDoublePtr << endl;
	cout << "other pointer address: " << otherDoublePtr << endl << endl;

	cout << "Original pointer address after move(): " << myDoublePtr << endl;

	cout << endl;
	system("pause");
	return 0;
}
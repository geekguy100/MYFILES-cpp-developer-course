#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
	vector<int> myNums;
	try
	{
		myNums.resize(myNums.max_size() + 1);
		cout << "We just created a large vector!" << endl;
	}
	catch (const length_error & err)
	{
		cerr << typeid(err).name() << ": " << err.what() << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}
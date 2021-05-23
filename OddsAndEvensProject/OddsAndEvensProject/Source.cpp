#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i <= 50; ++i)
	{
		cout << i << " is " << ((i % 2 == 0) ? " even" : " odd") << endl;
	}

	system("pause");
	return 0;
}
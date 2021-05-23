#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	while (count < 10)
	{
		count++;
		if (count == 5)
			break;

		cout << count << endl;
	}

	system("pause");
	return 0;
}
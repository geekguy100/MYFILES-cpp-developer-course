#include <iostream>
#include <stdexcept>
#include "warp_drive_overheating.h"

using namespace std;

void warpTest(int temp);
int main()
{
	int temps[]{22, -15, 66, 79, 80, 99, 45};

	for (int temp : temps)
	{
		try
		{
			warpTest(temp);
			cout << endl;
		}
		catch (const warp_drive_overheating & err)
		{
			cerr << err.what() << endl;
			cout << endl;
		}
	}

	system("pause");
	return 0;
}

void warpTest(int temp)
{
	cout << "Reading temperature of " << temp << " degrees Celcius..." << endl
		<< "RESULTS: ";

	if (temp > 80)
		throw warp_drive_overheating();
	else
		cout << "Acceptable" << endl;
}
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("scores.txt");

	const int MAX_NUM{ 100 };
	const int MIN_NUM{ 0 };

	if (!infile)
	{
		cout << "Could not open 'scores.txt'. Terminating program..." << endl;
		system("pause");
		return 1;
	}

	int min{ 101 };
	int max{ -1 };
	double avg{ 0 };
	int count{ 0 };

	while (!infile.eof())
	{
		int num;
		infile >> num;
		
		// Reject num if < 0 or > 100.
		if (num < MIN_NUM || num > MAX_NUM)
			continue;

		// NOTE: Could also initialize our min and max variables like this.
		/***********************/
		//if (count == 0)
		//{
		//	min = num;
		//	max = num;
		//}
		/***********************/

		++count;

		// Assign new min and max if applicable.
		if (num < min)
			min = num;
		if (num > max)
			max = num;

		// Add num to the avg.
		avg += num;
	}

	// Finalizing the average.
	if (count > 0)
		avg /= count;

	// Printing results
	cout << "Statistics: " << endl;
	cout << "\tmax: " << max << endl;
	cout << "\tmin: " << min << endl;
	cout << "\tavg: " << avg << endl;


	infile.close();
	cout << endl;
	system("pause");
	return 0;
}
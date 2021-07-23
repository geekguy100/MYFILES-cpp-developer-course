#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// By passing in an ostream object, we can use this function to print
// to any txt file OR the console! How cool!
void printFormatted(ostream & outfile, int num);
int main()
{
	ofstream outfile;

	cout << "Please enter a number: ";

	int num;
	cin >> num;

	outfile.open("output.txt");
	outfile << fixed << showpoint;
	cout << fixed << showpoint; // sticky stream manipulators will last the duration of the program
                                // until manually changed back.

	printFormatted(outfile, num);
	printFormatted(cout, num);


	outfile.close();

	cout << "Done!" << endl;

	system("pause");
	return 0;
}

// Prints out formatted numbers to a text file.
// outfile - a reference to an ostream object.
// num - the amount of numbers to print.
void printFormatted(ostream & outfile, int num)
{
	for (int i = 1; i <= num; ++i)
	{
		outfile << setw(12) << setprecision(2) << (i * 3.14159);
		outfile << setw(12) << setprecision(3) << (i * 5.4321) << endl;
	}
}
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream nameFile;
	ifstream ageFile;
	ofstream outFile;

	string tempName;
	int tempAge;

	cout << "Opening files..." << endl;
	nameFile.open("names.txt");
	ageFile.open("ages.txt");
	outFile.open("output.txt");

	if (!nameFile || !ageFile)
	{
		cout << "'names.txt' or 'ages.txt' could not be opened. Terminating program..." << endl;
		system("pause");
		return 1;
	}

	while (!nameFile.eof() && !ageFile.eof())
	{
		getline(nameFile, tempName);
		ageFile >> tempAge;

		outFile << setw(18) << tempName << "  " << tempAge << endl;
	}


	nameFile.close();
	ageFile.close();
	outFile.close();
	cout << "DONE!" << endl;
	system("pause");
	return 0;
}
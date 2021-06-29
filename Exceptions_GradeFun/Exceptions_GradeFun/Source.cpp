#include <iostream>
#include <stdexcept>
using namespace std;

char getLetterGrade(int percent);
int main()
{
	try
	{
		int grades[]{89, 100, 32, 66, 0, 67, 102, -20};

		for (int grade : grades)
		{
			cout << grade << " = " << getLetterGrade(grade) << endl;
		}
	}
	catch (const out_of_range & err)
	{
		cerr << err.what() << endl;
	}

	system("pause");
	return 0;
}

char getLetterGrade(int percent)
{
	if (percent < 0 || percent > 100)
		throw out_of_range("Your percentage must be within 0 and 100, inclusive.");
	else
	{
		if (percent > 89)
			return 'A';
		else if (percent > 79)
			return 'B';
		else if (percent > 69)
			return 'C';
		else if (percent > 59)
			return 'D';
		else
			return 'F';
	}
}
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, string> contacts;
	contacts["Kyle Grenier"] = "847-254-3515";
	contacts["Steven Robert"] = "847-644-7355";
	contacts["Olivia Ryan"] = "847-987-9372";

	for (const auto & element : contacts)
	{
		cout << element.first << " = " << element.second << endl;
	}


	cout << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

void populateMap(map<string, int> & map, ifstream & infile) noexcept;
int main()
{
	map<string, int> shoppingList;

	ifstream infile;
	infile.open("shopping.txt");
	if (!infile)
	{
		cerr << "Could not open 'shopping.txt'. Terminating program..." << endl;
		system("pause");
		return 1;
	}

	populateMap(shoppingList, infile);

	int count{};
	auto it{ shoppingList.cbegin() };
	while (it != shoppingList.cend())
	{
		cout << "Item " << count << ":" << endl;
		cout << "\tName: " << it->first
			<< "\n\tQuantity: " << it->second << endl << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

		++count;
		++it;
	}


	infile.close();
	system("pause");
	return 0;
}

void populateMap(map<string, int> & map, ifstream & infile) noexcept
{
	while (!infile.eof())
	{
		string itemName;
		getline(infile, itemName);

		auto it{ map.emplace(itemName, 0).first }; // The iterator pointing to the location of the element we need.
		// The iterator is a pointer to the element in the map, with the 'first' member variable being the key, and the 'second'
		// member variable being the value.

		// TODO: Go to the location the iterator points to and update the count.
		// It doesn't matter if the element is new or not. The iterator will point to what we need.
		// We just need to update the count.

		++(it->second);
	}
}
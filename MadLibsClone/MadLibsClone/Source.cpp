#include <iostream>
#include <string>

using namespace std;

int main()
{
	string adj1;
	string adj2;
	string adj3;
	string girlsName;
	string occupation;
	string occupation2;
	string place;
	string clothing;
	string hobby;
	string boysName;
	string mansName;

	cout << "Please enter an adjective: ";
	getline(cin, adj1);
	cout << "Please enter another adjective: ";
	getline(cin, adj2);
	cout << "Please enter a final adjective: ";
	getline(cin, adj3);

	cout << "Please enter the name of a girl: ";
	getline(cin, girlsName);
	cout << "Please enter the name of a boy: ";
	getline(cin, boysName);
	cout << "Please enter the name of a man: ";
	getline(cin, mansName);

	cout << "Please enter an occupation: ";
	getline(cin, occupation);
	cout << "Please enter the name of another occupation: ";
	getline(cin, occupation2);

	cout << "Please enter the name of a place: ";
	getline(cin, place);

	cout << "Please enter the name of a PLURAL clothing item: ";
	getline(cin, clothing);

	cout << "PLease enter the name of a hobby: ";
	getline(cin, hobby);

	string sentence = "There once was a " + adj1 + " girl named " + girlsName + " who was a " + adj2 + " " + occupation + " in the Kingdom of " + place + ". ";
	sentence += "She loved to wear " + clothing + " and practice " + hobby + ". ";
	sentence += "She wanted to marry the " + adj3 + " " + occupation2 + " named " + boysName + ", but her father, King " + mansName + ", forbid her from seeing him.";

	cout << endl << endl << sentence << endl;

	system("pause");
	return 0;
}
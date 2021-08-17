#include <iostream>
#include <stack>
#include <string>

using namespace std;

void storeReverse(const string & originalString, stack<char> & reverseStack);
bool isPalindrome(const string & originalString);
void printResult(const string & originalString);
int main()
{
	string myStrings[5]{ "Apple", "madamimadam", "racecar", "solos", "Kyle" };
	
	for (string s : myStrings)
	{
		printResult(s);
		cout << endl;
	}

	system("pause");
	return 0;
}

void storeReverse(const string & originalString, stack<char> & reverseStack)
{
	for (char c : originalString)
		reverseStack.push(c);
}

bool isPalindrome(const string & originalString)
{
	stack<char> reverseStack;
	storeReverse(originalString, reverseStack);

	// Setting this to true before checking = optimistic view
	bool result{ true };

	for (char c : originalString)
	{
		char currentChar{ reverseStack.top() };
		if (c != currentChar)
		{
			result = false;
			break;
		}

		reverseStack.pop();
	}

	return result;
}

void printResult(const string & originalString)
{
	cout << "Is '" << originalString << "' a palindrome?:" << endl;
	cout << "\t" << boolalpha << isPalindrome(originalString) << endl;
}
#include <iostream>

using namespace std;

void noConst() noexcept;
void cp2ncd() noexcept;
void cp2cd() noexcept;
void npc2cd() noexcept;
void noChange(double const * const d) noexcept;

int main()
{
	noConst();
	cout << endl;

	cp2ncd();
	cout << endl;

	cp2cd();
	cout << endl;

	npc2cd();
	cout << endl;

	double * myDouble = new double{ 56 };
	noChange(myDouble);

	delete myDouble;
	myDouble = nullptr;

	system("pause");
	return 0;
}

// Neither is constant; both can be changed.
void noConst() noexcept
{
	cout << "Inside of noConst()" << endl;
	int * ptr = new int{ 50 };
	cout << "\toriginal value : " << *ptr << endl;

	*ptr = 100;
	cout << "\tchanged value : " << *ptr << endl;

	delete ptr; // delete the current dynamic int.

	ptr = new int{ 125 };
	cout << "\tnew integer entirely : " << *ptr << endl;

	delete ptr;

	ptr = nullptr;
}


// The pointer is constant (cannot be changed). The data is not constant (can be changed).
void cp2ncd() noexcept
{
	cout << "Inside cp2ncd()" << endl;

	int * const intPtr = new int{ 100 };
	cout << "\tOriginal Value : " << *intPtr << endl;

	*intPtr = 250; // We can change the value b/c the data we point to is non-constant.
	cout << "\tChanged Value : " << *intPtr << endl;

	delete intPtr;

	// intPtr = new int{ 256 }; // We cannot do this because our pointer is constant.
	// ERROR: must have a modifiable lvalue.

}


// We cannot change the pointer's value, and we cannot change the data is points to.
// Both are constant and cannot be changed.
void cp2cd() noexcept
{
	cout << "Inside cp2cd()" << endl;

	int const * const intPtr = new int{ 72 };
	cout << "\tOriginal Value : " << *intPtr << endl;

	// *intPtr = 34;
	// intPtr = new int{ 54 };
	// ERROR: no modifiable lvalues!

	delete intPtr;
}


// The pointer is non-constant and can be changed, but the data is points to is constant and cannot be changed.
void npc2cd() noexcept
{
	cout << "Inside npc2cd()" << endl;

	int const * intPtr = new int{ 42 };
	cout << "\tOriginal Value : " << *intPtr << endl;

	// *intPtr = 92;
	// ERROR: must have a modifiable lvalue.

	delete intPtr;

	intPtr = new int{ 123 };
	cout << "\tNew integer entirely : " << *intPtr << endl;

	delete intPtr;
	intPtr = nullptr;
}

void noChange(double const * const d) noexcept
{
	cout << "Inside noChange(), the value of the double passed in is " << *d << endl;
}

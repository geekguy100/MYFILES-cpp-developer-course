#include <iostream>
#include "Book.h"

using namespace std;

//void printBookData(const Book & book);

int main()
{
	Book gameOfThrones("George Martin", "Game Of Thrones", "Fantasy", 864);
	Book mathBook("Jame Stewart", "Calc", "Math", 1392);
	Book cppBook("Bjarne Stroustrup", "The C++ Programming Language", "Programming", 1376);

	//printBookData(gameOfThrones);
	//printBookData(mathBook);
	//printBookData(cppBook);

	gameOfThrones.printBookDetails();
	mathBook.printBookDetails();
	cppBook.printBookDetails();

	cout << endl << endl;
	system("pause");
	return 0;
}

//void printBookData(const Book & book)
//{
//	cout << book.getTitle() << " by " << book.getAuthor() 
//		<< " has " << book.getNumPages()
//		<< " pages, and its genre is " << book.getGenre() << "."
//		<< endl;
//}
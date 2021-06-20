#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book
{
public:
	Book(std::string author, std::string title, std::string genre, int numPages);

	// Notice that we're only including our accessors, no mutators
	// since we want our Book class to be immutable.

	std::string getAuthor() const;
	std::string getTitle() const;
	std::string getGenre() const;
	int getNumPages() const;

	void printBookDetails() const;

private:
	std::string author;
	std::string title;
	std::string genre;
	int numPages;
};

#endif
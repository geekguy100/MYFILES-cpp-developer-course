#include "Book.h"
#include <iostream>

Book::Book(std::string author, std::string title, std::string genre, int numPages)
{
	this->author = author;
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}

std::string Book::getAuthor() const
{
	return this->author;
}

std::string Book::getTitle() const
{
	return this->title;
}

std::string Book::getGenre() const
{
	return this->genre;
}

int Book::getNumPages() const
{
	return this->numPages;
}

void Book::printBookDetails() const
{
	std::cout << this->title << " by " << this->author
		<< " has " << this->numPages
		<< " pages, and its genre is " << this->genre << "."
		<< std::endl;
}

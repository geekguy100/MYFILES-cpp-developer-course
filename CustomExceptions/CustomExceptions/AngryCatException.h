#ifndef ANGRYCATEXCEPTION_H
#define ANGRYCATEXCEPTION_H

#include <stdexcept>
#include <string>

class AngryCatException : public std::runtime_error
{
public:
	AngryCatException() 
		: std::runtime_error("Made kitty angry.")
	{
	}

	AngryCatException(const std::string & msg)
		: std::runtime_error(msg)
	{}
};

#endif

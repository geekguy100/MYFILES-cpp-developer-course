#ifndef DATA_STRUCTURE_EMPTY_H
#define DATA_STRUCTURE_EMPTY_H

#include <exception>

class data_structure_empty : public std::runtime_error
{
public:
	data_structure_empty(const char * what_arg)
		: std::runtime_error(what_arg)
	{}
};

#endif
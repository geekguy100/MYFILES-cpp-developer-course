#ifndef TEST_H
#define TEST_H
#include <iostream>

class Test
{
public:
	virtual void PerformTest()
	{
		std::cout << "Parent class" << std::endl;
	}
};

#endif
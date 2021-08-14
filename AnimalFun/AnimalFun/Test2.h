#ifndef TEST2_h
#define TEST2_h
#include <iostream>
#include "Test.h"

class Test2 : public Test
{
public:
	void PerformTest()
	{
		std::cout << "Child class!" << std::endl;
	}
};

#endif
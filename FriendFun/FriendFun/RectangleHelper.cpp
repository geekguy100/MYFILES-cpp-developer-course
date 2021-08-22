#include "RectangleHelper.h"
#include <iostream>

void RectangleHelper::modifyRectangle(Rectangle & rect)
{
	rect.length = 500;
	rect.width = 500;
}

void RectangleHelper::printData(const Rectangle & rect) const noexcept
{
	std::cout << "Width: " << rect.width << std::endl;
	std::cout << "Length: " << rect.length << std::endl;
}

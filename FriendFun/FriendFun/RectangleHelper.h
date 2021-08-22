#ifndef RECTANGLEHELPER_H
#define RECTANGLEHELPER_H

#include "Rectangle.h"

class RectangleHelper
{
public:
	void modifyRectangle(Rectangle & rect);
	void printData(const Rectangle & rect) const noexcept;
};

#endif
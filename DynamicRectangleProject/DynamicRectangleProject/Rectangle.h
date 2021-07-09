#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <iostream>

class Rectangle
{
public:
	Rectangle(int width, int height, std::string name);
	Rectangle();

	int getWidth() const noexcept;
	int getHeight() const noexcept;
	std::string getName() const noexcept;

	void setWidth(int width) noexcept;
	void setHeight(int height) noexcept;
	void setName(std::string name) noexcept;

	friend std::ostream& operator<<(std::ostream& os, const Rectangle& r);
private:
	int width;
	int height;
	std::string name;
};

#endif // !RECTANGLE_H

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	friend class RectangleHelper; // Granting Friendship, AKA a Forward Declaration.
	friend void changeData(Rectangle & rect);
	friend void printData(const Rectangle & rect) noexcept;

public:
	Rectangle();
	Rectangle(double length, double width);
	double getLength() const;
	double getWidth() const;
	void setLength(double length);
	void setWidth(double width);
	double area() const;
	double perimeter() const;

private:
	double length;
	double width;
};

#endif 

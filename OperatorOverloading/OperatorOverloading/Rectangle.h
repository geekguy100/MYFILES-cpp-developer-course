#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		Rectangle();
		Rectangle(double length, double width);
		double getLength() const;
		double getWidth() const;
		void setLength(double length);
		void setWidth(double width);
		double area() const;
		double perimeter() const;

		bool operator== (const Rectangle & rect) const noexcept;
		Rectangle operator+ (const Rectangle & rect) const noexcept;
		void operator= (const Rectangle & rect) noexcept;

		bool operator!= (const Rectangle & other) const noexcept;

	private:
		double length;
		double width;
};

#endif 

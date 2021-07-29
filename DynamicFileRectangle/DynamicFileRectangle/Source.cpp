#include <iostream>
#include <vector>
#include <fstream>
#include "Rectangle.h"

using namespace std;

void populateVector(vector<Rectangle*> & v, ifstream & infile) noexcept;
void printRectangleData(const vector<Rectangle*> & rectangles) noexcept;
int main()
{
	// Opening file
	ifstream infile;
	infile.open("rectangles.txt");
	if (!infile)
	{
		cout << "Could not open 'rectangles.txt'. Terminating program..." << endl;
		system("pause");
		return 1;
	}

	// Creating and populating vector
	cout << "File opened. Populating vector..." << endl;
	vector<Rectangle*> rectangles;
	populateVector(rectangles, infile);

	printRectangleData(rectangles);

	// Cleanup
	cout << "Performing cleanup..." << endl;
	infile.close();
	for (Rectangle * r : rectangles)
		delete r;

	// Clearing the vector so we don't have any dangling pointers.
	rectangles.clear();


	cout << "Done" << endl;
	cout << endl;
	system("pause");
	return 0;
}

// Populates the vector with dynamically allocated Rectangle objects.
void populateVector(vector<Rectangle*> & v, ifstream & infile) noexcept
{
	while (!infile.eof())
	{
		int width;
		int length;
		infile >> width;
		infile >> length;

		Rectangle * rect{ new Rectangle(length, width) };
		v.push_back(rect);
	}
}

// Prints the perimeters and areas of the rectangles we created.
void printRectangleData(const vector<Rectangle*> & rectangles) noexcept
{
	ofstream outfile;
	outfile.open("output.txt");

	for (int i = 0; i < rectangles.size(); ++i)
	{
		cout << "Rectangle " << i << ":" << endl;
		outfile << "Rectangle " << i << ":" << endl;

		cout << "\tPerimeter: " << rectangles[i]->perimeter() << endl;
		outfile << "\tPerimeter: " << rectangles[i]->perimeter() << endl;

		cout << "\tArea: " << rectangles[i]->area() << endl;
		outfile << "\tArea: " << rectangles[i]->area() << endl;

		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		outfile << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	}

	outfile.close();
}
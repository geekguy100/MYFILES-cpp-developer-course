#include <iostream>

using namespace std;

int main()
{
	enum Direction { UP = 22, DOWN = 15, LEFT, RIGHT, STANDING };

	Direction dir{ STANDING };

	if (dir == UP)
		cout << "UP";
	else if (dir == DOWN)
		cout << "DOWN";
	else if (dir == LEFT)
		cout << "LEFT";
	else if (dir == RIGHT)
		cout << "RIGHT";
	else if (dir == STANDING)
		cout << "STANDING";


	cout << endl;
	system("pause");
	return 0;
}
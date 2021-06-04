#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void drawBoard(char board[ROWS][COLS]);
void init(char board[ROWS][COLS]);
void takeTurn(int player);
void gameLoop();

int main()
{
	char board[ROWS][COLS];
	init(board);

	drawBoard(board);

	cout << endl << endl;
	system("pause");
	return 0;
}

// Draws the game board onto the screen.
void drawBoard(char board[ROWS][COLS])
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << board[i][j];

			// Don't draw after the last column.
			if (j < COLS - 1)
				cout << " | ";
		}


		// Don't draw after the last row.
		if (i < ROWS - 1)
			cout << endl << "----------" << endl;
	}
}

// Initializes each character of the game board to an empty character.
void init(char board[ROWS][COLS])
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			board[i][j] = '\0';
		}
	}
}

void takeTurn(int player)
{

}

void gameLoop()
{

}
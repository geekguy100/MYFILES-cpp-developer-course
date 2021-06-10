#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void drawBoard(char board[ROWS][COLS]);
void init(char board[ROWS][COLS]);
void playTurn(bool & xTurn, char board[ROWS][COLS]);
void gameLoop();

int main()
{
	gameLoop();

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

	cout << endl;
}

// Initializes each character of the game board to an empty character,
// Then draws the board onto the screen.
void init(char board[ROWS][COLS])
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			board[i][j] = '\0';
		}
	}

	drawBoard(board);
}

// Gets the player's input.
void playTurn(bool & xTurn, char board[ROWS][COLS])
{
	char playingChar;

	if (xTurn)
	{
		cout << "It is X's turn." << endl;
		playingChar = 'X';
	}
	else
	{
		cout << "It is O's turn." << endl;
		playingChar = 'O';
	}

	cout << "Please enter the row THEN the column, each from 0, 1, or 2, separated by a space." << endl;
	int row{};
	int col{};

	cin >> row;
	cin >> col;

	// TODO: Deal with invalid input.
	
	// If the spot is already occupied, notify the player
	// and keep requesting a valid input.
	while (board[row][col] != '\0')
	{
		cout << "That location is already occupied." << endl;
		cout << "Please enter the row THEN the column, each from 0, 1, or 2, separated by a space." << endl;

		cin >> row;
		cin >> col;
	}

	cout << endl << endl;

	board[row][col] = playingChar;
	xTurn = !xTurn;
}

// The core game loop. Executes all of the important game mechanics.
void gameLoop()
{
	char board[ROWS][COLS];
	bool xTurn = true;
	bool gameOver = false;

	init(board);

	while (!gameOver)
	{
		playTurn(xTurn, board);
		drawBoard(board);
	}
}
#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

void drawBoard(char board[ROWS][COLS]);
void init(char board[ROWS][COLS], char initChar = '\0');
void playTurn(bool xTurn, char board[ROWS][COLS], short xBits[], short oBits[]);
void gameLoop();
bool checkForWin(char board[ROWS][COLS], bool xTurn, bool & xWin);
void updatePlayerBits(int row, int col, short playerBits[]);

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
void init(char board[ROWS][COLS], char initChar)
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			board[i][j] = initChar;
		}
	}
}

// Gets the player's input.
void playTurn(bool xTurn, char board[ROWS][COLS], short xBits[], short oBits[])
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

	if (xTurn)
		updatePlayerBits(row, col, xBits);
	else
		updatePlayerBits(row, col, oBits);


	// Update the board with the player's character.
	board[row][col] = playingChar;
}

// Sets the last player's playerBit to 1 at the last played row and col.
void updatePlayerBits(int row, int col, short playerBits[])
{
	short pos{}; // Used to store the position of the bit; 
				 // Used to store the converted ROW-COL position to a single integer position.

	bool complete = false; // True if we have calculated our 'pos' value.

	for (int r = 0; r < ROWS; ++r)
	{
		for (int c = 0; c < COLS; ++c)
		{
			if (r == row && c == col)
			{
				complete = true;
				break;
			}

			++pos;
		}

		if (complete)
			break;
	}

	// Flip the bit to 1 in the last played position.
	playerBits[pos] = 1;
}

// The core game loop. Executes all of the important game mechanics.
void gameLoop()
{
	char board[ROWS][COLS];
	const int BOARD_AREA = ROWS * COLS;
	short xBits[BOARD_AREA]{};
	short oBits[BOARD_AREA]{};

	bool xTurn = true;
	bool xWin;
	bool gameOver = false;

	init(board);
	drawBoard(board);

	while (!gameOver)
	{
		playTurn(xTurn, board, xBits, oBits);
		drawBoard(board);
		
		if (checkForWin(board, xTurn, xWin))
			gameOver = true;

		xTurn = !xTurn;
	}

	cout << (xWin ? "X " : "O ") << " is the winner!" << endl;
}

bool checkForWin(char board[ROWS][COLS], bool xTurn, bool & xWin)
{
	return false;
}
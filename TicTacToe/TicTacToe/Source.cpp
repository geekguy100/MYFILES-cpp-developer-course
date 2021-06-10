#include <iostream>
#include <string>

using namespace std;

const int ROWS = 3;
const int COLS = 3;
const int BOARD_AREA = ROWS * COLS;
const short WINNING_POSITIONS[]
{
	0b111000000,
	0b100100100,
	0b100010001,
	0b010010010,
	0b001010100,
	0b001001001,
	0b000111000,
	0b000000111

	//488,
	//292,
	//273,
	//146,
	//84,
	//73,
	//56,
	//7
};

void drawBoard(char board[ROWS][COLS]);
void init(char board[ROWS][COLS], string & xBits, string & oBits, char initChar = '\0');
void playTurn(bool xTurn, char board[ROWS][COLS], string & xBits, string & oBits);
void gameLoop();
bool checkForWin(char board[ROWS][COLS], bool xTurn, bool & xWin, const string playerBits);
void updatePlayerBits(int row, int col, string & playerBits);

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
void init(char board[ROWS][COLS], string & xBits, string & oBits, char initChar)
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			board[i][j] = initChar;
		}
	}

	for (int i = 0; i < BOARD_AREA; ++i)
	{
		xBits += "0";
		oBits += "0";
	}
}

// Gets the player's input.
void playTurn(bool xTurn, char board[ROWS][COLS], string & xBits, string & oBits)
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
// A '1' means that the player has placed their piece at that location.
void updatePlayerBits(int row, int col, string & playerBits)
{
	size_t pos{}; // Used to store the position of the bit; 
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
	playerBits[pos] = '1';
}

// The core game loop. Executes all of the important game mechanics.
void gameLoop()
{
	char board[ROWS][COLS];
	string xBits;
	string oBits;

	bool xTurn = true;
	bool xWin = false;
	bool gameOver = false;

	init(board, xBits, oBits);
	drawBoard(board);

	while (!gameOver)
	{
		playTurn(xTurn, board, xBits, oBits);
		drawBoard(board);

		if (xTurn)
			gameOver = checkForWin(board, xTurn, xWin, xBits);
		else
			gameOver = checkForWin(board, xTurn, xWin, oBits);

		xTurn = !xTurn;
	}

	cout << (xWin ? "X " : "O ") << " is the winner!" << endl;
}

// Returns true if the current player has won.
bool checkForWin(char board[ROWS][COLS], bool xTurn, bool & xWin, const string playerBits)
{
	cout << endl << endl << playerBits << endl;
	int playerNumPos = stoi(playerBits, nullptr, 2);
	cout << playerNumPos << endl;
	bool winner = false;

	for (short winningPos : WINNING_POSITIONS)
	{
		if (playerNumPos & winningPos == winningPos)
		{
			winner = true;
			break;
		}
	}

	// If we have a winner and it was X's turn, 
	// set xWin to true.
	if (xTurn && winner)
		xWin = true;

	// Else if we have a winner, but it was not X's turn,
	// set xWin to false. Meaning O is the winner.
	// Not necessary since xWin = false by default, but I wanted this here
	// for clarity's sake.
	else if (winner)
		xWin = false;

	return winner;
}
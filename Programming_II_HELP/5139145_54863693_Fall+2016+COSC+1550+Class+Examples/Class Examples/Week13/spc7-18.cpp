// Chapter 7, Programming Challenge 18: Tic-Tac-Toe Game
#include <iostream>
using namespace std;

// Constants for the rows and columns
const int ROWS = 3;
const int COLS = 3;

// Function prototypes
void displayBoard(char [][COLS]);
void playerTurn(char [][COLS], char);
bool gameOver(char [][COLS]);
bool playerWins(char [][COLS], char);
bool playerCanWin(char [][COLS], char);
void displayWinner(char [][COLS]);

int main()
{
	// Array for the game board.
	char gameBoard[ROWS][COLS] = { '*', '*', '*',
								   '*', '*', '*',
								   '*', '*', '*' };

	do
	{
		// Display the game board.
		displayBoard(gameBoard);
      
		// Let player 1 have a turn.
		playerTurn(gameBoard, 'X');
      
		// Display the game board again.
		displayBoard(gameBoard);
      
		// If the game is not over, let
		// player 2 have a turn.
		if (!gameOver(gameBoard))
			playerTurn(gameBoard, 'O');
         
	} while (!gameOver(gameBoard));
   
	// Display the board one last time.
	displayBoard(gameBoard);
   
	// Display the winner.
	displayWinner(gameBoard);

	return 0;
}

// ********************************************************
// The displayBoard function displays the contents of     *
// the board.                                             *
// ********************************************************
void displayBoard(char board[][COLS])
{
	// Display the column headings.
	cout << "       Columns\n";
	cout << "        1 2 3\n";
   
	// Display the rows.
	for (int row = 0; row < ROWS; row++)
	{
		// Row label.
		cout << "Row " << (row + 1)<< ":  ";
      
		// Row contents.
		for (int col = 0; col < COLS; col++)
		{
			cout << board[row][col] << " ";
		}
		cout << endl;
	}
}

// ********************************************************
// The playerTurn function allows a player (X or O) to    *
// take a turn.                                           *
// ********************************************************
void playerTurn(char board[][COLS], char symbol)
{
	// The isAvailable flag is set to true when the
	// player selects a location on the board that
	// is available.
	bool isAvailable = false;
   
	int row;  // Row to place symbol
	int col;  // column to place symbol
   
	// Prompt the player to enter a location.
	cout << "Player " << symbol << "'s turn.\n";
	cout << "Enter a row and column to place an "
		 << symbol << ".\n";
   
	// Get and validate the location.
	while (!isAvailable)
	{
		// Get the row.
		cout << "Row: ";
		cin >> row;
      
		// Validate the row.
		while (row < 1 || row > ROWS)
		{
			cout << "Invalid Row!\n";
			cout << "Row: ";
			cin >> row;
		}
      
		// Get the column.
		cout << "Column: ";
		cin >> col;
   
		// Validate the column.
		while (col < 1 || col > COLS)
		{
			cout << "Invalid Column!\n";
			cout << "Column: ";
			cin >> col;
		}
      
		// Determine whether the selected
		// cell is available.
		if (board[row - 1][col - 1] == '*')
			isAvailable = true;
		else
		{
			cout << "That location is not available. "
				 << "Select another location.\n";
		}
	}
   
	// Place the player's symbol on the board
	// at the selected location.
	board[row - 1][col - 1] = symbol;
}

// ********************************************************
// The gameOver function returns true if the game         *
// is over. This is the case when either player has       *
// already won, or there is a tie.                        *
// ********************************************************
bool gameOver(char board[][COLS])
{
	bool status;	// The status flag

   // If either player has already won, game over.
   if (playerWins(board, 'X') || playerWins(board, 'O'))
      status = true;
      
   // Otherwise, if either player CAN STILL win, game
   // NOT over.
   else if (playerCanWin(board, 'X') || playerCanWin(board, 'O'))
      status = false;
   
   // Otherwise, it's a tie. Game over.
   else
      status = true;

   return status;
}

// ********************************************************
// The playerWins function accepts the game board and     *
// a player symbol (X or O) as arguments. It returns      *
// true if the player has won.                            *
// ********************************************************
bool playerWins(char board[][COLS], char symbol)
{
	// The status flag, initialized to false.
	bool status = false;

	// Check the first horizontal row.
	if (board[0][0] == symbol && board[0][1] == symbol &&
		board[0][2] == symbol)
		status = true;

	// Check the second horizontal row.
	if (board[1][0] == symbol && board[1][1] == symbol && 
		board[1][2] == symbol)
		status = true;

	// Check the third horizontal row.
	if (board[2][0] == symbol && board[2][1] == symbol && 
		board[2][2] == symbol)
		status = true;
      
	// Check the first column.
	if (board[0][0] == symbol && board[1][0] == symbol && 
		board[2][0] == symbol)
		status = true;
   
	// Check the second column.
	if (board[0][1] == symbol && board[1][1] == symbol && 
		board[2][1] == symbol)
		status = true;

	// Check the third column.
	if (board[0][2] == symbol && board[1][2] == symbol && 
		board[2][2] == symbol)
		status = true;
	
	// Check the diagonal
	if (board[0][0] == symbol && board[1][1] == symbol && 
		board[2][2] == symbol)
		status = true;
   
	// If we make it this far, the player did not win.
	return status;
}

// ********************************************************
// The playerCanWin function returns true if the          *
// player (X or O) can still win.                         *
// ********************************************************
bool playerCanWin(char board[][COLS], char symbol)
{
	// The status flag, initialized to false.
	bool status = false;	

	// Check the first horizontal row for a possibility.
	if ((board[0][0] == symbol || board[0][0] == '*') && 
		(board[0][1] == symbol || board[0][1] == '*') &&
		(board[0][2] == symbol || board[0][2] == '*'))
		status = true;

	// Check the second horizontal row for a possibility.
	if ((board[1][0] == symbol || board[1][0] == '*') && 
		(board[1][1] == symbol || board[1][1] == '*') &&
		(board[1][2] == symbol || board[1][2] == '*'))
		status = true;

	// Check the third horizontal row for a possibility.
	if ((board[2][0] == symbol || board[2][0] == '*') && 
		(board[2][1] == symbol || board[2][1] == '*') &&
		(board[2][2] == symbol || board[2][2] == '*'))
		status = true;

	// Check the first column for a possibility.
	if ((board[0][0] == symbol || board[0][0] == '*') && 
		(board[1][0] == symbol || board[1][0] == '*') &&
		(board[2][0] == symbol || board[2][0] == '*'))
		status = true;

	// Check the second column for a possibility.
	if ((board[0][1] == symbol || board[0][1] == '*') && 
		(board[1][1] == symbol || board[1][1] == '*') &&
		(board[2][1] == symbol || board[2][1] == '*'))
		status = true;

	// Check the third column for a possibility.
	if ((board[0][2] == symbol || board[0][2] == '*') && 
		(board[1][2] == symbol || board[1][2] == '*') &&
		(board[2][2] == symbol || board[2][2] == '*'))
		status = true;

	// Check the diagonal for a possibility.
	if ((board[0][0] == symbol || board[0][0] == '*') && 
		(board[1][1] == symbol || board[1][1] == '*') &&
		(board[2][2] == symbol || board[2][2] == '*'))
		status = true;

	// If we make it this far, the player cannot win.
	return status;
}

// ********************************************************
// The displayWinner function displays the winner.        *
// ********************************************************
void displayWinner(char board[][COLS])
{
	if (playerWins(board, 'X'))
		cout << "Player 1 (X) WINS!!!!!\n\n";
	else if (playerWins(board, 'O'))
		cout << "Player 2 (O) WINS!!!!!\n\n";
	else
		cout << "Game Over... it's a TIE.\n\n";
}
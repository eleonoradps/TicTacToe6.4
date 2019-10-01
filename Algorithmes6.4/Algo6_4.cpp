#include <iostream>
#include <algorithm>
#include <vector>
#include <time.h>
void GenerateMap(std::vector<int>& board)
{
	const int SizeBoard = 9;
	board.resize(SizeBoard);

	for (int i = 0; i < SizeBoard; i++) 
	{
		board[i] = ' ';
	}

	std::cout << "\t\t\t Welcome to Tic Tac Toe Game \n";
	std::cout << "\t\t\t Make your move by entering a number between 0 and 8 \n";
	std::cout << "\t\t\t 0 | 1 | 2 \n";
	std::cout << "\t\t\t -------------- \n";
	std::cout << "\t\t\t 3 | 4 | 5 \n";
	std::cout << "\t\t\t -------------- \n";
	std::cout << "\t\t\t 6 | 7 | 8 \n";

	
}

void ShowMap(char board[]) 
{
	std::cout << "\n\n";

	std::cout << "\t\t\t" << board[0] << " | " << board[1] << " | " << board[2] << "\n";
	std::cout << "\t\t\t -------------- \n";
	std::cout << "\t\t\t" << board[3] << " | " << board[4] << " | " << board[5] << "\n";
	std::cout << "\t\t\t -------------- \n";
	std::cout << "\t\t\t" << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

void SetNewPosition(char board[],int turn)
{
	int userChoice;
	std::cin >> userChoice;

	if (turn % 2 == 0) {
		if (board[userChoice] != ' ')
		{
			std::cout << "Please choose an empty case";
			SetNewPosition(board, turn);
		}
		else
		{
			board[userChoice] = 'X';
		}
	}
	else
	{
		int randomNb = 0;
		srand(static_cast<unsigned int>(time(0)));
		randomNb = rand() % 9;
		if(board[randomNb]!=' ')
		{
			SetNewPosition(board, turn);
		}
		else
		{
			board[randomNb] = 'O';
		}
	}
}

bool CheckWin(char board[])
{
	bool win = true;
	bool noWin = false;
	
	if(board[0]=='X' && board[1] =='X' && board[2]=='X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[3] == 'X' && board[5] == 'X' && board[8] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	else if (board[6] == 'X' && board[4] == 'X' && board[3] == 'X')
	{
		std::cout << "Congrats you won the game";
		return win;
	}
	//Check Computer win now
	if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[0] == 'O' && board[3] == 'O' && board[6] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[3] == 'O' && board[5] == 'O' && board[8] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}
	else if (board[6] == 'O' && board[4] == 'O' && board[3] == 'O')
	{
		std::cout << "You lost the game";
		return win;
	}

}


int main()
{
	
}



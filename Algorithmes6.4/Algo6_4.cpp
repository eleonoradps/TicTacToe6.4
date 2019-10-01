#include <iostream>
#include <algorithm>
#include <vector>

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

void SetNewPosition(char board[])
{
	int userChoice;
	std::cin >> userChoice;

	if (board[userChoice] != ' ')
	{
		std::cout << "Please choose an empty case";
		SetNewPosition(board);
	}
	else
	{
		board[userChoice] = 'X';
	}
}

void 





int main() 
{

}
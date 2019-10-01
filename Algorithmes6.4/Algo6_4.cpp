#include <iostream>
#include <algorithm>
#include <vector>

void GenerateMap()
{
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



int main() 
{

}
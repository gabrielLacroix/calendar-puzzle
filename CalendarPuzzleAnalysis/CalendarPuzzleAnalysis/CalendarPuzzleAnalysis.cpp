// CalendarPuzzleAnalysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<format>
#include "Piece.h"
#include "Solver.cpp"

std::vector<Piece> definePieces();
std::vector<std::vector<char>> defineGrid();
void printGrid(const std::vector<std::vector<char>>);

int main(int argc, char* argv[])
{
	//if (argc != 4)
	//	return -1;

	//int month = (int)argv[1];
	//int day = (int)argv[2];
	//int weekDay = (int)argv[3];

	std::vector<std::vector<char>> grid = defineGrid();

	std::vector<Piece> pieces = definePieces();

	printGrid(grid);

	addPiece(grid, pieces[0], 0, 0);
	std::cout << std::endl;
	printGrid(grid);
}

std::vector<std::vector<char>> defineGrid() {
	std::vector<std::vector<char>> grid{
		{0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 0},
		{1, 1, 0, 0, 0, 0, 0}
	};
	return grid;
}

std::vector<Piece> definePieces() {
	std::vector < std::vector<char>> p1 = {
		{1, 0, 0},
		{1, 0, 0},
		{1, 1, 1}
	};
	std::vector < std::vector<char>> p2 = {
		{1, 1, 1},
		{0, 1, 0},
		{0, 1, 0}
	};
	std::vector < std::vector<char>> p3 = {
		{0, 1, 1},
		{0, 1, 0},
		{1, 1, 0}
	};
	std::vector < std::vector<char>> p4 = {
		{1, 1},
		{1, 0},
		{1, 1}
	};
	std::vector< std::vector<char>>p5 = {
		{1, 0},
		{1, 1},
		{1, 1}
	};
	std::vector<std::vector<char>> p6 = {
		{1, 0},
		{1, 1},
		{0, 1}
	};
	std::vector < std::vector<char>> p7 = {
		{0, 1},
		{0, 1},
		{1, 1}
	};
	std::vector < std::vector<char>> p8 = {
		{1},
		{1},
		{1},
	{1	  }
	};
	std::vector < std::vector<char>> p9 = {
		{1, 1},
		{1, 0},
		{1, 0},
		{1, 0}
	};
	std::vector < std::vector<char>> p10 = {
		{0, 1},
		{1, 1},
		{1, 0},
		{1, 0}
	};

	std::vector<Piece> pieces = {
		Piece(3, 3, p1),
		Piece(3, 3, p2),
		Piece(3, 3, p3),
		Piece(3, 2, p4),
		Piece(3, 2, p5),
		Piece(3, 2, p6),
		Piece(3, 2, p7),
		Piece(4, 1, p8),
		Piece(4, 2, p9),
		Piece(4, 2, p10),
	};
	return pieces;
}

void
printGrid(const std::vector<std::vector<char>> grid) {
	int width = grid.size();
	int height = grid.at(0).size();
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j)
		{
			std::string character = grid.at(j).at(i) == 0 ? "0" : "1";
			std::cout << character << " ";
		}
		std::cout << std::endl;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

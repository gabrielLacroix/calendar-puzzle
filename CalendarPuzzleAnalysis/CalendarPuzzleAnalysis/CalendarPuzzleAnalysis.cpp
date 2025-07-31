// CalendarPuzzleAnalysis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<format>
#include "Piece.h"

std::vector<Piece> definePieces();
std::vector<char> defineGrid();

int main(int argc, char* argv[])
{
	//if (argc != 4)
	//	return -1;

	//int month = (int)argv[1];
	//int day = (int)argv[2];
	//int weekDay = (int)argv[3];

	std::vector<char> grid = defineGrid();

	std::vector<Piece> pieces = definePieces();

	enum { N = 10 };
	
	for (int i = 0; i < N; ++i)
	{
		std::cout << std::format("Piece {}", i) << std::endl;
		pieces[i].print();
		std::cout << std::endl;
		pieces[i].rotate().print();
		std::cout << std::endl;
		pieces[i].rotate().rotate().print();
		std::cout << std::endl;
		pieces[i].rotate().rotate().rotate().print();
		std::cout << std::endl << std::endl;
	}
}

std::vector<char> defineGrid() {
	std::vector<char> grid{
		0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 0, 0, 0, 0, 1,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0,
		1, 1, 1, 1, 0, 0, 0, 0
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


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

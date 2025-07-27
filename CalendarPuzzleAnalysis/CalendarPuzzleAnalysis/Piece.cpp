#include <vector>
#include<cstddef>
#include<iostream>
#include "Piece.h"

size_t
Piece::getWidth()
{
	return width;
}

size_t
Piece::getHeight()
{
	return heigth;
}

Piece::Piece(std::size_t p_width, std::size_t p_height, std::vector<std::vector<char>> p_grid) {
	grid = p_grid;
	width = p_width;
	heigth = p_height;
}

Piece::~Piece() {
	grid.clear();
	width = 0;
	heigth = 0;
}

Piece
Piece::rotate() {
	std::vector<std::vector <char>> rotated;

	for (int i = width - 1; i > 0; --i) {
		std::vector<char> row;
		rotated.push_back(row);

		for (int j = 0; j < heigth; ++j) {
			row.push_back(grid.at(j).at(i));
		}
	}
	
	return Piece(heigth, width, rotated);
}

Piece
Piece::flip() {
	std::vector<std::vector <char>> flipped;

	for (int i = width; i > 0; --i) {
		flipped.push_back(grid.at(i));
	}
	return Piece(width, heigth, flipped);
}

void
Piece::print() {
	for (int i = 0; i < heigth; ++i) {

		for (int j = 0; j < width; ++j)
		{
			std::cout << grid.at(j).at(i) << " ";
		}
		std::cout << std::endl;
	}
}
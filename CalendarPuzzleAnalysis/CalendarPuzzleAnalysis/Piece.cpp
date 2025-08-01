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
	return height;
}

Piece::Piece(std::size_t p_width, std::size_t p_height, std::vector<std::vector<char>> p_grid) {
	grid = p_grid;
	width = p_width;
	height = p_height;
}

Piece::~Piece() {
	grid.clear();
	width = 0;
	height = 0;
}

Piece
Piece::rotate() {
	std::vector<std::vector <char>> rotated;

	for (int i = height - 1; i >= 0; --i) {
		std::vector<char> row;

		for (int j = 0; j < width; ++j) {
			row.push_back(grid.at(j).at(i));
		}
		rotated.push_back(row);
	}
	
	return Piece(height, width, rotated);
}

Piece
Piece::flip() {
	std::vector<std::vector <char>> flipped;

	for (int i = width - 1; i >= 0; --i) {
		flipped.push_back(grid.at(i));
	}
	return Piece(width, height, flipped);
}

char
Piece::get(int x, int y) {
	return grid.at(x).at(y);
}

void
Piece::print() {
	for (int i = 0; i < height; ++i) {
		for (int j = 0; j < width; ++j)
		{
			std::string character = grid.at(j).at(i) == 0 ? " " : "#";
			std::cout << character << " ";
		}
		std::cout << std::endl;
	}
}
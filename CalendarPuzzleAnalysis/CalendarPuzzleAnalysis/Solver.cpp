#include <iostream>
#include <vector>
#include "Piece.h"

static void solve(std::vector<std::vector<char>>& grid, std::vector<Piece>& pieces) {
	std::cout << " Solving! ";

	size_t gridWidth = grid.size();
	size_t gridHeight = grid.at(0).size();


	for (int x = 0; x < gridWidth; ++x) {
		for (int y = 0; y < gridHeight; ++y) {
			


		}
	}
}

static bool addPiece(std::vector<std::vector<char>>& grid, Piece& piece, int orig_x, int orig_y) {
	for (int x = 0; x < piece.getWidth(); ++x) {
		for (int y = 0; y < piece.getHeight(); ++y) {
			char currentGridValue = grid.at(orig_x + x).at(orig_y + y);
			char currentPieceValue = piece.get(x, y);
			char newValue = currentGridValue + currentPieceValue;

			if (newValue > 1)
				return false;

			grid.at(orig_x + x).at(orig_y + y) = newValue;
		}
	}

	return true;
}

static std::vector<Piece> getAllOrientations(Piece piece) {
	Piece rot1 = piece.rotate();
	Piece rot2 = rot1.rotate();
	Piece rot3 = rot2.rotate();
	
	Piece flip = piece.flip();
	Piece flip1 = rot1.flip();
	Piece flip2 = rot2.flip();
	Piece flip3 = rot3.flip();

	return std::vector<Piece> {
		piece,
		rot1,
		rot2,
		rot3,
		flip,
		flip1,
		flip2,
		flip3
	};
}
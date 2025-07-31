#pragma once

#include <vector>
#include<cstddef>
#include<iostream>
#include<string>

class Piece
{

	std::vector<std::vector<char>> grid;
	std::size_t width;
	std::size_t heigth;

public:
	std::size_t getWidth();
	std::size_t getHeight();

	Piece(std::size_t, std::size_t, std::vector<std::vector<char>>);

	Piece rotate();
	Piece flip();
	
	char get(int x, int y);

	void print();

	~Piece();
};


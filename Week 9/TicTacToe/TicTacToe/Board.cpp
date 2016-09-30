//
//  Board.cpp
//  TicTacToe
//
//  Created by Alston Godbolt on 2/24/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//

#include "Board.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

Board::Board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            boardArray[i][j] = NULL;
        }
    }
}
bool Board::makeMove(int x, int y, <#string#>)
/*
 class Board //represents a tic-tac-toe board
 {
 private:
 int boardArray[3][3]; //store locations of the players moves
 public:
 
 bool makeMove(int, int, string); //takes x and y coordinates of the move and which players turn as parameters
 int gameState(); //returns one of the four enum values
 void print(); //prints out the current board to the screen
 
 };
*/
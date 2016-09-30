//
//  Board.hpp
//  TicTacToe
//
//  Created by Alston Godbolt on 2/24/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
enum values{X_WON, O_WON, DRAW, UNFINISHED};

class Board //represents a tic-tac-toe board
{
private:
    int boardArray[3][3]; //store locations of the players moves

public:
    Board(); //default constructor initializes the array tp empty
    bool makeMove(int, int, string); //takes x and y coordinates of the move and which players turn as parameters
    int gameState(); //returns one of the four enum values
    void print(); //prints out the current board to the screen
    
};

#endif /* Board_hpp */

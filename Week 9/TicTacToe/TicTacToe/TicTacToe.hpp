//
//  TicTacToe.hpp
//  TicTacToe
//
//  Created by Alston Godbolt on 2/24/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//

#ifndef TicTacToe_hpp
#define TicTacToe_hpp
#include "Board.hpp"
#include <stdio.h>
#include <iostream>
using namespace std;

class TicTacToe //allows two people to play a game
{
private:
    Board board; //board object
    string X;
    string O;
public:
    TicTacToe(char); //specifies whether 'x' or 'o' should have the first move
    void play(); //starts the game, keeps looping asking the correct player for thier move and sending to board until a win or draw
};

#endif /* TicTacToe_hpp */

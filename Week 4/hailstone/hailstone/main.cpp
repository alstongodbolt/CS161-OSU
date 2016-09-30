/***************************************************
 ** Author: Alston Godbolt
 ** Date: 
 ** Desccription: This program is a function that takes an int
 ** and returns the nummber of steps it takes to reach 1
 ****************************************************/

#include <iostream>
using namespace std;
int hailstone(int); //function prototype

int main()
{
    int number;
    
    cout << "Enter number" << endl;
    cin >> number;
    
    
    int answer = hailstone(number);
    
    cout << answer << endl;
    
    return 0;
}

/********************************************************************************
 ** Description: This function takes an int an an arguement, then checks to see
 ** if it is even or odd. Then it returns an int for the number of times the loop 
 ** iterated to get to one
 ********************************************************************************/
int hailstone(int stone)
{
    
    int i; //increment, also returned to the main function
    while (stone != 1) //while statement to continue the loop until the number 1 is reached
    {
        if (stone % 2 == 0) //if statement to see if number is even
        {
            stone = stone / 2;
        }
        else //else statement if number is odd
        {
            stone = (stone * 3) + 1;
        }
        i++;
    }
    return i;
}

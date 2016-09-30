/****************************************
 ** Author: Alston Godbolt
 ** Date: 1/4/2016
 ** Assignment: program asks user for int cents and outputs how many of each coin would represent that amount with the fewest total number of coints
 ****************************************/

#include <iostream>
using namespace std;

int main()
{
    int cents; //user inputted number
    cout << "Please enter an amount in cents less than a dollar." << endl; //displayed to screen
    cin >> cents;
    cout << "Your change will be:" << endl;
    int quarters = cents / 25;
    cout << "Q: " << quarters << endl;
    cents = cents - (quarters * 25);
    int dime = cents / 10;
    cout << "D: " << dime << endl;
    cents = cents - (dime * 10);
    int nickel = cents / 5;
    cout << "N: " << nickel << endl;
    int penny = cents % 5;
    cout << "P: " << penny << endl;
    
    return 0;
}

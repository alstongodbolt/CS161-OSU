/********************************************
 ** Author: Alston Godbolt
 ** Date: 1/4/2016
 ** Assignment: asks the user to enter five numbers
 ** then averages those numbers
 *******************************************/

#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5; //variables for user imput
    
    cout << "Please enter five numbers" << endl; //print to screen
    
    cin >> num1 >> num2 >> num3 >> num4 >> num5; //user imput numbers
    
    const int total = 5; // total numbers to find average
    
    double average = (num1 + num2 + num3 + num4 + num5) / total; // used to calcualte average
    
    cout << "The average of those numbers is:" << endl; //display to screen
    cout << average << endl;
    
    return 0;
}

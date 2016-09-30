/***************************************************
 ** Author: Alston Godbolt
 ** Date:
 ** Description: This program asks the user for a number of
 integers, then determines the min and max 
 ****************************************************/

#include <iostream>
using namespace std;

int main() {
    int number; //user inputed number
    int min;
    int max;
    int test;
    
    cout << "How many integers would you like to enter?" << endl;
    cin >> number;
    
    cout << "Please enter " << number << " integers." << endl;
    
    int integers;
    
    for (int i = 0; i < number; i++)
    {
        cin >> integers;
        if (i == 0)
        {
            max = min = integers;
        }
        
        if (integers > max)
        {
            max = integers;
        }
        if (integers < min)
        {
            min = integers;
        }
    }
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
    
    return 0;
}



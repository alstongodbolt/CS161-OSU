/*******************************************************
 ** Author: Alston Godbolt
 ** Date: 2/15/16
 ** Description: This function accepts an array on ints
 ** then returns a vector of mode(s)
 ******************************************************/

#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
#include <stdio.h>

vector<int> findMode(int [], int);
int main()
{
    const int testnumbers = 6;
    int testarray[testnumbers];
    
    cout << "Please enter " << testnumbers << " numbers." << endl;
    for (int i = 0; i < testnumbers; i++)
    {
        cin >> testarray[i];
    }
    sort(testarray, testarray + testnumbers);
        /*cout << "The " << testnumbers << " you entered are: ";
    for (int a = 0; a < testnumbers; a++)
    {
        cout << testarray[a] << "  ";
    }
    cout << endl;*/
    return 0;
}
/********************************************************
** Description: function accepts an array of ints and an 
** additional int and returns a vector of modes
********************************************************/
vector<int> findMode(int arraymode[], int size)
{
    vector<int> findMode; //store mode(s)
    int highest = 0; //frequence minder
    int counter = 0;
    
    sort(arraymode, arraymode + size); //used to sort ints
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arraymode[i] == arraymode[j])
            {
                counter++;
            }
        } //inner
        if (counter > highest)
        {
            highest = counter;
            counter = 0;
        }
    } //outer
    
    
    
    return findMode;
}
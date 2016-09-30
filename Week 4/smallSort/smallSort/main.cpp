/*****************************************************
 **Author: Alston Godbolt
 ** Date:
 ** Description: function that takes three int arguments by reference 
 ** and sorts values into ascending order
 ****************************************************/

#include <iostream>
using namespace std;

void smallSort(int&, int&, int&); //function prototype

int main()
{
    int a,b,c;
    
    cout << "Enter in three integers" << endl;
    cin >> a >> b >> c;
    
    smallSort(a, b, c);
    
    cout << a << "    " << b << "    " << c << endl;

    return 0;
}

/******************************************************
 **Description: function that accepts 3 ints by reference 
 ** then sorts into ascending order
 *******************************************************/

void smallSort(int &a, int &b, int &c) //function header
{
    int temp;
    
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (b > c)
    {
        temp = c;
        c = b;
        b = temp;
    }
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    
}

/*****************************************
 ** Author: Alston Godbolt
 ** Date: 1/4/2016
 ** Assignment: program converts Celsius temperatures to Fahrenheit temperatures
 *****************************************/

#include <iostream>
using namespace std;

int main()
{
    double celsius; //user inputed number to be converted
    cout << "Please enter a Celsius temperature" << endl; //dispalyed to screen
    
    cin >> celsius; //user inputed number to be converted
    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    
    cout << "The equivalent Fahrenheit temparature is:" << endl; //dispalyed to screen
    
    cout << fahrenheit << endl; //displayed to screen
    
    
    return 0;
}

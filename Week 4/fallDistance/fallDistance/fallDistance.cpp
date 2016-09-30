/**********************************************
 ** Author: Alston Godbolt
 ** Date:
 ** Description: function that calcuates the distance and object
 ** falls due to gravity
 **********************************************/
 

#include <iostream>
#include <cmath>
using namespace std;

double fallDistance(double); //function prototype
int main()
{
    double time;
    cout << "Enter time" << endl;
    cin >> time;
    
    double answer = fallDistance(time);
    
    cout << answer << endl;
    
    
    return 0;
}
/**********************************************
 ** Description: funtion takes an falling time as an
 ** argument, then returns the distance in meters that an object 
 ** has fallen
 ***********************************************/
double fallDistance(double time) //funtion header, time is the arguement from main
{
    const double gravity = 9.8;
    time = pow(time, 2.0);
    double distance = (1.0 / 2) * gravity * time; //used to calulate fall distance
    return distance; //returned to main
}

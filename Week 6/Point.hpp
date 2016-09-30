/**************************************
 ** Author: Alston Godbolt
 ** Date: 2/8/16
 ** Description: class that takes two doubles and calcualtes the distance from one point to another
 **************************************/

#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
#include <math.h>
class Point
{
private:
    double xCoord; //memeber variables
    double yCoord;
public:
    Point(); //default constructor
    Point(double, double); //constructor with parameters
    void setXCoord(double); //mutator
    double getXCoord(); //accessor
    void setYCoord(double); //mutator
    double getYCoord(); //accessor
    double distanceTo(const Point&); //calcuates the distance between two points
};
#endif /* Point_hpp */

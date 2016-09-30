/**************************************
 ** Author: Alston Godbolt
 ** Date: 2/8/16
 ** Description: class that takes two doubles and calcualtes the distance from one point to another
 **************************************/

#include "Point.hpp"
#include <iostream>
using namespace std;
#include <math.h>
/************************************
 ** Description: default constructor 
 ** initializes coordinates to 0
 *************************************/
Point::Point()
{
    xCoord = 0.0;
    yCoord = 0.0;
}
/**************************************
 ** Description: constructor that takes two
 ** doubles as parameters and passes them
 ** to set methods
 **************************************/
Point::Point(double sxc, double syc)
{
    setXCoord(sxc);
    setYCoord(syc);
}
/**************************************
 ** Description: modifies the x coordinate
 ** mutator
 **************************************/
void Point::setXCoord(double xc)
{
    xCoord = xc;
}
/****************************************
 ** Description: uses, but does not modify
 ** the x coordinate
 ** accessor
 ****************************************/
double Point::getXCoord()
{
    return xCoord;
}
/*****************************************
 ** Description: modifies the y coordnate
 ** mutator
 ****************************************/
void Point::setYCoord(double yc)
{
    yCoord = yc;
}
/****************************************
 ** Description: uses, but does not modify
 ** the y coordinate
 ** accessor
 ****************************************/
double Point::getYCoord()
{
    return yCoord;
}
/****************************************
 ** Description: using a constant reference
 ** this function calcuates the distance between
 ** two points, and returns the distance
 ****************************************/
double Point::distanceTo(const Point &pt)
{
    double distance;
    
    double x = xCoord - pt.xCoord;
    double y = yCoord - pt.yCoord;
    x = pow(x, 2.0);
    y = pow(y, 2.0);
    distance = sqrt(x + y);
    
    return distance;
}
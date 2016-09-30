/******************************************************
 ** Author: Alston Godbolt
 ** Date: 1/28/2016
 ** Description: This program contains a class called box
 ** that calculates the value and surface Area of height,
 ** width, and length. THis program uses set and get methods 
 ** and two constructors
 ******************************************************/

#ifndef Box_hpp
#define Box_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Box
{
private:
    double height;
    double width;
    double length;
public:
    Box();
    Box(double, double, double);
    void setHeight(double);
    void setWidth(double);
    void setLength(double);
    double getVolume();
    double getSurfaceArea();
};

#endif /* Box_hpp */

//
//  Box.cpp
//  Box
//
//  Created by Alston Godbolt on 1/28/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//

#include "Box.hpp"
#include <iostream>
using namespace std;
/********************************************
 **Description: Default constructor that uses set methods to initializes each 
 ** field to 1.
 *********************************************/
Box::Box()
{
    setHeight(1.0);
    setWidth(1.0);
    setLength(1.0);
}
/************************************************
 ** Description: three parameter constructor that takes
 ** three doubles and passes them to the set methods
 ** to initialize the fields of the Box
 *************************************************/
Box::Box(double h, double w, double l)
{
    setLength(l);
    setWidth(w);
    setHeight(h);
}
/******************************************************
 **Description: mutator that modifies the contents of height
 *******************************************************/
void Box::setHeight(double sh)
{
    height = sh;
}
/*********************************************************
 ** Description: mutator that modifies the contents of width
 *********************************************************/
void Box::setWidth(double sw)
{
    width = sw;
}
/************************************************************
 **Description: mutator that modifies the contents of length
 ************************************************************/
void Box::setLength(double sl)
{
    length = sl;
}
/************************************************************
 ** Description: function that calculates the volume of the three
 ** class variables
 *************************************************************/
double Box::getVolume()
{
    return length * width * height;
}
/***************************************************************
 ** Description: function that calcuates the surface area of the three 
 ** class variables
 *****************************************************************/
double Box::getSurfaceArea()
{
    return (((height * width) * 2) + ((height * length) * 2) + ((width * length) * 2));
}
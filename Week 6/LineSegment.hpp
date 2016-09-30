/******************************************
 ** Author: Alston Godbolt
 ** Date: 2/8/2016
 ** Description: accepts get and set methods from
 ** Point class to calcuate the length and
 ** slope of two points
 *******************************************/

#ifndef LineSegment_hpp
#define LineSegment_hpp

#include <stdio.h>
#include "Point.hpp"
#include <iostream>
using namespace std;
#include <math.h>
class LineSegment
{
private:
    Point end1; //member variables
    Point end2;
public:
    LineSegment(Point, Point); //constructor with parameters
    void setEnd1(Point); //mutator
    Point getEnd1(); //accessor
    void setEnd2(Point); //mutator
    Point getEnd2(); //accessor
    double length(); //returns the distanceTo function
    double slope(); //calculates the slope of the LineSegment
    
};
#endif /* LineSegment_hpp */

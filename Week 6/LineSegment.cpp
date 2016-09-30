/******************************************
 ** Author: Alston Godbolt
 ** Date: 2/8/2016
 ** Description: accepts get and set methods from 
 ** Point class to calcuate the length and 
 ** slope of two points
 *******************************************/
#include "LineSegment.hpp"
#include "Point.hpp"
#include <iostream>
using namespace std;
/*******************************************
 ** Description: constructor that takes two
 ** Point parameters and passes to set methods
 *********************************************/
LineSegment::LineSegment(Point e1, Point e2)
{
    setEnd1(e1);
    setEnd2(e2);
}
/**************************************
 ** Description: modifies Point end1
 ** mutator
 **************************************/
void LineSegment::setEnd1(Point oneE)
{
    end1 = oneE;
}
/****************************************
 ** Description: uses, but does not modify
 ** end1
 ** accessor
 ****************************************/
Point LineSegment::getEnd1()
{
    return end1;
}
/**************************************
 ** Description: modifies Point end2
 ** mutator
 **************************************/
void LineSegment::setEnd2(Point twoE)
{
    end2 = twoE;
}
/****************************************
 ** Description: uses, but does not modify
 ** end2
 ** accessor
 ****************************************/
Point LineSegment::getEnd2()
{
    return end2;
}
/****************************************
 ** Description: returns the length of the
 ** LineSegement by using the distanceTo method
 **on its end points
 ****************************************/
double LineSegment::length()
{
    return end1.distanceTo(end2);
}
/****************************************
 ** Description: returns the slope of the
 ** LineSegment
 ****************************************/
double LineSegment::slope()
{
    return (end1.getYCoord() - end2.getYCoord()) / (end1.getXCoord() - end2.getXCoord());
}
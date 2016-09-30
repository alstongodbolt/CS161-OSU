//
//  main.cpp
//  Assgn6
//
//  Created by Alston Godbolt on 2/2/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//

#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;
#include <math.h>

int main() {
    Point p1(0, 0);
    Point p2(1.5, 0);
    
    double dist = p1.distanceTo(p2);
    
    cout << dist << endl;
    LineSegment ls1(p1, p2);
    double length = ls1.length();
    double slope = ls1.slope();
    cout << length << endl;
    cout << slope << endl;
    
    return 0;
}

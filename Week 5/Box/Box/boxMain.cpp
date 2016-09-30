//
//  main.cpp
//  Box
//
//  Created by Alston Godbolt on 1/28/16.
//  Copyright © 2016 Alston Godbolt. All rights reserved.
//


#include "Box.hpp"
#include <iostream>
using namespace std;
int main() {
    Box box;
    box.setHeight(4);
    box.setLength(4);
    box.setWidth(4);
    
    cout << box.getSurfaceArea() << endl;
    cout << box.getVolume() << endl;
    return 0;
}

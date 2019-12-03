//
//  circle.cpp
//  This exercise receives input from the user and calculates
//  the area and circumference of a circle
//
//  Created by Brittny Desir on 11/19/19.
//  Copyright © 2019 Brittny Desir. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

  int radius;
  float pi = 3.14;

  cout << "Input the radius of the circle: " << endl;
  cin >> radius;

  cout << "The area of the circle is: " << pi * radius * radius << endl;
  cout << "The circumfrence of the circle is: " << 2 * pi * radius << endl;

  return 0;
}

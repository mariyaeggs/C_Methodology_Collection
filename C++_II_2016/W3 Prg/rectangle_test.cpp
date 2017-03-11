//Name: Mariya Eggensperger
// Write a program that defines a class named Rectangle.
// Dev C++

//rectangle_test.cpp
//Tests all functions of the Rectangle Class

#include <iostream>
#include "rectangle.h"
using namespace std; 

int main() {

Rectangle shape; 

float userLength, userWidth; 

cout << "Input rectangle length: "; 
cin >> userLength; 
cout << endl;
cout << "Input rectangle width: "; 
cin >> userWidth; 
cout << endl;

//test functions
shape.setLength(userLength); 
shape.setWidth(userWidth); 

//Print to screen
	cout << "------------Rectangle Calculations-------------\n" << endl; 
	cout << "Rectangle Perimeter: " << shape.rectanglePerimeter() << "\n" << endl;
	cout << "Rectangle Area: " << shape.rectangleArea() << "\n" << endl;
	cout << "So now tell us. . . what are you building?" << endl;
  
  	return 0;
	  
}




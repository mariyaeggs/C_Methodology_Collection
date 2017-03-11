//Mariya Eggensperger
// Define a rectangle class 
// Dev C++ 

#include <iostream>
#include <iomanip>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H
 
class Rectangle {
	private: 
		float length, width, perimeter, area; 
		
	public: 
	Rectangle() { 
		length = 0; 
		width = 0; 
		perimeter = 0; 
		area= 0;
		void setLength(float); 
		void setWidth(float); 
		float rectanglePerimeter(); 
		float rectangleArea(); 
}; 
void setLength(float userLength) { // sets rectangle length
	length = userLength; 
}
float rectanglePerimeter(){ //calculates rectangle perimeter 
	return (perimeter = 2*(length + width)); 
}
void setWidth(float userWidth) { //sets rectangle width
	width = userWidth; 
}
float rectangleArea(){ //calculates rectangle area
	return (area = (length*width)); 
	}
};
#endif
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



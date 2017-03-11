//Mariya Eggensperger
// Date: 3/7/2016
// Dev C++ 5.11
// Week 4: 1. Write a program that defines a Rectangle class. 
//The user should be allowed to add two Rectangles
//to create a 3rd Rectangle, 
//should be able to compare two Rectangles to determine which has a larger area, and 
//can compare two Rectangles to see if they are the exact same shape and size. 

#include <iostream>
#include <iomanip>
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H
 
class Rectangle {
	private: 
		//rectangle one
		float length, width, perimeter, area; 
		//rectangle two
		float lengthTwo, widthTwo, perimeterTwo, areaTwo; 
		//rectangle three 
		float lengthThree, widthThree, perimeterThree, areaThree; 
		
	public: 
	Rectangle() { 
	// rectangle one 
		length = 0; 
		width = 0; 
		perimeter = 0; 
		area= 0;
		void setLength(float); 
		void setWidth(float); 
		float rectanglePerimeter(); 
		float rectangleArea(); 
		void show();
		
	//rectangle two
		lengthTwo =0; 
		widthTwo= 0; 
		perimeterTwo = 0; 
		areaTwo= 0; 
		void setLengthTwo(float); 
		void setWidthTwo(float); 
		float rectanglePerimeterTwo(); 
		float rectangleAreaTwo(); 
		void show(); 
		
		//rectangle three
		length = 0; 
		width = 0; 
		perimeter = 0; 
		area= 0;
		void setLengthThree(float); 
		void setWidthThree(float); 
		float rectanglePerimeterThree(); 
		float rectangleAreaThree(); 
		void show();
		
		//checks if rectangle1 & rectangle2 & rectangle3 have equivalent area,perimeter
		int sameArea(Rectangle);
}; 
//rectangle one
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
// rectangle two
void setLengthTwo(float userLengthTwo) { // sets rectangle length
	lengthTwo = userLengthTwo; 
}
float rectanglePerimeterTwo(){ //calculates rectangle perimeter 
	return (perimeterTwo = 2*(lengthTwo + widthTwo)); 
}
void setWidthTwo(float userWidthTwo) { //sets rectangle width
	widthTwo = userWidthTwo; 
}
float rectangleAreaTwo(){ //calculates rectangle area
	return (areaTwo = (lengthTwo*widthTwo)); 
	}
//rectangle three 
void setLengthThree(float userLengthThree) { // sets rectangle length
	lengthThree = userLengthThree; 
}
float rectanglePerimeterThree(){ //calculates rectangle perimeter 
	return (perimeterThree = 2*(lengthThree + widthThree)); 
}
void setWidthThree(float userWidthThree) { //sets rectangle width
	widthThree = userWidthThree; 
}
float rectangleAreaThree(){ //calculates rectangle area
	return (areaThree = (lengthThree*widthThree)); 
	}
};
#endif
int main() {

Rectangle shape1; // rectangle one
Rectangle shape2; // rectangle two
Rectangle shape3;  //rectangle three

//rectangle one
float userLength, userWidth;
//rectangle two
float userLengthTwo, userWidthTwo;  
//rectangle three
int userLengthThree=(userLength+userLengthTwo);  
int userWidthThree = (userWidth+userWidthTwo); 

//rectangle one
cout << "Input rectangle(1) length: "; 
cin >> userLength; 
cout << endl;
cout << "Input rectangle(1) width: "; 
cin >> userWidth; 
cout << endl;

//rectangle two
cout << "Input rectangle(2) length: "; 
cin >> userLengthTwo; 
cout << endl;
cout << "Input rectangle(2) width: "; 
cin >> userWidthTwo; 
cout << endl;

//rectangle three
cout << "\nThe length(s) and width(s) of Rectangle(1) and Rectangle(2) are added to form Rectangle(3)\n" << endl; 
cout << "Rectangle(3) length: " << (userLength+userLengthTwo) << "\n";   
cout << endl;
cout << "Rectangle(3) width: " << (userWidth+userWidthTwo) <<"\n"; 
cout << endl;

//test functions for rectangle one
shape1.setLength(userLength); 
shape1.setWidth(userWidth); 

// test functions for rectangle two
shape2.setLengthTwo(userLengthTwo); 
shape2.setWidthTwo(userWidthTwo); 

//test functions for rectangle three
userLengthThree= (userLength+userLengthTwo); 
shape3.setLengthThree(userLengthThree);
userWidthThree = (userWidth+userWidthTwo);  
shape3.setWidthThree(userWidthThree); 

//Print to screen
	//rectangle one
	cout << "------------Rectangle Calculations-------------\n" << endl; 
	cout << "Rectangle(1) Perimeter: " << shape1.rectanglePerimeter() << "\n" << endl;
	cout << "Rectangle(1) Area: " << shape1.rectangleArea() << "\n" << endl;
	
	//rectangle two
	cout << "Rectangle(2) Perimeter: " << shape2.rectanglePerimeterTwo() << "\n" << endl;
	cout << "Rectangle(2) Area: " << shape2.rectangleAreaTwo() << "\n" << endl;
	
	//rectangle three
	cout << "Rectangle(3) Perimeter: " << shape3.rectanglePerimeterThree() << "\n" << endl;
	cout << "Rectangle(3) Area: " << shape3.rectangleAreaThree() << "\n" << endl;
	
// check for equality
	cout << "------------Rectangle(1) & Rectangle(2)-------------\n" << endl;
	if (shape1.rectanglePerimeter() == shape2.rectanglePerimeterTwo()){ 
		cout << "Same Perimeter" << "\n" << endl; 
	} if (shape1.rectanglePerimeter() != shape2.rectanglePerimeterTwo()) {
		cout << "Different Perimeters" << "\n" << endl;
	} if (shape1.rectangleArea()==shape2.rectangleAreaTwo()){
		cout << "Same area" << "\n" << endl;}
	if (shape1.rectangleArea()!=shape2.rectangleAreaTwo()) {
		cout << "Different Area" << "\n" << endl;
	
	} cout << "------------Rectangle(2) & Rectangle(3)-------------\n" << endl; 
	if (shape2.rectanglePerimeterTwo() == shape3.rectanglePerimeterThree()) {
		cout << "Same perimeter" << "\n" << endl; }
	if (shape2.rectanglePerimeterTwo() != shape3.rectanglePerimeterThree()) {
		cout << "Different perimeter" << "\n" << endl; }
	if (shape2.rectangleAreaTwo() == shape3.rectangleAreaThree()){
		cout << "Same area" << "\n" << endl; }
	if (shape2.rectangleAreaTwo() != shape3.rectangleAreaThree()){
		cout << "Different Area" << "\n" << endl;  
	
	} cout << "------------Rectangle(1) & Rectangle(3)-------------\n" << endl; 
	if (shape1.rectanglePerimeter() == shape3.rectanglePerimeterThree()) {
		cout << "Same perimeter" << "\n" << endl; }
	if (shape1.rectanglePerimeter() != shape3.rectanglePerimeterThree()) {
		cout << "Different perimeter" << "\n" << endl; }
	if (shape1.rectangleArea() == shape3.rectangleAreaThree()){
		cout << "Same area" << "\n" << endl; }
	if (shape1.rectangleArea() != shape3.rectangleAreaThree()){
		cout << "Different Area" << "\n" << endl; } 	


return 0;
}






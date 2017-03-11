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
		
		//checks if rectangle1 & rectangle2 have equivalent area,perimeter
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
////checks area and perimeter of both rectangles for equivalence
//int sameArea(Rectangle secondRectangle)
//{
//	float areaFirstRectangle = length * width;
//	float areas = secondRectangle.lengthTwo * secondRectangle.widthTwo;
//	if (areaFirstRectangle == areas)
//		return 1;
//	return 0;
//}

};
#endif
int main() {

Rectangle shape; 
Rectangle shape2; 

//rectangle one
float userLength, userWidth;
//rectangle two
float userLengthTwo, userWidthTwo;  

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

//test functions for rectangle one
shape.setLength(userLength); 
shape.setWidth(userWidth); 

// test functions for rectangle two
shape2.setLengthTwo(userLengthTwo); 
shape2.setWidthTwo(userWidthTwo); 




//Print to screen
	//rectangle one
	cout << "------------Rectangle Calculations-------------\n" << endl; 
	cout << "Rectangle(1) Perimeter: " << shape.rectanglePerimeter() << "\n" << endl;
	cout << "Rectangle Area(1): " << shape.rectangleArea() << "\n" << endl;
	//rectangle two
	cout << "Rectangle(2) Perimeter: " << shape2.rectanglePerimeterTwo() << "\n" << endl;
	cout << "Rectangle Area(2): " << shape2.rectangleAreaTwo() << "\n" << endl;
	
// check for equality
	if (shape.rectanglePerimeter() == shape2.rectanglePerimeterTwo()){
		cout << "Snap! Rectangle(1) and Rectangle(2) have the same perimeter!" << "\n" << endl;
	} if (shape.rectangleArea()==shape2.rectangleAreaTwo()){
		cout << "Golly gee...the rectangles have the same area!" << "\n" << endl;
	} if (shape.rectangleArea()!= shape2.rectangleAreaTwo()||shape.rectanglePerimeter()!= shape2.rectanglePerimeterTwo()){
		cout << "Arrg do ye have mutiny on deck?" << "\n" << endl; 
	}
return 0;
}






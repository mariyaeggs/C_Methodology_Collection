//rectangle.h
// class definition

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
#endif
